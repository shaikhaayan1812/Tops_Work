CREATE TABLE users (
    user_id INT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    created_at DATE NOT NULL
);

CREATE TABLE categories (
    category_id INT PRIMARY KEY,
    category_name VARCHAR(100) NOT NULL
);

CREATE TABLE expenses (
    expense_id INT PRIMARY KEY,
    user_id INT NOT NULL,
    category_id INT NOT NULL,
    amount DECIMAL(10, 2) NOT NULL,
    expense_date DATE NOT NULL,
    FOREIGN KEY (user_id) REFERENCES users(user_id),
    FOREIGN KEY (category_id) REFERENCES categories(category_id)
);

INSERT INTO users (user_id, name, email, created_at)
VALUES (1, 'Aisha', 'aisha@example.com', '2024-01-10'),
       (2, 'Bilal', 'bilal@example.com', '2024-01-12'),
       (3, 'Sara', 'sara@example.com', '2024-02-01'),
       (4, 'Hassan', 'hassan@example.com', '2024-02-15'),
       (5, 'Nadia', 'nadia@example.com', '2024-03-05');

INSERT INTO categories (category_id, category_name)
VALUES (1, 'Food'),
       (2, 'Rent'),
       (3, 'Entertainment');

INSERT INTO expenses (expense_id, user_id, category_id, amount, expense_date)
VALUES (1, 1, 1, 25.50, '2024-04-01'),
       (2, 1, 2, 500.00, '2024-04-02'),
       (3, 2, 3, 80.00, '2024-04-03'),
       (4, 2, 1, 15.75, '2024-04-04'),
       (5, 3, 2, 700.00, '2024-04-05'),
       (6, 3, 3, 45.20, '2024-04-06'),
       (7, 4, 1, 22.00, '2024-04-07'),
       (8, 4, 2, 600.00, '2024-04-08'),
       (9, 5, 3, 90.00, '2024-04-09'),
       (10, 5, 1, 18.50, '2024-04-10');

INSERT INTO users (user_id, name, email, created_at)
VALUES (6, 'Ali', 'ali@example.com', '2024-04-11');

SELECT * FROM users;
SELECT * FROM categories;
SELECT * FROM expenses;

SELECT e.expense_id, u.name AS user_name, c.category_name, e.amount, e.expense_date
FROM expenses e
JOIN users u ON e.user_id = u.user_id
JOIN categories c ON e.category_id = c.category_id;

UPDATE expenses
SET amount = 30.00
WHERE expense_id = 1;

DELETE FROM expenses
WHERE expense_id = 10;

START TRANSACTION;
INSERT INTO users (user_id, name, email, created_at)
VALUES (7, 'Mina', 'mina@example.com', '2024-04-12');
COMMIT;

START TRANSACTION;
INSERT INTO users (user_id, name, email, created_at)
VALUES (8, 'Omar', 'omar@example.com', '2024-04-13');
ROLLBACK;

DELIMITER $$
CREATE PROCEDURE CalculateMonthlyUserExpense(IN p_year INT, IN p_month INT)
BEGIN
    SELECT
        u.user_id,
        u.name,
        COALESCE(SUM(e.amount), 0) AS monthly_expense
    FROM users u
    LEFT JOIN expenses e
        ON u.user_id = e.user_id
       AND YEAR(e.expense_date) = p_year
       AND MONTH(e.expense_date) = p_month
    GROUP BY u.user_id, u.name
    ORDER BY monthly_expense DESC;
END$$
DELIMITER ;

CALL CalculateMonthlyUserExpense(2024, 4);
