#include <stdio.h>

int main() {
    char miCadena[100]; // Define una variable para almacenar la cadena (ajusta el tamaño según tus necesidades)
    char miNombre[] = "Napoleon"; // Declaración e inicialización

    printf("Introduce una cadena: ");
    scanf("%99[^\n]", miCadena); // Lee la cadena hasta que se presione "Enter" (salto de línea)

    printf("La cadena introducida es: %s\n", miCadena);
    printf("Mi nuevo nombre es %s\n",miNombre);

    return 0;
}
