# Write your MySQL query statement below
SELECT DISTINCT email AS Email
FROM Person
GROUP BY Email
HAVING COUNT(Email)>1
ORDER BY Email;