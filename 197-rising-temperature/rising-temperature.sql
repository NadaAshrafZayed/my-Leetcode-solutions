# Write your MySQL query statement below

-- you need to specify which id to show because both the yesterday table and the today table contain a column named id
SELECT today.id 
FROM Weather yesterday JOIN Weather today
ON DATEDIFF(today.recordDate, yesterday.recordDate) = 1 
   AND today.temperature > yesterday.temperature;