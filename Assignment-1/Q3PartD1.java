//Question 3 part D1
public class Q3PartD1 
{
	public static void main(String[] args)
	{
		Runnable obj=new Runnable() //use of anonymous inner class.
		{
			public void run()
			{
				for(int i=1;i<=100;i++)
				{
					System.out.println(i);
				}
			}
		};
		obj.run(); //not use of multi thread.
		System.out.println("THE END");
		
	}
}
