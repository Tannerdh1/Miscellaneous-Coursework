CREATE TABLE Users(User_ID int(11) unsigned NOT NULL AUTO_INCREMENT, Username varchar(24), Password varchar(24), Roles varchar(24), PRIMARY KEY (User_ID)) AUTO_INCREMENT = 1;
INSERT INTO Users (Username, Password, Roles)
VALUES ('tdhammond', 'abcd1234', 'Admin');
