using System;

class PositivoNegativoCero
{
    static void Main()
    {
        Console.WriteLine("Programa para verificar si un número es positivo, negativo o cero");

        // Solicitar al usuario un número
        Console.Write("Ingresa un número: ");
        string entrada = Console.ReadLine();

        // Convertir la entrada a un número
        if (double.TryParse(entrada, out double numero))
        {
            // Verificar si el número es positivo, negativo o cero
            if (numero > 0)
            {
                Console.WriteLine($"El número {numero} es positivo.");
            }
            else if (numero < 0)
            {
                Console.WriteLine($"El número {numero} es negativo.");
            }
            else
            {
                Console.WriteLine("El número es cero.");
            }
        }
        else
        {
            Console.WriteLine("Por favor, ingresa un nú
