  # Write your MySQL query statement below
SELECT s.name
FROM Salesperson s
WHERE s.sales_id NOT IN(
   SELECT o.sales_id 
    FROM Orders o
    LEFT JOIN Company c on o.com_id = c.com_id
    WHERE c.name='RED'
)
