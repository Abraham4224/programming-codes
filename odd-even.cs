//Aks a number from the user and returns if it is an odd number or even number
using System;

class ParOImpar
{
    static void Main()
    {
        Console.WriteLine("Programa para verificar si un número es par o impar");

        // Solicitar al usuario un número
        Console.Write("Ingresa un número entero: ");
        string entrada = Console.ReadLine();

        // Convertir la entrada a un número entero
        if (int.TryParse(entrada, out int numero))
        {
            // Verificar si es par o impar
            if (numero % 2 == 0)
            {
                Console.WriteLine($"El número {numero} es par.");
            }
            else
            {
                Console.WriteLine($"El número {numero} es impar.");
            }
        }
        else
        {
            Console.WriteLine("Por favor, ingresa un número en
