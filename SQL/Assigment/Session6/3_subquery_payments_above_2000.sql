-- Find user_ids who have made a single payment above ₹2000
SELECT DISTINCT user_id
FROM payments
WHERE amount > 2000;