    
    
-- 7.5 practice

USE DUMMYDB;

SELECT *
FROM EMPLOYEES;

SELECT *
FROM JOBS;

-- 1. Show the employee names and corresponding job_titles without using JOIN query

SELECT FIRST_NAME,JOB_TITLE
FROM EMPLOYEES,JOBS
WHERE EMPLOYEES.JOB_ID=JOBS.JOB_ID;

-- 2.Do the question no 1 using JOIN query
SELECT FIRST_NAME,JOB_TITLE
FROM EMPLOYEES JOIN JOBS ON EMPLOYEES.JOB_ID=JOBS.JOB_ID;

-- 3. Show the name of the employee and the job_title who receives the maximum salary

SELECT FIRST_NAME,JOB_TITLE
FROM EMPLOYEES JOIN JOBS ON EMPLOYEES.JOB_ID=JOBS.JOB_ID
WHERE SALARY=(
				SELECT MAX(SALARY)
                FROM EMPLOYEES
            );

-- 4. Show the list of employee name and corresponding manager names.

SELECT E.FIRST_NAME AS EMPLOYEE_NAME,M.FIRST_NAME AS MANAGER_NAME
FROM EMPLOYEES AS E
	JOIN EMPLOYEES AS M
WHERE E.manager_id=M.employee_id;