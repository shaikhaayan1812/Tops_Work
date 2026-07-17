-- Session 3
-- Restaurant app ke liye database banana

DROP DATABASE IF EXISTS restaurant_app;
CREATE DATABASE restaurant_app;
USE restaurant_app;


-- Task 1: Restaurants table aur 5 sample records

CREATE TABLE Restaurants (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    cuisine VARCHAR(50),
    rating DECIMAL(2,1),
    city VARCHAR(50)
);

INSERT INTO Restaurants (name, cuisine, rating, city)
VALUES
('Spice Villa', 'North Indian', 4.2, 'Ahmedabad'),
('Urban Tadka', 'Punjabi', 4.4, 'Ahmedabad'),
('Pizza Corner', 'Italian', 3.2, 'Surat'),
('Dragon Bowl', 'Chinese', 4.1, 'Vadodara'),
('South Express', 'South Indian', 4.6, 'Ahmedabad');

SELECT * FROM Restaurants;


-- Task 2: Spice Villa ki rating change karna

UPDATE Restaurants
SET rating = 4.7
WHERE name = 'Spice Villa';

SELECT * FROM Restaurants
WHERE name = 'Spice Villa';


-- Task 3: 3.5 se kam rating wale restaurants delete karna

SET SQL_SAFE_UPDATES = 0;

DELETE FROM Restaurants
WHERE rating < 3.5;

SET SQL_SAFE_UPDATES = 1;

SELECT * FROM Restaurants;


-- Task 4: Ahmedabad ke top 2 restaurants dekhna

SELECT *
FROM Restaurants
WHERE city = 'Ahmedabad'
  AND rating > 4.0
ORDER BY rating DESC
LIMIT 2;
