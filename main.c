#include <stdio.h>
#include <string.h>

void libros();
void mostrarlibros(int numero, int *id, char (*nombre)[1000], char (*descripcion)[1000], float *cantidad, float *precio);
void IngresarProducto(int numero, int *id, char (*nombre)[1000], char (*descripcion)[1000], float *cantidad, float *precio);
void EliminarProductos(int libro, int *id, char (*nombre)[1000], char (*descripcion)[1000], float *cantidad, float *precio);
void ModificarProductos(int numero, int *id, char (*nombre)[1000], char (*descripcion)[1000], float *cantidad, float *precio);

int main(int argc, char const *argv[])
{
    int opcion, numero = 7, id, libro;
    char nombre[7][1000];
    char descripcion[7][1000];
    float cantidad[7], precio[7];

    printf("MENU:\n");
    printf("1. Ver Productos\n");
    printf("2. Ingresar Productos\n");
    printf("3. Eliminar Productos\n");
    printf("4. Modificar Productos\n");
    printf("5. Salir\n");

    printf("Que opcion desea realizar:\n");
    scanf("%d", &opcion);

    switch (opcion)
    {

    case 1:
        mostrarlibros(numero, &id, nombre, descripcion, cantidad, precio);
        printf("La actividad ha culminado exitosamente\n");
        break;

    case 2:
        IngresarProducto(numero, &id, nombre, descripcion, cantidad, precio);
        printf("La actividad ha culminado exitosamente\n");
        break;

    case 3:
        EliminarProductos(libro, &id, nombre, descripcion, cantidad, precio);
        printf("La actividad ha culminado exitosamente\n");
        break;

    case 4:
        ModificarProductos(numero, &id, nombre, descripcion, cantidad, precio);
        printf("La actividad ha culminado exitosamente\n");
        break;

    case 5:
        printf("Ha salido del programa exitosamente");
        break;

    default:
        printf("Por favor escoge una opcion permitida\n");
    }
    return 0;
}

void libros()
{
    int id[5] = { 1, 2, 3, 4, 5 };
    char nombre[5][1000] = { "Lo que el viento se llevo", "El diario de Ana Frank", "Don Quijote de la mancha", "El principito", "La Divina Comedia" };
    char descripcion[5][1000] = { "Integrante de una familia aristocrata surena, en tiempos de la Guerra de Secesion.",
                                 "Nina de trece anos oculta con su familia durante la ocupacion nazi de Holanda.",
                                 "Cree ser un caballero llamado don Quijote de la Mancha.",
                                 "Un pequeno principe descubre la extrana forma en que los adultos ven la vida.",
                                 "Sigue el camino desde el centro de la Tierra, donde se halla Lucifer, hasta el dominio de Dios." };
    float cantidad[5] = { 40, 18, 23, 10, 15 };
    float precio[5] = { 23, 20, 24, 17, 23 };

    // Copying values to the global arrays
    for (int i = 0; i < 5; i++) {
        id[i] = id[i];
        strcpy(nombre[i], nombre[i]);
        strcpy(descripcion[i], descripcion[i]);
        cantidad[i] = cantidad[i];
        precio[i] = precio[i];
    }
}

void mostrarlibros(int numero, int *id, char (*nombre)[1000], char (*descripcion)[1000], float *cantidad, float *precio)
{
    printf("-------------------LISTA DE PRODUCTOS------------------\n");
    for (int i = 0; i < numero; i++)
    {
        printf("ID: %d\n", id[i]);
        printf("Nombre: %s\n", nombre[i]);
        printf("Descripcion: %s\n", descripcion[i]);
        printf("Cantidad: %.2f\n", cantidad[i]);
        printf("Precio: %.2f\n", precio[i]);
    }
}

void IngresarProducto(int numero, int *id, char (*nombre)[1000], char (*descripcion)[1000], float *cantidad, float *precio)
{
    printf("Escriba el numero de libros por anadir:\n");
    scanf("%d", &numero);
    for (int i = 0; i < numero; i++)
    {
        printf("Escriba el ID: ");
        scanf("%d", &id[i]);
        printf("Escriba el NOMBRE: ");
        scanf("%s", nombre[i]);
        printf("Escriba la DESCRIPCION: ");
        scanf("%s", descripcion[i]);
        printf("Escriba la CANTIDAD: ");
        scanf("%f", &cantidad[i]);
        printf("Escriba el PRECIO: ");
        scanf("%f", &precio[i]);
    }
    printf("El total de libros es: %d\n", numero + 5);
}

void EliminarProductos(int libro, int *id, char (*nombre)[1000], char (*descripcion)[1000], float *cantidad, float *precio)
{
    printf("Elige el ID del libro a eliminar:\n");
    printf("Lo que el viento se llevo (1)\n");
    printf("El diario de Ana Frank (2)\n");
    printf("Don Quijote de la mancha (3)\n");
    printf("El principito (4)\n");
    printf("La Divina Comedia (5)\n");
    scanf("%d", &libro);
    for (int i = 0; i < 5; i++)
    {
        if (id[i] == libro)
        {
            id[i] = 0;
            strcpy(nombre[i], "vacio");
            strcpy(descripcion[i], "vacio");
            cantidad[i] = 0;
            precio[i] = 0;
        }
    }
}

void ModificarProductos(int numero, int *id, char (*nombre)[1000], char (*descripcion)[1000], float *cantidad, float *precio)
{
    printf("Escriba el numero de libros por anadir:\n");
    scanf("%d", &numero);
    for (int i = 0; i < numero; i++)
    {
        printf("Escriba el ID: ");
        scanf("%d", &id[i]);
        printf("Escriba el NOMBRE: ");
        scanf("%s", nombre[i]);
        printf("Escriba la DESCRIPCION: ");
        scanf("%s", descripcion[i]);
        printf("Escriba la CANTIDAD: ");
        scanf("%f", &cantidad[i]);
        printf("Escriba el PRECIO: ");
        scanf("%f", &precio[i]);
    }
    printf("El total de libros es: %d\n", numero + 5);
}