-- IT Employee Compensation & Domain Analysis Queries
-- Database: call_center_db
-- Table: employee_tech_dataset

-- 1. Fetching all employee records to check the dataset
SELECT * FROM employee_tech_dataset;

-- 2. Average Monthly Salary and Experience by Domain
SELECT Domain, 
       AVG(Monthly_Salary) AS Avg_Monthly_Salary, 
       AVG(Experience_Years) AS Avg_Experience
FROM employee_tech_dataset
GROUP BY Domain;

-- 3. Total Compensation Analysis by Remote Work Status
SELECT Remote_work, 
       SUM(Monthly_Salary * 12 + Bonus) AS Total_Yearly_Compensation,
       COUNT(*) AS Total_Employees
FROM employee_tech_dataset
GROUP BY Remote_work;

-- 4. Top Paid Employees with 5 Years of Experience
SELECT Name, Domain, Experience_Years, Monthly_Salary
FROM employee_tech_dataset
WHERE Experience_Years = 5
ORDER BY Monthly_Salary DESC;