CREATE TABLE Student(STUDENT_ID int, SAT_VERBAL int, SAT_MATH int, HS_RANK int, HS_OUTOF int, DEGREE_DATE date, DEGREE varchar(5), GPA decimal(6,4), GENDER varchar(2), MAJOR varchar(24), PRIMARY KEY (STUDENT_ID));

CREATE TABLE Residence(STUDENT_ID int, YEAR int, SEMESTER varchar(2), ADDRESS varchar(3), PRIMARY KEY (STUDENT_ID, YEAR, SEMESTER));

CREATE TABLE ClassInfo(COURSE_NUM varchar(4), HOURS numeric(4,2), DEPARTMENT varchar(4), PRIMARY KEY (COURSE_NUM, DEPARTMENT));

CREATE TABLE CourseInfo(STUDENT_ID int, COURSE_NUM varchar(4), YEAR int, SEMESTER varchar(2), DEPARTMENT varchar(24), GRADE varchar(2), INSTRUCTOR varchar(24), PRIMARY KEY (STUDENT_ID, COURSE_NUM, YEAR, SEMESTER, DEPARTMENT));

CREATE TABLE SocOrgs(STUDENT_ID int, SOC_ORG int, FOREIGN KEY (STUDENT_ID));

CREATE TABLE OtherMajAdvs(STUDENT_ID int, OMAJOR  varchar(24), OADVISOR varchar(24), FOREIGN KEY (STUDENT_ID));
