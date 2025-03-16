# Write your MySQL query statement below
SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans 
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE transaction_id IS NULL
GROUP BY customer_id;




-- This girl wrote very good explanation, READ CAREFULLY
-- https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/solutions/3500258/full-explanation-unlike-any-others-where-they-only-provide-the-solution