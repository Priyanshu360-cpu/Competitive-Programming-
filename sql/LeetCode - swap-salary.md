# Solution 

```
Update Salary SET sex = case sex
    WHEN 'm' THEN 'f' 
    WHEN 'f' THEN 'm'
    ELSE NULL
    END;
```
