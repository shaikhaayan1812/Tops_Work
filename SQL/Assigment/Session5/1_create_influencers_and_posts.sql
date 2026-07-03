CREATE TABLE IF NOT EXISTS influencers (
    influencer_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255) NOT NULL
);
CREATE TABLE IF NOT EXISTS posts (
    post_id INT AUTO_INCREMENT PRIMARY KEY,
    influencer_id INT,
    caption VARCHAR(1000),
    FOREIGN KEY (influencer_id) REFERENCES influencers(influencer_id)
);
INSERT INTO influencers (name)
VALUES ('Aisha Khan'),
    ('Raj Verma'),
    ('Maya Patel');
INSERT INTO posts (influencer_id, caption)
VALUES (1, 'Morning skincare routine'),
    (1, 'Favorite travel spots 2026'),
    (2, 'Fitness tips for beginners'),
    (2, 'Home workout routine'),
    (3, 'Vegan recipes to try'),
    (3, 'Top 5 cafes in town');