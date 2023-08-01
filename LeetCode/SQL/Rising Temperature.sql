# Write your MySQL query statement below
select w.id as 'id'
from Weather as r
inner join Weather as w on 
    date_add(r.recordDate, interval 1 day) = w.recordDate and 
        w.temperature > r.temperature;