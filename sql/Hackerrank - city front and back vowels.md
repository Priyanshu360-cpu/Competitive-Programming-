# Question 

![image](https://user-images.githubusercontent.com/79325092/150296588-bd17f5bd-7354-416d-9e45-fa48c8412690.png)

# Solution - mysql
```
SELECT DISTINCT CITY FROM STATION WHERE (CITY LIKE '%A' OR CITY LIKE '%E' OR CITY LIKE '%I' OR CITY LIKE '%O' OR CITY LIKE '%U') AND (CITY LIKE 'A%' OR CITY LIKE 'E%' OR CITY LIKE 'I%' OR CITY LIKE 'O%' OR CITY LIKE 'U%');
```
