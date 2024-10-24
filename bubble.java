import java.util.Arrays;
public class bubble {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = {5,7,-2,4,9,25,36,-15,-54,-45,1,20,54,-101,23,84,98,-36,0,2};
		int iteracionG = 0;
		int iteracionS = 0;
		int iteracionAux = 0;
		System.out.println(array.length);
		for(iteracionG = 0; iteracionG < (array.length-1);iteracionG++) {
			for(iteracionS = 0; iteracionS < (array.length-iteracionG-1);iteracionS++) {
				if(array[iteracionS]>array[iteracionS+1]) {
					iteracionAux = array[iteracionS];
					array[iteracionS]=array[iteracionS+1];
					array[iteracionS+1] = iteracionAux;
				}
			}
		}
		System.out.println(Arrays.toString(array));

	}

}
