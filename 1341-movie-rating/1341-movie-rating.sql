
(select name as results 
from MovieRating join Users on Users.user_id = MovieRating.user_id group by MovieRating.user_id order by count(movie_id) desc, name asc limit 1)
Union all
(select title as results from Movies m join MovieRating r on m.movie_id = r.movie_id where Month(created_at) = 2 and Year(created_at) = 2020 group by m.movie_id order by avg(rating) desc, title asc limit 1)