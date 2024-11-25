using System;
//Conversor de temperatura en C#
class ConversorTemperatura
{
    static void Main()
    {
        Console.WriteLine("Conversor de Celsius a Fahrenheit");

        // Solicitar al usuario los grados Celsius
        Console.Write("Ingresa la temperatura en Celsius: ");
        string entrada = Console.ReadLine();

        // Convertir la entrada a un número
        if (double.TryParse(entrada, out double celsius))
        {
            // Convertir Celsius a Fahrenheit
            double fahrenheit = (celsius * 9 / 5) + 32;

            // Mostrar el resultado
            Console.WriteLine($"{celsius}°C equivalen a {fahrenheit}°F.");
        }
        else
        {
            Console.WriteLine("Por favor, ingresa un número válido.");
        }
    }
}
