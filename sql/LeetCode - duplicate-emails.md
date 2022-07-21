# Question 

![image](https://user-images.githubusercontent.com/79325092/180292315-d944981b-3f38-4061-bec7-28f60883d4b1.png)

# Solution 
```
SELECT email FROM Person GROUP BY email HAVING COUNT(*)>1;
```
