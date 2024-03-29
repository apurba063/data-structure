1.CREATE TABLE personalDeatilsInformation(

    id varchar(50) PRIMARY KEY,
    name varchar(50) NOT NULL,
    email varchar(50) UNIQUE,
    age int NOT NULL

    CHECK(age>0)
    
);

CREATE TABLE account(

    personId varchar(50) PRIMARY KEY,
    account_no int NOT NULL,
    balance double NOT NULL

    CHECK(balance>0)
    
);

2.INSERT INTO `personaldeatilsinformation` (`id`, `name`, `email`, `age`) VALUES ('10412', 'Shafiqa Uddin,', 'shafique12@gmail1265.com', '25');
INSERT INTO `personaldeatilsinformation` (`id`, `name`, `email`, `age`) VALUES ('10312', 'Shakib rehman1,', 'shakib345@gmail.com', '29');
INSERT INTO `personaldeatilsinformation` (`id`, `name`, `email`, `age`) VALUES ('1022', 'Shafiq Uddin89,', 'shafique1278@gmail.com', '27');


SELECT * FROM `personaldeatilsinformation` ORDER BY id ASC;
