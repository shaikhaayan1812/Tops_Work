CREATE OR REPLACE VIEW TopSpendersView AS
SELECT s.username,
    f.order_total
FROM FoodOrder f
    JOIN SpotifyUser s ON f.user_id = s.user_id
WHERE f.order_total > 1000;