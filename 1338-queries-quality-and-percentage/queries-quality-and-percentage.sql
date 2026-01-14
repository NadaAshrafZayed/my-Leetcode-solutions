# Write your MySQL query statement below
SELECT query_name, 
ROUND( AVG(rating/position), 2 ) AS quality, 
ROUND( AVG(IF(rating < 3 , 1, 0)) * 100 , 2 ) AS poor_query_percentage
FROM Queries
GROUP BY query_name;

-- Explanation:
-- ROUND( ( (SELECT COUNT(*) FROM Queries WHERE rating<3) / (SELECT COUNT(*) FROM Queries) ) *100 , 2 ) AS poor_query_percentage 
-- When you use a standalone subquery like (SELECT COUNT(*) FROM Queries), it runs completely independently. It will calculate the total count of the entire table, regardless of the GROUP BY query_name in your main query.