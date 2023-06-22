/*
Table: Employees

+-------------+----------+
| Column Name | Type     |
+-------------+----------+
| employee_id | int      |
| name        | varchar  |
| reports_to  | int      |
| age         | int      |
+-------------+----------+
employee_id is the primary key for this table.
This table contains information about the employees and the id of the manager they report to. Some employees do not report to anyone (reports_to is null). 
 

For this problem, we will consider a manager an employee who has at least 1 other employee reporting to them.

Write an SQL query to report the ids and the names of all managers, the number of employees who report directly to them, and the average age of the reports rounded to the nearest integer.

Return the result table ordered by employee_id.
*/
select employee_id, name, count(reports_to) as reports_count, round(avg(age)) as average_age
from
(select e1.employee_id, e1.name, e2.age, e2.reports_to
from employees e1
join employees e2
on e1.employee_id=e2.reports_to) as tablenew
group by employee_id
order by employee_id;
