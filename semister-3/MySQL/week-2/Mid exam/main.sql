USE EMAJONE;
-- 1 NO: Write the difference between Primary Key and Composite Primary Key

    -- Primary_key: একটি টেবিলের unique value

    -- Composite Primary Key: দুইটি value মিলে একটি unique value



-- 2 NO: Write the difference between using JOIN Query and not using JOIN query

    -- JOIN QUERY: দুইটি টেবিল কে একসাথে করে 

    -- NOT USEING JOIN QUERY: দুইটি টেবিল আলাদা থাকে 

-- 3 NO
CREATE TABLE Employees(
	FIRST_NAME VARCHAR(50) NOT NULL,
    LAST_NAME VARCHAR(50) NOT NULL,
    DATE_OF_BIRTH DATE NOT NULL,
    DEPARTMENT_ID INT ,
    SALARY DECIMAL(8,2) NOT NULL,
    PRIMARY KEY(DEPARTMENT_ID)
);
CREATE TABLE Departments(
 	DEPARTMENT_ID INT ,
    DIPARTMENT_NAME VARCHAR(30) NOT NULL,
	FOREIGN KEY(DEPARTMENT_ID)  REFERENCES EMPLOYEES(DEPARTMENT_ID)
);
        
-- 4 NO Write SQL Query to get the second max salary
SELECT DISTINCT SALARY
FROM EMPLOYEES
LIMIT 1,1;

-- 5 NO: Write SQL Query to show  the department names and the average salary of the departments
SELECT department_name,AVG(SALARY)
FROM EMPLOYEES 
	JOIN DEPARTMENTS ON EMPLOYEES.department_id= DEPARTMENTS.department_id 
GROUP BY EMPLOYEES.department_id;
-- 6 

-- 7 NO: What is a subquery? Write with an example

        -- কোন একটি query এর ভিতরে আরেকটি query
        -- example: SELECT FIRST_NAME 
                    -- FROM EMPLOYEES
                    --  WHERE SALARY<(
                    -- 	    SELECT SALARY
                    -- 	    FROM EMPLOYEES
                    -- 	    WHERE FIRST_NAME='Steven' AND EMPLOYEE_ID=100
                    --  );



-- 8 NO:Show the names of the employees who get less salary than Steven
SELECT FIRST_NAME
FROM EMPLOYEES
WHERE SALARY<(
	SELECT SALARY
	FROM EMPLOYEES
	WHERE FIRST_NAME='Steven' AND EMPLOYEE_ID=100
);

-- 9 NO: Count the number of employees of each job type
SELECT COUNT(*)
FROM EMPLOYEES
GROUP BY department_id;

-- 10 NO: Show the names of Departments which doesn’t have any employees
SELECT DEPARTMENTS.DEPARTMENT_NAME
FROM  DEPARTMENTS LEFT JOIN EMPLOYEES  
 ON  DEPARTMENTS.DEPARTMENT_ID=EMPLOYEES.DEPARTMENT_ID
WHERE EMPLOYEES.DEPARTMENT_ID IS NULL;




