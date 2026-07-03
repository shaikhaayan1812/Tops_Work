SELECT name,
    AVG(rating) AS avg_rating
FROM restaurants
GROUP BY name
HAVING AVG(rating) > 4.0;