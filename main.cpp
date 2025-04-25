/*

Icker Villalon Lozoya A01613306

En este archivo main.cpp se encuentra el modelo de la pagina de comercio electronico, por lo tanto
se encuentran las clases, junto con sus funciones miembro, lo cual se encuetra en el archivo header 
(TodasLasClases.h). Se modela de tal manera que al terminar de ejecutarse el código, este represente el 
proceso completo de compras online.

*/

#include "TodasLasClases.h"
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));

    // Crear una cuenta de usuario
    cout << "Redirigiendo a login/logout/registrar ..." << endl;
    CuentaUsuario usuario(103045, 8181823456, "Icker Villalon Lozoya", "A05643257@tec.mx", "fififofu");
    cout << "Cuenta:" << endl;
    cout << "ID: " << usuario.getCuentaID() << endl;
    cout << "Teléfono: " << usuario.getTelefono() << endl;
    cout << "Nombre: " << usuario.getNombre() << endl;
    cout << "Correo: " << usuario.getCorreo() << endl;
    cout << "Contraseña: " << usuario.getContrasena() << endl;

    string opcionCuenta;
    cout << "Que deseas hacer (login, logout, registrar): ";
    cin >> opcionCuenta;

    if(opcionCuenta == "login") {
        usuario.login();
    } else if (opcionCuenta == "logout") {
        usuario.logout();
        exit(1);
    } else if(opcionCuenta == "registrar") {
        usuario.registrar();
    } else {
        cout << "Opción no válida." << endl;
        exit(1);
    }

    cout << "" << endl;

    // Crear productos
    cout << "Redirigiendo a los productos..." << endl;
    Producto producto1(101, "Laptop", 15000.0);
    Producto producto2(102, "Celular", 25000.0);

    string disponibilidad1 = producto1.disponibilidad();
    string disponibilidad2 = producto2.disponibilidad();

    cout << "Productos disponibles:" << endl;
    cout << producto1.getNombreProducto() << " - $" << producto1.getPrecioProducto() << endl;
    cout << disponibilidad1 << endl;
    cout << producto2.getNombreProducto() << " - $" << producto2.getPrecioProducto() << endl;
    cout << disponibilidad2 << endl;

    cout << "" << endl;

    // Crear un carrito de compras
    cout << "Redirigiendo a carrito de compras..." << endl;
    Carrito carrito(5001, 2);
    carrito.agregarCarrito();
    cout << "Carrito ID: " << carrito.getCarritoID() << endl;
    cout << "Cantidad de productos en el carrito: " << carrito.getCantidadProductos() << endl;
    // carrito.detallesCarrito();

    cout << "" << endl;

    // Crear un pedido
    cout << "Creando pedido..." << endl;
    Pedido pedido(2001231244, "24 de Marzo del 2024");
    cout << "El ID de su pedido es " << pedido.getPedidoID() << " y fue creado el " << pedido.getFechaCreacionPedido() << "." << endl;
    pedido.iniciarPedido();
    pedido.tramitandoTotalPago();
    pedido.finalizarPedido();

    cout << "" << endl;

    // Realizar pago
    cout << "Redirigiendo a pago..." << endl;
    Pago pago(3001, 1234567812345678, 12, 2025, 123, "Icker Villalon Lozoya");

    cout << producto1.getNombreProducto() << " - " << disponibilidad1 << endl;
    cout << producto2.getNombreProducto() << " - " << disponibilidad2 << endl;

    if (disponibilidad1 == "No sigue disponible" && disponibilidad2 == "No sigue disponible") {
        cout << "Error: Ningún producto está disponible" << endl;
        exit(1);
    }

    float suma = 0;

    if (disponibilidad1 == "Sigue disponible") {
        suma += producto1.getPrecioProducto();
    }

    if (disponibilidad2 == "Sigue disponible") {
        suma += producto2.getPrecioProducto();
    }

    cout << "El total a pagar es: $ " << suma << endl;
    pago.finalizarPago();

    cout << "" << endl;

    // Generar paquete
    cout << "Proceso de creacion de la orden del paquete..." << endl;
    Paquete paquete(4001, "Lago de Pascuaro 123", "Fragil");
    paquete.generarFicha();
    cout << "Paquete ID: " << paquete.getPaqueteID() << endl;
    cout << "Dirección de envío: " << paquete.getDireccionEnvio() << endl;
    cout << "Tipo de paquete: " << paquete.getTipoPaquete() << endl;

    cout << "" << endl;

    // Estatus del envío
    cout << "Creacion de envio: " << endl;
    Envio envio("24 de Marzo del 2024", "24 de Julio del 2024");
    cout << "El estatus del envio es: ";
    envio.statusEnvio();

    return 0;
}
