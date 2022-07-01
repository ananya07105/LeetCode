# Write your MySQL query statement below
SELECT email AS Email
From Person
GROUP BY Email
HAVING COUNT(*)>1
