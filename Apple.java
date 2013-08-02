import java.io.PrintStream;

public class Apple extends Food
{
    public double vitaC;

    Apple(double calories, double fat, double vitaC)
    {
        super(calories, fat);
        this.vitaC = vitaC;
    }

    public void clear()
    {
        this.calories = 0.0D;
        this.fat = 0.0D;
        this.vitaC = 0.0D;
    }

    public void nutrition()
    {
        System.out.println((new StringBuilder()).append("I contain ").append(calories).append(" calories, ").append(fat).append(" grams of fat, and ").append(vitaC).append(" grams of vitamin C.").toString());
    }
}
