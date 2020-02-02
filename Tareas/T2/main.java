/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea2edd;

import java.util.Scanner;

/**
 *
 * @author Kevin'
 */
public class Tarea2Edd {

    public static Moneda[] arreglo1 = new Moneda[20];

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic
        Duenio duenioNuevo1 = new Duenio(123, 0, " ");
        Duenio duenioNuevo2 = new Duenio(567, 0, " ");
        Duenio duenioNuevo3 = new Duenio(890, 0, " ");
        Duenio duenioNuevo4 = new Duenio(144, 0, " ");
        Duenio duenioNuevo5 = new Duenio(134, 0, " ");
        Moneda objMoneda = new Moneda();
        Moneda.duenio[0] = duenioNuevo1;
        Moneda.duenio[1] = duenioNuevo2;
        Moneda.duenio[2] = duenioNuevo3;
        Moneda.duenio[3] = duenioNuevo4;
        Moneda.duenio[4] = duenioNuevo5;

        int opcion;
        int menu = 2;

        int contMoneda = 0;
        
        Scanner sn = new Scanner(System.in);
        do {
            System.out.println("1. Agregar Moneda");
            System.out.println("2. Tansferir Del mendero");
            System.out.println("3. Transefir entre clientes");
            System.out.println("4. Mostrar Cuentas");
            System.out.println("5. Salir");

            System.out.println("Escribe una de las opciones");
            opcion = sn.nextInt();

            switch (opcion) {
                case 1:
                    System.out.println("Ingresar nombre");
                    String nombre = sn.next();
                    System.out.println("Cantidad");
                    int cantidad = sn.nextInt();
                    Moneda objMonedaNueva = new Moneda();
                    objMonedaNueva.agregarMoneda(nombre, cantidad);
                    arreglo1[contMoneda] = objMonedaNueva;
                    contMoneda = contMoneda + 1;
                    menu = 2;
                    break;

                case 2:
                    for (int j = 0; j <= Moneda.duenio.length - 1; j++) {
                        System.out.println("Cuenta" + Moneda.duenio[j].cuenta);

                    }
                    System.out.println("Ingresar Cuenta destino");
                    int cuenta = sn.nextInt();

                    try {

                        for (int j = 0; j <= arreglo1.length - 1; j++) {
                            System.out.println(j + 1 + ". " + "nombre" + arreglo1[j].getNombre() + "  cantidad: " + arreglo1[j].getCantidad());

                        }
                    } catch (Exception v) {
                    }
                    System.out.println("Seleccionar moneda");

                    int moneda = sn.nextInt();
                    System.out.println("Seleccionar cantidad:");
                    int transferencia = sn.nextInt();
                    arreglo1[moneda - 1].transferenciaMonedero(transferencia, cuenta);

                    break;

                case 3:
                    System.out.println("Ingresar Cuenta destino");
                    int cuentaDestino = sn.nextInt();
                    System.out.println("Ingresar Cuenta receptor");
                    int cuentaReceptor = sn.nextInt();
                    System.out.println("Ingresar cantidad a transferir");
                    int cuentidadTransferida = sn.nextInt();

                    objMoneda.TransferenciaForm(cuentaDestino, cuentaReceptor, cuentidadTransferida);

                    break;

                case 4:
                    objMoneda.mostrarCuentas();

                    break;

            }
        } while (menu == 2);

    }

}
