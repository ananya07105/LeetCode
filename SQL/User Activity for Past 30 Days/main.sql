# Write your MySQL query statement below
SELECT activity_date as day, count(distinct(user_id)) as active_users
FROM Activity WHERE activity_date BETWEEN date_add('2019-07-27', interval -29 day) AND '2019-07-27'
GROUP BY activity_date
