/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea2edd;

/**
 *
 * @author Kevin'
 */
public class Duenio {
    int cuenta;
    int cantidad;
    String moneda;

    public Duenio(int cuenta, int cantidad,String moneda) {
        this.cuenta = cuenta;
        this.cantidad = cantidad;
       this.moneda = moneda;
         
    }
    
   

    public int getCuenta() {
        return cuenta;
    }

    public void setCuenta(int cuenta) {
        this.cuenta = cuenta;
    }

    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }

    public String getMoneda() {
        return moneda;
    }

    public void setMoneda(String moneda) {
        this.moneda = moneda;
    }



  

 
  
    
}
