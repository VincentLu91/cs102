public class simplearray
{ 
   public static void main(String[] args) 
   { 
      System.out.println("This Program will provide you with an illustration of how an array can be used");

  System.out.println("We will start with 0 and increment the array up to 5 places");

	System.out.println("The value in each position of the array = array position * 2");
	int[] Array = new int[5];
for (int count= 0; count <5; count++) 
      { 
        Array[count]=count*2;  
	System.out.println(Array[count]); 
      }
   } 
}
