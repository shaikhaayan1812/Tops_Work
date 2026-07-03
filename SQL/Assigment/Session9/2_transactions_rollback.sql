START TRANSACTION;
INSERT INTO OrderItems (item_id, order_id, product_name, quantity)
VALUES (NULL, 201, 'Burger', 2);
INSERT INTO OrderItems (item_id, order_id, product_name, quantity)
VALUES (NULL, 201, 'Fries', 1);
ROLLBACK;
-- After rollback, the two inserted items should not exist.