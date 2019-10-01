//Question 3 part B
class ThreadClassB implements Runnable
{
	public void run()
	{
		for(int i=1;i<=100;i++)
		{
			System.out.println(i);
		}
	}
}
public class Q3PartB 
{
	public static void main(String[] args)
	{
		ThreadClassB obj=new ThreadClassB();
		new Thread(obj).start(); //use of multi-threading.
		System.out.println("THE END"); //the end message can be displayed between any 2 numbers.
	}
}
