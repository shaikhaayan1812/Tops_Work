-- Session 5
-- Influencer database banana

DROP DATABASE IF EXISTS influencer_db;
CREATE DATABASE influencer_db;
USE influencer_db;


-- Task 1: influencers aur posts table banana

CREATE TABLE influencers (
    influencer_id INT PRIMARY KEY,
    name VARCHAR(100)
);

CREATE TABLE posts (
    post_id INT PRIMARY KEY,
    influencer_id INT,
    caption VARCHAR(200),
    CONSTRAINT fk_posts_influencers
        FOREIGN KEY (influencer_id)
        REFERENCES influencers(influencer_id)
);

INSERT INTO influencers (influencer_id, name)
VALUES
(1, 'Aarav Mehta'),
(2, 'Riya Sharma'),
(3, 'Kabir Patel'),
(4, 'Neha Joshi');

INSERT INTO posts (post_id, influencer_id, caption)
VALUES
(101, 1, 'Morning workout routine'),
(102, 1, 'Healthy breakfast ideas'),
(103, 2, 'Weekend travel diary'),
(104, 2, 'Best places in Udaipur'),
(105, 3, 'New phone camera test'),
(106, 3, 'Budget tech setup');

SELECT * FROM influencers;
SELECT * FROM posts;


-- Task 2: INNER JOIN se post aur influencer naam dikhana

SELECT p.caption, i.name AS influencer_name
FROM posts p
INNER JOIN influencers i
    ON p.influencer_id = i.influencer_id;


-- Task 3: LEFT JOIN se sab influencers dikhana

SELECT
    i.name AS influencer_name,
    COALESCE(p.caption, 'No Posts') AS caption
FROM influencers i
LEFT JOIN posts p
    ON i.influencer_id = p.influencer_id;


-- Task 4: RIGHT JOIN se sab posts dikhana

SELECT
    p.caption,
    i.name AS influencer_name
FROM influencers i
RIGHT JOIN posts p
    ON i.influencer_id = p.influencer_id;
