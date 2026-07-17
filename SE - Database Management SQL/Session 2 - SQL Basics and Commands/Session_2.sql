-- Session 2
-- Naya database banana

DROP DATABASE IF EXISTS session2_db;
CREATE DATABASE session2_db;
USE session2_db;


-- Task 1: restaurants table banana

CREATE TABLE restaurants (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    location VARCHAR(100),
    rating DECIMAL(2,1)
);

DESCRIBE restaurants;


-- Task 2: average_cost column add karna

ALTER TABLE restaurants
ADD average_cost INT;

DESCRIBE restaurants;


-- Task 3: restaurants table delete karna

DROP TABLE restaurants;

SHOW TABLES;


-- Task 4: playlists table banana

CREATE TABLE playlists (
    playlist_id INT PRIMARY KEY AUTO_INCREMENT,
    title VARCHAR(50),
    created_by VARCHAR(50),
    created_at DATE
);

DESCRIBE playlists;
