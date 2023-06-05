class producto{
    constructor(nombre, valor, año_elaborado){
        this.nombre = nombre;
        this.valor = valor;
        this.año_elaborado = año_elaborado;
    }
}

class IU{
    
    addP(product){
        const listaProducto = document.getElementById("listaProductos");
        const elemento = document.createElement("div");
        elemento.innerHTML = `
        <div>
            <div>
                <strong>Nombre </strong>: ${product.nombre}
                <strong>Precio </strong>: ${product.valor}     
                <strong>Año elaborado </strong>: ${product.año_elaborado}
                <a href="#" name="borrar">Borrar</a>                 
            </div>        
        </div>
        `;
        listaProducto.appendChild(elemento);
    }
    resetForm(){
        document.getElementById("productosForm").reset();
    }
    DeleteP(elemento){
        if(elemento.name === "borrar"){
            elemento.parentElement.remove();
            this.mensaje("Su Producto Ha Sido Removido")
        }
    }
    mensaje(msj){
        const div = document.createElement("div");
        div.className = "alert alert";
        div.appendChild(document.createTextNode(msj));
        const contenedor = document.querySelector("Contenedor");
        const app = document.querySelector("aplicacion");
        Contenedor.insertBefore(div, app);
        setTimeout(function(){
            document.querySelector(".alert").remove();
        }, 3000)
    }
}

document.getElementById("productosForm")
    .addEventListener("submit", function(e){
    const nombres = document.getElementById("nombre").value;
    const precio = document.getElementById("valor").value;
    const año = document.getElementById("año_elaborado").value;

    const product = new producto(nombres, precio, año);

console.log(product);

    const ui = new IU();
    
    ui.addP(product);
    ui.resetForm();
    ui.mensaje("Producto Agregado De Manera Satisfactoria");

    e.preventDefault();
})

document.getElementById("listaProductos").addEventListener("click", function(e){
    const iu = new IU();
    iu.DeleteP(e.target);

})