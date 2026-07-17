-- Session 6
-- Grouping aur subquery ke liye database banana

DROP DATABASE IF EXISTS grouping_db;
CREATE DATABASE grouping_db;
USE grouping_db;


-- Task 1: Har user ke total orders

CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    user_id INT,
    order_date DATE
);

INSERT INTO orders (order_id, user_id, order_date)
VALUES
(1, 101, '2026-07-01'),
(2, 101, '2026-07-02'),
(3, 102, '2026-07-03'),
(4, 103, '2026-07-04'),
(5, 101, '2026-07-05'),
(6, 102, '2026-07-06');

SELECT user_id, COUNT(order_id) AS order_count
FROM orders
GROUP BY user_id;


-- Task 2: Average rating 4.0 se zyada wale restaurants

CREATE TABLE restaurants (
    review_id INT PRIMARY KEY,
    name VARCHAR(100),
    rating DECIMAL(2,1)
);

INSERT INTO restaurants (review_id, name, rating)
VALUES
(1, 'Spice Villa', 4.5),
(2, 'Spice Villa', 4.3),
(3, 'Food Junction', 3.8),
(4, 'Food Junction', 4.0),
(5, 'Urban Tadka', 4.6),
(6, 'Urban Tadka', 4.4);

SELECT name, AVG(rating) AS average_rating
FROM restaurants
GROUP BY name
HAVING AVG(rating) > 4.0;


-- Task 3: 2000 se zyada payment karne wale users

CREATE TABLE payments (
    payment_id INT PRIMARY KEY,
    user_id INT,
    amount DECIMAL(10,2),
    payment_date DATE
);

INSERT INTO payments (payment_id, user_id, amount, payment_date)
VALUES
(1, 101, 800, '2026-07-01'),
(2, 102, 2500, '2026-07-02'),
(3, 103, 1500, '2026-07-03'),
(4, 101, 3200, '2026-07-04'),
(5, 104, 900, '2026-07-05');

SELECT DISTINCT user_id
FROM payments
WHERE user_id IN (
    SELECT user_id
    FROM payments
    WHERE amount > 2000
);


-- Task 4: Overall average se zyada rating wali movies

CREATE TABLE movies (
    rating_id INT PRIMARY KEY,
    movie_name VARCHAR(100),
    rating DECIMAL(2,1)
);

INSERT INTO movies (rating_id, movie_name, rating)
VALUES
(1, '3 Idiots', 4.8),
(2, '3 Idiots', 4.7),
(3, 'Dangal', 4.6),
(4, 'Dangal', 4.5),
(5, 'Race 3', 2.8),
(6, 'Race 3', 3.0),
(7, 'Drishyam', 4.7),
(8, 'Drishyam', 4.6);

SELECT movie_name, AVG(rating) AS movie_average
FROM movies
GROUP BY movie_name
HAVING AVG(rating) > (
    SELECT AVG(rating)
    FROM movies
);
