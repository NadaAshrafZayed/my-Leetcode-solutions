# Write your MySQL query statement below
SELECT customer_id, COUNT(Visits.customer_id) AS count_no_trans
FROM Visits
WHERE visit_id NOT IN (
    SELECT visit_id 
    FROM Transactions
)
GROUP BY customer_id;




-- I tries this which is wrong.
-- My mistakes:
-- An inner join only returns rows where there is a match in both tables. Since you are looking for visits without transactions, an inner join will result in zero rows.
-- SELECT Visits.customer_id, COUNT(Visits.customer_id) AS count_no_trans 
-- FROM Visits JOIN Transactions
-- ON Visits.visit_id = Transactions.visit_id
-- WHERE Visits.visit_id NOT IN (
--         SELECT DISTINCT visit_id FROM Transactions
--     )
-- GROUP BY Visits.customer_id;