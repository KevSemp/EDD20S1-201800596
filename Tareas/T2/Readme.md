# TDA DE UNA MONEDA

Especificaciones Informales

## Moneda
tipos de datos es,TransferenciaMonedero,crear,TransferenciaForm,MostrarCuentas,getNombre,setCantidad

## Resumen
Este TDA proporciona una funcionalidad básica para transferir monedas


### Métodos
 ```
 public void agregarMoneda(nombre,cantidad)
```

Efecto: crea una nueva moneda en el monedero

 ```
 public void getNombre() devuelve nombre
```
Efecto: devuelve el nombre de la moneda 

 ```
 public void mostrarCuentas() devuelve cuentas
```
Condicion: Existencia de cuentas 

Efecto: Devuelve el numero de cuenta, cantidad de monedas de cada cliente

 ```
 public void setCantidad() 
```
Efecto: modifica el valor de la cantidad de monedas en el monedero

```
 public void TransferenciaForm(cuentaDestino, cuentaReceptor, cantidad) 
 returns (duenio)
```
 condicion: cantidadCuentaDestino<cantidad
 
 Efecto: devuelve un estado de cuenta nuevo al ser este modificado por la transferencia
 
 ```
 public void TransferenciaMonederoint transferencia, int cuenta) 
 returns (cuentaDuenio)
```
 Condicion: cantidadMonedera>Transferencia
 
 Efecto: Transfiere mondeas desde el monedero hacia la cuenta cliente solicitada
 
 



## Authors

* **Kevin Cardona** 
