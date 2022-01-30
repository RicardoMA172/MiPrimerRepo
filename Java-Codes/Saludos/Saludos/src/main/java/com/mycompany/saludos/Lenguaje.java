/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.saludos;

/**
 *
 * @author Ricardo Mendez
 */
public class Lenguaje {
    public String Nombre;
    public String Saludo;

    public Lenguaje(String Nombre, String Saludo) {
        this.Nombre = Nombre;
        this.Saludo = Saludo;
    }

    public String getNombre() {
        return Nombre;
    }

    public void setNombre(String Nombre) {
        this.Nombre = Nombre;
    }

    public String getSaludo() {
        return Saludo;
    }

    public void setSaludo(String Saludo) {
        this.Saludo = Saludo;
    }
    
    public String Saludar(){
        String s = this.Saludo + ' ' + this.Nombre + '!';
        return s;
    }
    
    
}
