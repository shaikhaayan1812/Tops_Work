-- Session 1
-- Task 1: Server me kaun-kaun se database hain wo dekhna

SHOW DATABASES;

-- Workbench me Schemas panel ka screenshot lena hai.


-- Task 2: InstaClone database aur Users table banana

DROP DATABASE IF EXISTS InstaClone;
CREATE DATABASE InstaClone;
USE InstaClone;

CREATE TABLE Users (
    user_id INT PRIMARY KEY,
    username VARCHAR(50),
    email VARCHAR(100),
    followers_count INT
);


-- Task 3: Users table me 3 users ka data add karna

INSERT INTO Users (user_id, username, email, followers_count)
VALUES
(1, 'ayan_clicks', 'ayan@example.com', 1450),
(2, 'travel_with_riya', 'riya@example.com', 8200),
(3, 'foodie_raj', 'raj@example.com', 3750);

SELECT * FROM Users;


-- Task 4: Posts table banana aur Users table se connect karna

CREATE TABLE Posts (
    post_id INT PRIMARY KEY,
    user_id INT,
    caption VARCHAR(200),
    post_date DATE,
    CONSTRAINT fk_posts_users
        FOREIGN KEY (user_id)
        REFERENCES Users(user_id)
);

INSERT INTO Posts (post_id, user_id, caption, post_date)
VALUES
(101, 1, 'Learning SQL today', '2026-07-01'),
(102, 2, 'Sunset from the mountains', '2026-07-02'),
(103, 3, 'Best street food in Ahmedabad', '2026-07-03');

SELECT * FROM Posts;
