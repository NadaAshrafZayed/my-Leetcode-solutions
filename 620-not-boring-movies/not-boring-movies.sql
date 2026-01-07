# Write your MySQL query statement below
SELECT * FROM Cinema
WHERE id % 2 = 1 AND description != 'boring'
ORDER BY rating DESC;


-- id%2 or MOD(id, 2)
-- !=0   or  <>0  or  =1