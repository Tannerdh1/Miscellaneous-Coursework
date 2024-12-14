create-student-tables.sql:
This file creates the tables for the Student Data using SQL statements. This defines the tables, the attributes of
these tables, the contraints and types of these attributes, the primary and foreign keys (if any) of the tables.

populate-student-tables.sql:
This file populates the tables created in create-student-tables.sql with the data from the RawData table using SQL
statements.

verify-fds.sql:
The file verifies that the FDs are all satisfied by the data from the RawData using SQL statements.

drop-student-tables.sql:
This file drops all of the tables created by create-student-tables.sql.

create-admin-tables.sql:
This file creates tables that are needed for administration of the website. This includes the ability to manage users
and grant admin
finalStyles.css:

DatabaseWriteup.txt:

studentData.php:
studentData.php is the main menu (might change the name of the file to be more and appropriately descriptive of what it
does). Contains buttons to take the user to different parts of the websites such as; viewing student data, changing
preferences, viewing fixed queries, managing users (for admins).

fixedQueries.php:
Menu for the fixed queries. Buttons for each of the fixed queries and a text field for the 4th fixed query that
requires a major specified by the user. 

preferences.php:
Menu for changing perferences for the user. The user can change the amount of records show up on their page (the
default value is 20).

finalStyles.css:
This holds all of the styles for the webpage. These styles are for things like the style of buttons, the forms, and the
body. This css file will be used for all pages of the website for consistency and the design desired.
