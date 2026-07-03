CREATE TABLE IF NOT EXISTS Restaurants (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    cuisine VARCHAR(100),
    rating DECIMAL(2, 1),
    city VARCHAR(100)
);
INSERT INTO Restaurants (name, cuisine, rating, city)
VALUES ('Spice Villa', 'Indian', 4.5, 'Ahmedabad'),
    ('Ocean Grill', 'Seafood', 4.2, 'Mumbai'),
    ('Pasta Palace', 'Italian', 3.8, 'Ahmedabad'),
    ('Sushi Central', 'Japanese', 4.9, 'Ahmedabad'),
    ('Taco Town', 'Mexican', 3.2, 'Surat');