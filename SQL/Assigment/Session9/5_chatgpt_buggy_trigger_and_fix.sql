-- Example buggy trigger (incorrectly updates all wallets instead of target user)
DELIMITER $$ CREATE TRIGGER buggy_trg_after_insert
AFTER
INSERT ON Transactions FOR EACH ROW BEGIN -- BUG: missing WHERE clause updates every row
UPDATE Wallet
SET balance = balance - NEW.amount;
END $$ DELIMITER;
-- Corrected trigger: update only the wallet of the inserted transaction's user
DELIMITER $$ CREATE TRIGGER fixed_trg_after_insert
AFTER
INSERT ON Transactions FOR EACH ROW BEGIN
UPDATE Wallet
SET balance = balance - NEW.amount
WHERE user_id = NEW.user_id;
END $$ DELIMITER;
-- Test scenario:
-- 1) INSERT INTO Wallet (user_id, balance) VALUES (401, 1000.00), (402, 800.00);
-- 2) INSERT INTO Transactions (user_id, amount) VALUES (401, 150.00);
-- Expected: only user 401's balance reduces to 850.00; user 402 remains 800.00.