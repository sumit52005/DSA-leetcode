# Write your MySQL query statement below
-- select d.name as Department ,e.name as Employee,e.salary from Employee e  join Department d on e.id=d.id where e.salary=(select max(e.salary) from Employee e2 where e2.departmentId=e.departmentId);

SELECT 
    d.name AS Department,
    e.name AS Employee,
    e.salary AS Salary
FROM Employee e
JOIN Department d
    ON e.departmentId = d.id
WHERE e.salary = (
    SELECT MAX(e2.salary)
    FROM Employee e2
    WHERE e2.departmentId = e.departmentId
);