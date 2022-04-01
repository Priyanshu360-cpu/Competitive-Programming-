![image](https://user-images.githubusercontent.com/79325092/161197779-31465a0b-0f8c-4d81-80e9-3538f2c73c9f.png)
![image](https://user-images.githubusercontent.com/79325092/161197901-13ece590-5d6e-49eb-8393-ee90b1074910.png)


# Solution 

```
SELECT Person.firstName, Person.lastName, Address.city, Address.state
FROM Person
LEFT JOIN Address ON Person.personId=Address.personId;
```
