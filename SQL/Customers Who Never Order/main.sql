# Write your MySQL query statement below
SELECT A.name AS Customers
FROM Customers A
WHERE NOT EXISTS(SELECT B.customerId FROM Orders B WHERE B.customerId=A.id)
