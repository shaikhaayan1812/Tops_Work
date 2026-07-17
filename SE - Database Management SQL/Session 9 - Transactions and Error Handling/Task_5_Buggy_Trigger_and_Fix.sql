USE transaction_db;


-- Pehle sahi trigger hata rahe hain taaki galat trigger test kar sake

DROP TRIGGER IF EXISTS deduct_wallet_balance;


-- Galat trigger
-- Ye amount minus karne ki jagah plus kar raha hai

DELIMITER $$

CREATE TRIGGER wrong_wallet_trigger
AFTER INSERT ON WalletTransaction
FOR EACH ROW
BEGIN
    UPDATE Wallet
    SET balance = balance + NEW.purchase_amount
    WHERE user_id = NEW.user_id;
END$$

DELIMITER ;


-- Galat trigger ko test karna

TRUNCATE TABLE WalletTransaction;

UPDATE Wallet
SET balance = 1000.00
WHERE user_id = 101;

INSERT INTO WalletTransaction (user_id, purchase_amount, transaction_date)
VALUES (101, 200.00, NOW());

SELECT * FROM Wallet;

-- Galat result: balance 1000 se 1200 ho jayega


-- Galat trigger delete karna

DROP TRIGGER wrong_wallet_trigger;

TRUNCATE TABLE WalletTransaction;

UPDATE Wallet
SET balance = 1000.00
WHERE user_id = 101;


-- Sahi trigger banana

DELIMITER $$

CREATE TRIGGER deduct_wallet_balance
AFTER INSERT ON WalletTransaction
FOR EACH ROW
BEGIN
    UPDATE Wallet
    SET balance = balance - NEW.purchase_amount
    WHERE user_id = NEW.user_id;
END$$

DELIMITER ;


-- Sahi trigger ko test karna

INSERT INTO WalletTransaction (user_id, purchase_amount, transaction_date)
VALUES (101, 200.00, NOW());

SELECT * FROM Wallet;

-- Sahi result: balance 1000 se 800 ho jayega
