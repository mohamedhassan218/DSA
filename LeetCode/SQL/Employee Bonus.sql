# Write your MySQL query statement below
select Employee.name as 'name', Bonus.bonus as 'bonus'
from Employee left join Bonus on Employee.empId = Bonus.empId
where Bonus.bonus < 1000 or Bonus.bonus is null;