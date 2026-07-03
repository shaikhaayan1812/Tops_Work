SELECT movie_name
FROM movies
GROUP BY movie_name
HAVING AVG(rating) > (
        SELECT AVG(rating)
        FROM movies
    );