/*

Icker Villalon Lozoya A01613306

En este archivo header (.h) se encuentran todas las clases que se
utilizaran en el archivo main (que representa la pagina de comercio
electronico).

*/

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

// Es la cuenta personal del usuario de la plataforma.
class CuentaUsuario {
    private:
        long long int cuentaID, telefono;
        string nombre, correo, contrasena;
    public:
        CuentaUsuario() {
            cuentaID = 0;
            telefono = 0;
            nombre = "No definido";
            correo = "No definido";
            contrasena = "No definido";
        }
        CuentaUsuario(long long int ctaID, long long int tel, string nom, string email, string contr) {
            cuentaID = ctaID;
            telefono = tel;
            nombre = nom;
            correo = email;
            contrasena = contr;
        }
        ~CuentaUsuario() {}
        
        long long int getCuentaID() {
            return cuentaID;
        }
        long long int getTelefono() {
            return telefono;
        }
        string getNombre() {
            return nombre;
        }
        string getCorreo() {
            return correo;
        }
        string getContrasena() {
            return contrasena;
        }

        void setCuentaID(long long int ctaID) {
            cuentaID = ctaID;
        }
        void setTelefono(long long int tel) {
            telefono = tel;
        }
        void setNombre(string nom) {
            nombre = nom;
        }
        void setCorreo(string email) {
            correo = email;
        }
        void setContrasena(string contr) {
            contrasena = contr;
        }

        void login() {
            cout << "Bienvenido " << nombre << ", ¿que productos deseas elegir?" << endl; 
        }
        void logout() {
            cout << "Esperamos con gusto tu siguiente visita " << nombre << "." << endl;
        }
        void registrar() {
            cout << "Los datos de tu cuenta se han guardado correctamente " << nombre << "." << endl;
        }
};

// Son los productos que se encuentran en la plataforma.
class Producto {
    private:
        int productoID;
        string nombreProducto;
        float precioProducto;
    public:
        Producto() {
            productoID = 0;
            nombreProducto = "Invalido";
            precioProducto = 0;
        }
        Producto(int prodID, string nomProd, float precProd) {
            productoID = prodID;
            nombreProducto = nomProd;
            precioProducto = precProd;
        }
        ~Producto() {}

        int getProductoID() {
            return productoID;
        }
        string getNombreProducto() {
            return nombreProducto;
        }
        float getPrecioProducto() {
            return precioProducto;
        }

        void setProductoID(int prodID) {
            productoID = prodID;
        }
        void setNombreProducto(string nomProd) {
            nombreProducto = nomProd;
        }
        void setPrecioProducto(float precProd) {
            precioProducto = precProd;
        }

        string disponibilidad() {
            int num;
            string opcion;
            num = rand() % 2; // Genera 0 o 1
            
            if(num == 1) {
                opcion =  "Sigue disponible";
            } else {
                opcion =  "No sigue disponible";
            }
            return opcion;
        }
};

// Es el carrito de compras personalizado del usuario.
class Carrito {
    private:
        int carritoID, cantidadProductos;
    public:
        Carrito() {
            carritoID = 0;
            cantidadProductos = 0;
        }
        Carrito(int carID, int cantProd) {
            carritoID = carID;
            cantidadProductos = cantProd;
        }
        ~Carrito() {}

        int getCarritoID() {
            return carritoID;
        }
        int getCantidadProductos() {
            return cantidadProductos;
        }

        void setCarritoID(int carID) {
            carritoID = carID;
        }
        void setCantidadProductos(int cantProd) {
            cantidadProductos = cantProd;
        }

        void agregarCarrito() {
            cout << "Producto(s) agregado(s) al carrito." << endl;
        }
        void eliminarCarrito() {
            cout << "Producto(s) eliminado(s) del carrito." << endl;
        }
};

// Es el pedido del carrito hecho por  el usuario.
class Pedido {
    private:
        int pedidoID;
        string fechaCreacionPedido;
    public:
        Pedido() {
            pedidoID = 0;
            fechaCreacionPedido = "No definido";
        }
        Pedido(int pedID, string fechCreaPed) {
            pedidoID = pedID;
            fechaCreacionPedido = fechCreaPed;
        }
        ~Pedido() {}

        int getPedidoID() {
            return pedidoID;
        }
        string getFechaCreacionPedido() {
            return fechaCreacionPedido;
        }

        void setPedidoID(int pedID) {
            pedidoID = pedID;
        }
        void setFechaCreacionPedido(string fechCreaPed) {
            fechaCreacionPedido = fechCreaPed;
        }

        void iniciarPedido() {
            cout << "Su pedido esta siendo tramitado." << endl;
        }
        void finalizarPedido() {
            cout << "Su pedido ha terminado el tramite." << endl;
        }
        void tramitandoTotalPago() {
            cout << "Tramitando el pago total..." << endl;

        }
};

