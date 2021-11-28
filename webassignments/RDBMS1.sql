
CREATE TABLE emp(
  id INTEGER PRIMARY KEY,
  emp_name TEXT NOT NULL,
  emp_age TEXT NOT NULL,
  emp_salary DOUBLE
);

CREATE TABLE dept(
  id INTEGER PRIMARY KEY,
  dept_name TEXT NOT NULL,
  budget DOUBLE,
  manager_name TEXT,
  manager_id INT
);

CREATE TABLE works(emp_id INTEGER, dept_id INTEGER,pct_time integer, 
foreign key (emp_id) references emp(id), foreign key (dept_id) 
references dept(id));

-- insert
INSERT INTO emp VALUES (1, 'Thomas', 23,2000),(2, 'Anderson',28 , 3000),
(3, 'Karl', 30 ,6000),(4, 'Andrew', 25 ,9000),(5, 'Jack', 22 ,4000),
(6, 'Bruce',32 ,4500);
INSERT INTO dept VALUES (11, 'Hardware',1000000,'Paul',111),
(22, 'Software',2000000 ,'Jaismin',222);
INSERT INTO works VALUES (1,11,60),(1,22,50),(2,11,45),
(3,11,68),(4,22,80),(5,22,95),(6,22,55);

-- fetch 
SELECT * FROM emp;
SELECT * FROM dept;
SELECT * FROM works;

SELECT  e.emp_name,e.emp_age ,e.id FROM  emp e inner join works w on e.id=w.emp_id 
group by e.id
having count(*)>1; --1

select d.manager_name,group_concat(e.emp_name) from works w inner join dept d on d.id=w.dept_id  inner join emp e on e.id=w.emp_id group by manager_name; --2

Select d.manager_name, (e.emp_name) from emp e left join dept d on e.id = d.manager_id group by d.manager_name;--3

select distinct (emp_name) from emp e inner join works w
on w.emp_id = e.id inner join dept d 
on d.id=w.dept_id where e.emp_salary <d.budget; --4

select manager_id from dept where budget > 1000000 ; ---5

select manager_name from dept where budget in (select max (budget) from dept);--6
