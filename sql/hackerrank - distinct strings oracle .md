# Question 

![image](https://user-images.githubusercontent.com/79325092/150293572-fcd6ea64-fa9e-4884-adee-0e9fae111c58.png)

# Solution

```
SELECT * FROM (SELECT DISTINCT city, LENGTH(city) FROM station ORDER BY LENGTH(city) ASC, city ASC) WHERE ROWNUM = 1   
UNION  
SELECT * FROM (SELECT DISTINCT city, LENGTH(city) FROM station ORDER BY LENGTH(city) DESC, city ASC) WHERE ROWNUM = 1; 
```
