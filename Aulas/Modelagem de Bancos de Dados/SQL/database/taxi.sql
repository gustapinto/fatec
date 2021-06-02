-- MariaDB dump 10.19  Distrib 10.5.10-MariaDB, for debian-linux-gnu (x86_64)
--
-- Host: localhost    Database: taxi
-- ------------------------------------------------------
-- Server version	10.5.10-MariaDB-1:10.5.10+maria~focal

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `clientes`
--

DROP TABLE IF EXISTS `clientes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `clientes` (
  `cliId` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(30) NOT NULL,
  `cpf` varchar(14) NOT NULL,
  PRIMARY KEY (`cliId`),
  UNIQUE KEY `cpf` (`cpf`)
) ENGINE=InnoDB AUTO_INCREMENT=1782 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `clientes`
--

LOCK TABLES `clientes` WRITE;
/*!40000 ALTER TABLE `clientes` DISABLE KEYS */;
INSERT INTO `clientes` VALUES (1532,'Asbrubal','448.754.253-65'),(1755,'Doriana','567.387.387-44'),(1780,'Quincas','546.373.762-02'),(1781,'Borbas','547.234.435-12');
/*!40000 ALTER TABLE `clientes` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `corridas`
--

DROP TABLE IF EXISTS `corridas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `corridas` (
  `idCorrida` int(11) NOT NULL AUTO_INCREMENT,
  `cliId` int(11) NOT NULL,
  `placa` varchar(7) NOT NULL,
  `dataPedido` date NOT NULL,
  PRIMARY KEY (`idCorrida`),
  KEY `cliId` (`cliId`),
  KEY `taxista` (`placa`),
  CONSTRAINT `corridas_ibfk_1` FOREIGN KEY (`cliId`) REFERENCES `clientes` (`cliId`),
  CONSTRAINT `corridas_ibfk_2` FOREIGN KEY (`placa`) REFERENCES `taxis` (`placa`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `corridas`
--

LOCK TABLES `corridas` WRITE;
/*!40000 ALTER TABLE `corridas` DISABLE KEYS */;
INSERT INTO `corridas` VALUES (5,1755,'dae6534','2021-05-26'),(6,1780,'dkl7878','2021-05-26');
/*!40000 ALTER TABLE `corridas` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `taxis`
--

DROP TABLE IF EXISTS `taxis`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `taxis` (
  `placa` varchar(7) NOT NULL,
  `marca` varchar(30) DEFAULT NULL,
  `modelo` varchar(20) NOT NULL,
  `ano_fabricacao` int(11) DEFAULT 2020,
  PRIMARY KEY (`placa`),
  UNIQUE KEY `placa` (`placa`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `taxis`
--

LOCK TABLES `taxis` WRITE;
/*!40000 ALTER TABLE `taxis` DISABLE KEYS */;
INSERT INTO `taxis` VALUES ('dae6534','Ford','Fiesta',1999),('dkl7878','Volkswagem','Gol',2017),('jjm3692','Chevrolet','Corsa',1999);
/*!40000 ALTER TABLE `taxis` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-05-29 18:59:06
