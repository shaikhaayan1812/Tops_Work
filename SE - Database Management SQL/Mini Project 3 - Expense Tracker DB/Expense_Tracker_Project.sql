-- Mini Project 3
-- Personal Expense Tracker ka database banana

DROP DATABASE IF EXISTS expense_tracker_db;
CREATE DATABASE expense_tracker_db;
USE expense_tracker_db;


-- Main tables banana

CREATE TABLE users (
    user_id INT PRIMARY KEY AUTO_INCREMENT,
    full_name VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE categories (
    category_id INT PRIMARY KEY AUTO_INCREMENT,
    category_name VARCHAR(50) UNIQUE NOT NULL
);

CREATE TABLE transactions (
    transaction_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT NOT NULL,
    category_id INT NOT NULL,
    amount DECIMAL(10,2) NOT NULL,
    description VARCHAR(200),
    transaction_date DATE NOT NULL,
    CONSTRAINT fk_transaction_user
        FOREIGN KEY (user_id)
        REFERENCES users(user_id),
    CONSTRAINT fk_transaction_category
        FOREIGN KEY (category_id)
        REFERENCES categories(category_id)
);


-- Sample users aur categories add karna

INSERT INTO users (full_name, email)
VALUES
('Ayan Shaikh', 'ayan@example.com'),
('Riya Sharma', 'riya@example.com');

INSERT INTO categories (category_name)
VALUES
('Food'),
('Travel'),
('Shopping'),
('Bills');

INSERT INTO transactions
(user_id, category_id, amount, description, transaction_date)
VALUES
(1, 1, 350.00, 'Dinner with friends', '2026-07-02'),
(1, 2, 1200.00, 'Bus and cab charges', '2026-07-05'),
(1, 3, 1800.00, 'New shoes', '2026-07-08'),
(2, 1, 500.00, 'Lunch', '2026-07-10');


-- CRUD Operations

-- Create: Naya transaction add karna

INSERT INTO transactions
(user_id, category_id, amount, description, transaction_date)
VALUES
(1, 4, 900.00, 'Electricity bill', '2026-07-12');


-- Read: Saare transactions details ke saath dekhna

SELECT
    t.transaction_id,
    u.full_name,
    c.category_name,
    t.amount,
    t.description,
    t.transaction_date
FROM transactions t
INNER JOIN users u
    ON t.user_id = u.user_id
INNER JOIN categories c
    ON t.category_id = c.category_id
ORDER BY t.transaction_date DESC;


-- Update: Transaction amount change karna

UPDATE transactions
SET amount = 950.00
WHERE transaction_id = 5;


-- Delete: Transaction delete karna

DELETE FROM transactions
WHERE transaction_id = 5;


-- Monthly summary ke liye stored procedure

DELIMITER $$

CREATE PROCEDURE GetMonthlySummary(
    IN p_user_id INT,
    IN p_month INT,
    IN p_year INT
)
BEGIN
    SELECT
        u.full_name,
        COUNT(t.transaction_id) AS total_transactions,
        IFNULL(SUM(t.amount), 0) AS total_expense
    FROM users u
    LEFT JOIN transactions t
        ON u.user_id = t.user_id
       AND MONTH(t.transaction_date) = p_month
       AND YEAR(t.transaction_date) = p_year
    WHERE u.user_id = p_user_id
    GROUP BY u.user_id, u.full_name;

    SELECT
        c.category_name,
        IFNULL(SUM(t.amount), 0) AS category_total
    FROM categories c
    LEFT JOIN transactions t
        ON c.category_id = t.category_id
       AND t.user_id = p_user_id
       AND MONTH(t.transaction_date) = p_month
       AND YEAR(t.transaction_date) = p_year
    GROUP BY c.category_id, c.category_name
    ORDER BY category_total DESC;
END$$

DELIMITER ;


-- Procedure test karna

CALL GetMonthlySummary(1, 7, 2026);
