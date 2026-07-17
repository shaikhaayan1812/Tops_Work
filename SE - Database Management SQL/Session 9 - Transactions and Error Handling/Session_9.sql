-- Session 9
-- Transaction examples ke liye database banana

DROP DATABASE IF EXISTS transaction_db;
CREATE DATABASE transaction_db;
USE transaction_db;


-- Zaroori tables banana

CREATE TABLE Orders (
    order_id INT PRIMARY KEY,
    user_id INT,
    order_amount DECIMAL(10,2),
    order_date DATE
) ENGINE = InnoDB;

CREATE TABLE OrderItems (
    item_id INT PRIMARY KEY,
    order_id INT,
    item_name VARCHAR(100),
    price DECIMAL(10,2)
) ENGINE = InnoDB;

CREATE TABLE Cart (
    cart_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT,
    product_name VARCHAR(100),
    price DECIMAL(10,2)
) ENGINE = InnoDB;


-- Task 1: COMMIT se order save karna

START TRANSACTION;

INSERT INTO Orders (order_id, user_id, order_amount, order_date)
VALUES (1, 101, 850.00, '2026-07-10');

COMMIT;

SELECT * FROM Orders;


-- Task 2: ROLLBACK se insert undo karna

START TRANSACTION;

INSERT INTO OrderItems (item_id, order_id, item_name, price)
VALUES
(1, 1, 'Paneer Pizza', 320.00),
(2, 1, 'Cold Coffee', 140.00);

ROLLBACK;

SELECT * FROM OrderItems;


-- Task 3: SAVEPOINT se sirf last product hataana

START TRANSACTION;

INSERT INTO Cart (user_id, product_name, price)
VALUES (101, 'Wireless Mouse', 799.00);

SAVEPOINT first_product_added;

INSERT INTO Cart (user_id, product_name, price)
VALUES (101, 'Mechanical Keyboard', 2499.00);

ROLLBACK TO first_product_added;

COMMIT;

SELECT * FROM Cart;


-- Task 4: Wallet balance kam karne wala trigger

CREATE TABLE Wallet (
    user_id INT PRIMARY KEY,
    balance DECIMAL(10,2)
) ENGINE = InnoDB;

CREATE TABLE WalletTransaction (
    transaction_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT,
    purchase_amount DECIMAL(10,2),
    transaction_date DATETIME,
    CONSTRAINT fk_wallet_transaction_user
        FOREIGN KEY (user_id)
        REFERENCES Wallet(user_id)
) ENGINE = InnoDB;

INSERT INTO Wallet (user_id, balance)
VALUES (101, 5000.00);

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

INSERT INTO WalletTransaction (user_id, purchase_amount, transaction_date)
VALUES (101, 750.00, NOW());

SELECT * FROM Wallet;
SELECT * FROM WalletTransaction;
