//Question3 part C2
public class Q3PartC2 
{
	public static void main(String[] args)
	{
		Runnable obj=()->{ //use of lambda expression to implement run().
			
				for(int i=1;i<=100;i++)
				{
					System.out.println(i);
				}
		};
		new Thread(obj).start(); //use of multi threading .
		System.out.println("THE END");
	}
}
