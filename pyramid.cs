using System;

class Programa
{
    static void Main()
    {
        // Número de escalones
        int steps = 3;

        // Dibuja cada escalón
        for (int i = 1; i <= escalones; i++)
        {
            // Espacios antes de cada estrella
            for (int j = 1; j <= steps - i; j++)
            {
                Console.Write(" ");
            }
            
            // Dibuja las estrellas en cada escalón
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                Console.Write("*");
            }
            
            // Salto de línea después de cada escalón
            Console.WriteLine();
        }
    }
}
