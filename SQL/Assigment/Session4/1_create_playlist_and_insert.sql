CREATE TABLE IF NOT EXISTS Playlist (
    id INT AUTO_INCREMENT PRIMARY KEY,
    song_name VARCHAR(255) NOT NULL,
    artist VARCHAR(255),
    genre VARCHAR(50),
    play_count INT DEFAULT 0
);
INSERT INTO Playlist (song_name, artist, genre, play_count)
VALUES ('Blinding Lights', 'The Weeknd', 'Pop', 250),
    ('Levitating', 'Dua Lipa', 'Pop', 180),
    ('SICKO MODE', 'Travis Scott', 'Hip-Hop', 220),
    ('Shape of You', 'Ed Sheeran', 'Pop', 300),
    ('Lose Yourself', 'Eminem', 'Hip-Hop', 150);