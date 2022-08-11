CREATE DATABASE todo;

CREATE TABLE `users` (
  `username` varchar(20) NOT NULL,
  `password` varchar(45) NOT NULL,
  PRIMARY KEY (`username`)
);

CREATE TABLE `tasks` (
  `taskid` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(20) NOT NULL,
  `done` tinyint(4) DEFAULT NULL,
  `task` json NOT NULL,
  CHECK (JSON_VALID(`task`)),
  PRIMARY KEY (`taskid`),
  CONSTRAINT `username` FOREIGN KEY (`username`) REFERENCES `users` (`username`)
);