// Es el pago del pedido hecho por el ususario.
class Pago {
    private:
        int pagoID, mesVencimientoTarjeta, anoVencimientoTarjeta, codigoSeguridadTarjeta;
        long long int numeroTarjeta;
        string nombrePropietarioTarjeta;
    public:
        Pago() {
            pagoID = 0;
            numeroTarjeta = 0;
            mesVencimientoTarjeta = 0;
            anoVencimientoTarjeta = 0;
            codigoSeguridadTarjeta = 0;
            nombrePropietarioTarjeta = "No definido";
        }
        Pago (int paID, long long int numTar, int mesVenTar, int anoVenTar, int codSegTar, string nomPropTar) {
            pagoID = paID;
            numeroTarjeta = numTar;
            mesVencimientoTarjeta = mesVenTar;
            anoVencimientoTarjeta = anoVenTar;
            codigoSeguridadTarjeta = codSegTar;
            nombrePropietarioTarjeta = nomPropTar;
        }
        ~Pago() {}

        int getPagoID() {
            return pagoID;
        }
        long long int getNumeroTarjeta() {
            return numeroTarjeta;
        }
        int getMesVencimientoTarjeta() {
            return mesVencimientoTarjeta;
        }
        int getAnoVencimientoTarjeta() {
            return anoVencimientoTarjeta;
        }
        int getCodigoSegurdadTarjeta() {
            return codigoSeguridadTarjeta;
        }
        string getNombrePropietarioTarjeta() {
            return nombrePropietarioTarjeta;
        }

        void setPagoID(int paID) {
            pagoID = paID;
        }
        void setNumeroTarjeta(long long int numTar) {
            numeroTarjeta = numTar;
        }
        void setMesVencimientoTarjeta(int mesVenTar) {
            mesVencimientoTarjeta = mesVenTar;
        }
        void setAnoVencimientoTarjeta(int anoVenTar) {
            anoVencimientoTarjeta = anoVenTar;
        }
        void setCodigoSeguridadTrajeta(int codSegTar) {
            codigoSeguridadTarjeta = codSegTar;
        }
        void setNombrePropietarioTarjeta(string nomPropTar) {
            nombrePropietarioTarjeta = nomPropTar;
        }
        
        void finalizarPago() {
            cout << "Pago realizado con éxito." << endl;
        }
};

// Es el paquete hecho con los productos pagados por el ususario.
class Paquete {
    private:
        int paqueteID;
        string direccionEnvio, tipoPaquete;
    public:
        Paquete() {
            paqueteID = 0;
            direccionEnvio = "No definido";
            tipoPaquete = "No definido";
        }
        Paquete(int paqID, string dirEnv, string tipPaq) {
            paqueteID = paqID;
            direccionEnvio = dirEnv;
            tipoPaquete = tipPaq;
        }
        ~Paquete() {}

        int getPaqueteID() {
            return paqueteID;
        }
        string getDireccionEnvio() {
            return direccionEnvio;
        }
        string getTipoPaquete() {
            return tipoPaquete;
        }

        void setPaqueteID(int paqID) {
            paqueteID = paqID;
        }
        void setDireccionEnvio(string dirEnv) {
            direccionEnvio = dirEnv;
        }
        void setTipoPaquete(string tipPaq) {
            tipoPaquete = tipPaq;
        }

        void generarFicha() {
            cout << "Ficha generada." << endl;
        }
};

// Es el estatus del envío para el usuario.
class Envio {
    private:
        string fechaEnvio, fechaEntrega;
    public:
        Envio() {
            fechaEnvio = "No definido";
            fechaEntrega = "No definido";
        }
        Envio(string feEnv, string feEnt) {
            fechaEnvio = feEnv;
            fechaEntrega = feEnt;
        }
        ~Envio() {}

        string getFechaEnvio() {
            return fechaEnvio;
        }
        string getFechaEntrega() {
            return fechaEntrega;
        }

        void setFechaEnvio(string feEnv) {
            fechaEnvio = feEnv;
        }
        void setFechaEntrega(string feEnt) {
            fechaEntrega = feEnt;
        }

        void statusEnvio() {
            int num, UPPER_NUMBER, LOWER_NUMBER;
            UPPER_NUMBER = 1;
            LOWER_NUMBER = 0;
            num = (rand() % (UPPER_NUMBER - LOWER_NUMBER + 1)) + LOWER_NUMBER;
            
            if(num == UPPER_NUMBER) {
                cout << "Envio en proceso de ser entregado" << endl;
            }
            else{
                cout << "Envio entregado." << endl;
            }
        }   
};

