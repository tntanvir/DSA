USE DUMMYDB;


SELECT *
FROM EMPLOYEES
WHERE DEPARTMENT_ID=60 OR SALARY>17000;


SELECT FIRST_NAME,SALARY,SALARY+10000 AS NEW_SALARY
FROM EMPLOYEES
WHERE  SALARY<10000;


-- DISTING
SELECT DISTINCT JOB_ID
FROM EMPLOYEES;


-- SHORT
SELECT  SALARY
FROM EMPLOYEES
WHERE SALARY<17000
ORDER BY SALARY DESC;


-- LIMITE
SELECT * 
FROM EMPLOYEES
LIMIT 5
OFFSET 5;

-- LIKE
SELECT *
FROM EMPLOYEES
WHERE LAST_NAME LIKE 'GRE%';

-- GROUP BY
SELECT COUNT(DEPARTMENT_ID)
FROM EMPLOYEES
GROUP BY DEPARTMENT_ID;


