# Write your MySQL query statement below
select * from patients
where conditions REGEXP '^(DIAB1)| DIAB1';