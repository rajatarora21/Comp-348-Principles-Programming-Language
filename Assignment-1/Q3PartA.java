//Question 3 part A
class ThreadClassA implements Runnable 
{
	public void run()
	{
		for(int i=1;i<=100;i++)
		{
			System.out.println(i);
		}
	}
}
public class Q3PartA
{
	public static void main(String[] args)
	{
		ThreadClassA obj=new ThreadClassA();
		obj.run(); //no multi-threading used.
		System.out.println("THE END");
	}
}
