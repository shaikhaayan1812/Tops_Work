-- Stored Procedure: Calculate Monthly User Expense
DELIMITER $$ CREATE PROCEDURE CalculateMonthlyUserExpense(IN p_year INT, IN p_month INT) BEGIN
SELECT u.user_id,
    u.name,
    COALESCE(SUM(e.amount), 0) AS monthly_expense
FROM users u
    LEFT JOIN expenses e ON u.user_id = e.user_id
    AND YEAR(e.expense_date) = p_year
    AND MONTH(e.expense_date) = p_month
GROUP BY u.user_id,
    u.name
ORDER BY monthly_expense DESC;
END $$ DELIMITER;
-- Example call
CALL CalculateMonthlyUserExpense(2024, 4);