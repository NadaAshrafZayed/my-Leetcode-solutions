# Write your MySQL query statement below

SELECT st.student_id, st.student_name, sub.subject_name, COUNT(x.subject_name) AS attended_exams 
FROM Students st
CROSS JOIN Subjects sub
LEFT JOIN Examinations x
ON st.student_id = x.student_id AND x.subject_name = sub.subject_name
GROUP BY st.student_id, st.student_name, sub.subject_name
ORDER BY st.student_id, sub.subject_name;

