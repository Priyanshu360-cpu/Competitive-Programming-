# Question

![image](https://user-images.githubusercontent.com/79325092/182095421-4125e6d5-c103-4a1f-8292-aa65a7924337.png)

```
select name as Employee 
    from Employee as s
    where salary > (select salary from Employee where id=s.ManagerId);
```
