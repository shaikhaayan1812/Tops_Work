START TRANSACTION;
INSERT INTO users (user_id, name, email, created_at)
VALUES (7, 'Mina', 'mina@example.com', '2024-04-12');
COMMIT;
START TRANSACTION;
INSERT INTO users (user_id, name, email, created_at)
VALUES (8, 'Omar', 'omar@example.com', '2024-04-13');
ROLLBACK;
SELECT *
FROM users;