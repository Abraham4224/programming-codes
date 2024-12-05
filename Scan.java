import java.util.Scanner;
//This is just to practice the input in Java
public class Scan {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char caracter;
		String Julius;
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Introduce un numero: ");
		int numero = entrada.nextInt();
		System.out.println("Tu numero es: "+numero);
		entrada.nextLine();
		System.out.println("Introduce un chr: ");
		caracter = entrada.next().charAt(0);
		System.out.println("El caracter es "+caracter);
		entrada.nextLine();
        
		System.out.println("Introduce una frase de Julio Cesar: ");
		Julius = entrada.nextLine();
		System.out.println("La frase es: "+Julius);
		
		
		entrada.close();
	}

}
