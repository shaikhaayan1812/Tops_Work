-- Session 4
-- Music database banana

DROP DATABASE IF EXISTS music_db;
CREATE DATABASE music_db;
USE music_db;


-- Task 1: Playlist table aur sample songs

CREATE TABLE Playlist (
    id INT PRIMARY KEY AUTO_INCREMENT,
    song_name VARCHAR(100),
    artist VARCHAR(100),
    genre VARCHAR(40),
    play_count INT
);

INSERT INTO Playlist (song_name, artist, genre, play_count)
VALUES
('Blinding Lights', 'The Weeknd', 'Pop', 320),
('Levitating', 'Dua Lipa', 'Pop', 260),
('Lose Yourself', 'Eminem', 'Hip-Hop', 410),
('HUMBLE.', 'Kendrick Lamar', 'Hip-Hop', 295),
('Apna Bana Le', 'Arijit Singh', 'Romantic', 180),
('Shape of You', 'Ed Sheeran', 'Pop', 390);

SELECT * FROM Playlist;


-- Task 2: Artist ko Singer naam se dikhana

SELECT song_name, artist AS Singer
FROM Playlist;


-- Task 3: Pop songs jinke plays 100 se zyada hain

SELECT *
FROM Playlist
WHERE genre = 'Pop'
  AND play_count > 100
ORDER BY play_count DESC;


-- Task 4: Hip-Hop songs count karna

SELECT COUNT(*) AS hip_hop_song_count
FROM Playlist
WHERE genre = 'Hip-Hop';


-- Task 5: Har genre ke total plays

SELECT genre, SUM(play_count) AS total_plays
FROM Playlist
GROUP BY genre;
