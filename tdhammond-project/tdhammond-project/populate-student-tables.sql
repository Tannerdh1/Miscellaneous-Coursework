INSERT INTO tdhammond_db.Student select distinct STUDENT_ID, SAT_VERBAL, SAT_MATH, HS_RANK, HS_OUT, DEGREE_DATE, DEGREE, GPA, GENDER, MAJOR, OMAJOR from StudentData.RawData;
INSERT INTO tdhammond_db.Residence select distinct STUDENT_ID, YEAR, SEMESTER, ADDRESS from StudentData.RawData;
INSERT INTO tdhammond_db.Classes select distinct COURSE_NUM, HOURS, DEPARTMENT from StudentData.RawData;
INSERT INTO tdhammond_db.CourseInfo select distinct STUDENT_ID, YEAR, SEMESTER, COURSE_NUM, DEPARTMENT, INSTRUCTOR, GRADE from StudentData.RawData;
INSERT INTO tdhammond_db.SocOrgs select distinct STUDENT_ID, SOC_ORG from StudentData.RawData;
INSERT INTO tdhammond_db.OtherMajAdvs select distinct STUDENT_ID, OMAJOR, OADVISOR from StudentData.RawData;
