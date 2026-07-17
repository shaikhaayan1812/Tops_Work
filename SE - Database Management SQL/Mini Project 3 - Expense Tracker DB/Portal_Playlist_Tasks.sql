-- Portal me diye gaye playlist tasks

DROP DATABASE IF EXISTS playlist_project_db;
CREATE DATABASE playlist_project_db;
USE playlist_project_db;


-- Pehle users table banana

CREATE TABLE users (
    user_id INT PRIMARY KEY,
    username VARCHAR(50)
);


-- Task 1: playlists table banana

CREATE TABLE playlists (
    playlist_id INT PRIMARY KEY AUTO_INCREMENT,
    user_id INT,
    name VARCHAR(100),
    created_at DATETIME,
    CONSTRAINT fk_playlist_user
        FOREIGN KEY (user_id)
        REFERENCES users(user_id)
);

INSERT INTO users (user_id, username)
VALUES
(1, 'ayan_music'),
(2, 'riya_beats'),
(3, 'kabir_rock');


-- Task 2: 3 playlists add karna

INSERT INTO playlists (user_id, name, created_at)
VALUES
(1, 'Workout Mix', '2026-07-02 07:30:00'),
(2, 'Chill Vibes', '2026-07-05 20:15:00'),
(3, 'Top Hits', '2026-07-08 18:00:00');

SELECT * FROM playlists;


-- Task 3: Chill Vibes ka naam change karna

UPDATE playlists
SET name = 'Evening Chill'
WHERE user_id = 2
  AND name = 'Chill Vibes';

SELECT * FROM playlists;


-- Task 4: Workout Mix delete karna

DELETE FROM playlists
WHERE user_id = 1
  AND name = 'Workout Mix';

SELECT * FROM playlists;


-- Task 5: User ne ek month me kitni playlists banayi wo count karna

DELIMITER $$

CREATE PROCEDURE GetMonthlyPlaylistCount(
    IN p_user_id INT,
    IN p_month INT
)
BEGIN
    SELECT COUNT(*) AS total_playlists
    FROM playlists
    WHERE user_id = p_user_id
      AND MONTH(created_at) = p_month;
END$$

DELIMITER ;


-- Procedure test karna

CALL GetMonthlyPlaylistCount(2, 7);
