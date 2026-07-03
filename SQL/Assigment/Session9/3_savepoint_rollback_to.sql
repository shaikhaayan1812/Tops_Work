START TRANSACTION;
INSERT INTO Cart (cart_id, user_id, product_name)
VALUES (NULL, 301, 'Laptop');
SAVEPOINT after_first;
INSERT INTO Cart (cart_id, user_id, product_name)
VALUES (NULL, 301, 'Mouse');
ROLLBACK TO SAVEPOINT after_first;
COMMIT;
-- The final Cart should contain only the first product.