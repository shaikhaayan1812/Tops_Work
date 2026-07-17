-- Session 7
-- Constraints aur views ke liye database banana

DROP DATABASE IF EXISTS constraints_db;
CREATE DATABASE constraints_db;
USE constraints_db;


-- Task 1: Restaurant table banana

CREATE TABLE Restaurant (
    id INT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    location VARCHAR(100) NOT NULL,
    cuisine VARCHAR(50)
);

INSERT INTO Restaurant (id, name, location, cuisine)
VALUES
(1, 'Spice Villa', 'Ahmedabad', 'North Indian'),
(2, 'Urban Tadka', 'Surat', 'Punjabi'),
(3, 'South Express', 'Vadodara', 'South Indian');


-- Task 2: FoodOrder table foreign key ke saath banana

CREATE TABLE FoodOrder (
    order_id INT PRIMARY KEY,
    restaurant_id INT,
    user_id INT,
    order_total DECIMAL(10,2),
    CONSTRAINT fk_foodorder_restaurant
        FOREIGN KEY (restaurant_id)
        REFERENCES Restaurant(id)
);


-- Task 3: SpotifyUser table banana aur 6 users add karna

CREATE TABLE SpotifyUser (
    user_id INT PRIMARY KEY,
    username VARCHAR(50) UNIQUE,
    email VARCHAR(100) NOT NULL,
    subscription_type VARCHAR(30)
);

INSERT INTO SpotifyUser (user_id, username, email, subscription_type)
VALUES
(101, 'ayan_music', 'ayan@example.com', 'Premium'),
(102, 'riya_beats', 'riya@example.com', 'Free'),
(103, 'kabir_rock', 'kabir@example.com', 'Premium'),
(104, 'neha_playlist', 'neha@example.com', 'Student'),
(105, 'raj_lofi', 'raj@example.com', 'Free'),
(106, 'simran_pop', 'simran@example.com', 'Premium');

INSERT INTO FoodOrder (order_id, restaurant_id, user_id, order_total)
VALUES
(1, 1, 101, 850),
(2, 2, 102, 1250),
(3, 1, 103, 2450),
(4, 3, 104, 3100),
(5, 2, 105, 1750),
(6, 3, 106, 950);


-- Task 4: TopSpendersView banana

CREATE VIEW TopSpendersView AS
SELECT
    s.username,
    f.order_total
FROM FoodOrder f
INNER JOIN SpotifyUser s
    ON f.user_id = s.user_id
WHERE f.order_total > 1000;

SELECT * FROM TopSpendersView;


-- Task 5: View se 2000 se zyada spend wale users dikhana

SELECT username, order_total
FROM TopSpendersView
WHERE order_total > 2000
ORDER BY order_total DESC;
