//Question 3 part C1
public class Q3PartC1 
{
	public static void main(String[] args)
	{
		Runnable obj=new Runnable() { //use of anonymous inner class.
			
			public void run()
			{
				for(int i=1;i<=100;i++)
				{
					System.out.println(i);
				}
			}
			
		};
		new Thread(obj).start(); //use of multi- threading.
		System.out.println("THE END");
	}
	
}
