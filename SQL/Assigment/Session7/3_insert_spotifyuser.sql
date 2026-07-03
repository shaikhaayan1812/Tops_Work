CREATE TABLE IF NOT EXISTS SpotifyUser (
    user_id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(100) UNIQUE,
    email VARCHAR(255) NOT NULL,
    subscription_type VARCHAR(50)
);
INSERT INTO SpotifyUser (username, email, subscription_type)
VALUES ('musicfan1', 'musicfan1@example.com', 'Free'),
    ('chill_beats', 'chill@example.com', 'Premium'),
    ('dj_ravi', 'ravi@example.com', 'Premium'),
    ('sara_plays', 'sara@example.com', 'Free'),
    ('alex_tracks', 'alex@example.com', 'Premium'),
    ('lina_songs', 'lina@example.com', 'Free');