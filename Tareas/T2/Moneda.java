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
public class Moneda {

    private String nombre;
    private int cantidad;
    public static Duenio[] duenio = new Duenio[5];

    public void Moneda() {

    }

    public void agregarMoneda(String nombre, int cantidad) {
        this.nombre = nombre;
        this.cantidad = cantidad;
    }

    public String getNombre() {
        return nombre;
    }

    public int getCantidad() {
        return cantidad;
    }

    public void TransferenciaForm(int cuentaDestino, int cuentaReceptor, int cantidad) {
        try {
            boolean condicionTansferencia = true;

            for (int j = 0; j <= duenio.length - 1; j++) {
                if (duenio[j].getCuenta() == cuentaDestino) {
                    if (duenio[j].getCantidad() < cantidad) {
                        System.out.println("el usuario no tiene monedas suficientes");
                        condicionTansferencia = false;
                    } else {
                        duenio[j].setCantidad(duenio[j].getCantidad() - cantidad);
                    }
                }
            }

            if (condicionTansferencia = true) {
                for (int j = 0; j <= duenio.length - 1; j++) {

                    if (duenio[j].getCuenta() == cuentaReceptor) {

                        duenio[j].setCantidad(duenio[j].getCantidad() + cantidad);
                    }
                }
            }
        } catch (Exception v) {

        }
    }

    public void transferenciaMonedero(int transferencia, int cuenta) {
        boolean condicionTrans = true;
        if (cantidad < transferencia) {
            condicionTrans = false;
        }
        if (condicionTrans == true) {
            cantidad = cantidad - transferencia;
            try {
                for (int j = 0; j <= duenio.length - 1; j++) {

                    if (duenio[j].getCuenta() == cuenta) {

                        duenio[j].setCantidad(duenio[j].getCantidad() + cantidad);
                    }

                }
            } catch (Exception v) {
            }
        }

    }

    public void mostrarCuentas() {
        for (int j = 0; j <= duenio.length - 1; j++) {
            System.out.println(duenio[j].getCuenta() + "   " + duenio[j].getCantidad() + "   " + duenio[j].getMoneda());

        }
    }

}
