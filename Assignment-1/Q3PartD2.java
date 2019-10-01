//Question3 part D2
public class Q3PartD2 
{
	public static void main(String[] args)
	{
		Runnable obj=()->{ //use of lambda expression to implement of run().
			for(int i=1;i<=100;i++)
			{
				System.out.println(i);
			}
			
		}; 
		obj.run(); //not use of multi-thread.
		System.out.println("THE END");
	}
}
