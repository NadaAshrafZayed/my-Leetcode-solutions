# Write your MySQL query statement below
SELECT EmployeeUNI.unique_id, Employees.name
FROM Employees
LEFT JOIN EmployeeUNI
ON
(Employees.id = EmployeeUNI.id);



--  If a user does not have a unique ID replace just show null.
-- 3shan kda I used el LEFTTTT JOIN