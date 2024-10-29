//This is the secondary class for the main class Principal

public class Edificio {
	private double altura;
	private int numeroPlantas;
	private char eficienciaEnergetica;
	private int fechaConstruccion;
	
	public Edificio() {
		this.altura=0;
		this.setNumeroPlantas(0);
		this.setEficienciaEnergetica('Z');
		this.setFechaConstruccion(0);
	}
	
	public Edificio(double altura, int numeroPlantas) {
		this.altura=altura;
		this.setNumeroPlantas(numeroPlantas);
		this.setEficienciaEnergetica('Z');
		this.setFechaConstruccion(0);
	}
	
	public Edificio(double altura, int numeroPlantas,char eficienciaEnergetica,int fechaConstruccion) {
		this.altura=altura;
		this.setNumeroPlantas(numeroPlantas);
		this.setEficienciaEnergetica(eficienciaEnergetica);
		this.setFechaConstruccion(fechaConstruccion);
	}
	
	
	//getter setter
	public double getAltura() {
		return this.altura;
	}
	
	public void setAltura(double pAltura) {
		this.altura=pAltura;
	}
	
	/**
	 * @return the numeroPlantas
	 */
	public int getNumeroPlantas() {
		return numeroPlantas;
	}

	/**
	 * @param numeroPlantas the numeroPlantas to set
	 */
	public void setNumeroPlantas(int numeroPlantas) {
		this.numeroPlantas = numeroPlantas;
	}

	/**
	 * @return the eficienciaEnergetica
	 */
	public char getEficienciaEnergetica() {
		return eficienciaEnergetica;
	}

	/**
	 * @param eficienciaEnergetica the eficienciaEnergetica to set
	 */
	public void setEficienciaEnergetica(char eficienciaEnergetica) {
		this.eficienciaEnergetica = eficienciaEnergetica;
	}

	/**
	 * @return the fechaConstruccion
	 */
	public int getFechaConstruccion() {
		return fechaConstruccion;
	}

	/**
	 * @param fechaConstruccion the fechaConstruccion to set
	 */
	public void setFechaConstruccion(int fechaConstruccion) {
		this.fechaConstruccion = fechaConstruccion;
	}

	public void construyendo() {
		System.out.println("I'm being constructed!");
	}
	
	public void destruir() {
		System.out.println("I was destroyed!");
	}
}
