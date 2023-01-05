# Write your MySQL query statement below
Select employee_id,(if(employee_id%2=0 OR name LIKE'M%',0,salary)) as bonus from Employees Order By employee_id;
