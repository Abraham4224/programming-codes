//This is the main class where other classes' objects like Edificio will be created
public class Principal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Imprimo por consola: ");
		Edificio AG = new Edificio();
		Edificio titan = new Edificio(44.4,4,'A',1999);
		titan.construyendo();
		AG.destruir();
		System.out.println(titan.getAltura());
		titan.setAltura(44.42);
		System.out.println(titan.getAltura());
	}

}
