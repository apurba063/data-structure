CREATE TABLE Person(

    id varchar(20) PRIMARY KEY,
    name varchar(30) NOT NULL,
    email varchar(50) UNIQUE,
    age int NOT NULL
    CHECK(age>0)
    
);

CREATE TABLE account(

    personId varchar(50) PRIMARY KEY,
    accountno int NOT NULL,
    balance double NOT NULL

    CHECK(balance>0)
    
);

INSERT INTO `Person` (`id`, `name`, `email`, `age`) VALUES ('1', 'Adhi Roy,', 'adhi123@gmail.com', '21');
INSERT INTO `Person` (`id`, `name`, `email`, `age`) VALUES ('2', 'Adit Roy,', 'adit123@gmail.com', '21');
INSERT INTO `Person` (`id`, `name`, `email`, `age`) VALUES ('3', 'Adhya Roy,', 'adhyaa23@gmail.com', '23');
INSERT INTO `Person` (`id`, `name`, `email`, `age`) VALUES ('4', 'Adhoo Roy,', 'adhyoo23@gmail.com', '22');


SELECT * FROM `Person` ORDER BY id ASC;