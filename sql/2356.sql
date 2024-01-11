/*
Table: Teacher

+-------------+------+
| Column Name | Type |
+-------------+------+
| teacher_id  | int  |
| subject_id  | int  |
| dept_id     | int  |
+-------------+------+
(subject_id, dept_id) is the primary key for this table.
Each row in this table indicates that the teacher with teacher_id teaches the subject subject_id in the department dept_id.
 

Calculate the number of unique subjects each teacher teaches in the university.

Return the result table in any order.
*/

Select  teacher_id ,
count(distinct subject_id ) as cnt from Teacher
group by teacher_id
