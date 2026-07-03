START TRANSACTION;
INSERT INTO Orders (order_id, user_id, order_total)
VALUES (NULL, 101, 499.99);
COMMIT;
-- Reconnect to verify the order persists.