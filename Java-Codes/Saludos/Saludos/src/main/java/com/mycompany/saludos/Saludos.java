/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.saludos;
package com.mycompany.lenguaje;
//import java.util.Scanner;
/**
 *
 * @author Ricardo Mendez
 */
public class Saludos {
    public static void main(String[] args) {
        //System.out.println("Hola Mundo!");
        //Scanner sc = new Scanner(System.in);
        System.out.println("Dame Nombre:");
        //Objetos/Instancias de la Clase Lenguaje
        Lenguaje español = new Lenguaje("Oscar", "Hola");
        Lenguaje english = new Lenguaje("Ricardo", "Hello");
        
        String esp = español.Saludar();
        System.out.println(esp);
        
        español.setNombre("Ricardo");
        esp = español.Saludar();
        System.out.println(esp);
        
        
        System.out.println(english.Saludar());
        english.setSaludo("Hi");
        english.setNombre("Oscar");
        System.out.println(english.Saludar());
    }
}
