CREATE TABLE IF NOT EXISTS FoodOrder (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    restaurant_id INT,
    user_id INT,
    order_total DECIMAL(10, 2),
    FOREIGN KEY (restaurant_id) REFERENCES Restaurant(id)
);