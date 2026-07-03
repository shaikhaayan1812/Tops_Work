-- Wallet table and trigger to deduct amount on new transaction
CREATE TABLE IF NOT EXISTS Wallet (
    user_id INT PRIMARY KEY,
    balance DECIMAL(12, 2)
);
CREATE TABLE IF NOT EXISTS Transactions (
    txn_id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT,
    amount DECIMAL(12, 2)
);
DELIMITER $$ CREATE TRIGGER trg_after_insert_transaction
AFTER
INSERT ON Transactions FOR EACH ROW BEGIN
UPDATE Wallet
SET balance = balance - NEW.amount
WHERE user_id = NEW.user_id;
END $$ DELIMITER;