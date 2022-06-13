# Write your MySQL query statement below
SELECT employee_id, IF (employee_id%2!=0 AND substring(name,1,1)!='M', salary, 0) AS bonus
FROM Employees
