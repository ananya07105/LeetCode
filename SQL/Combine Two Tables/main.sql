# Write your MySQL query statement below
SELECT firstName,lastName, state, city
FROM Person
LEFT JOIN Address
on person.personId=address.personId
