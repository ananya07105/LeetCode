# Write your MySQL query statement below
SELECT DISTINCT name,balance
FROM (
    SELECT u.name, 
    SUM(t.amount) OVER (PARTITION BY u.name) AS balance 
    FROM Transactions AS t JOIN Users AS u
    ON t.account=u.account
)x
WHERE balance>10000
