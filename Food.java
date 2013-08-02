public class Food {
   public double calories, fat; 
   //calories variable is used to store the calories contained in the food
   //fat is used to store the fat (in grams) of the respective food

    //here the constructor for the class is presented
    Food(double calories_value, double fat_value) {
      calories = calories_value; 
      fat = fat_value; 
   }
   public void clear() {
      this.calories = 0; 
      this.fat = 0; 
   }
   public void nutrition() {


  System.out.print("I contain "+calories+ " calories and "+fat+ " grams of fat.");
	//we output the nutritional information of our snack

	System.out.println("");

	}

}
