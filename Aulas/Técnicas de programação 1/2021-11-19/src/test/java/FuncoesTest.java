/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/UnitTests/JUnit5TestClass.java to edit this template
 */

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

/**
 *
 * @author gustavo
 */
public class FuncoesTest {
    
    public FuncoesTest() {
    }
    
    @BeforeAll
    public static void setUpClass() {
    }
    
    @AfterAll
    public static void tearDownClass() {
    }
    
    @BeforeEach
    public void setUp() {
    }
    
    @AfterEach
    public void tearDown() {
    }

    @Test
    public void testSomar_0args() {
        Funcoes instance = new Funcoes();
        
        int expResult = 2;
        int result = instance.somar();
        
        assertEquals(expResult, result);
    }

    @Test
    public void testSomar_int_int() {
        int n1 = 0;
        int n2 = 0;
        
        Funcoes instance = new Funcoes();
        
        int expResult = 0;
        int result = instance.somar(n1, n2);
        
        assertEquals(expResult, result);
    }

    @Test
    public void testSubtrair() {
        Funcoes instance = new Funcoes();
        
        instance.subtrair();
    }
    
}
