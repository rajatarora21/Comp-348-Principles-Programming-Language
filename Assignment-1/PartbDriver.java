public class PartbDriver 
{
	public static void main(String[] args)
	{
		//implementation of success message.
		Math101.Callback<Integer> onSuccess=(notification)->System.out.println("The result is:"+notification);
		//implementation of error message.
		Math101.Callback<String> onError=(notification)->System.out.println("Error occured:"+notification);
		Math101.Divide(6, 2, onSuccess, onError); //calling the divide method.
		Math101.Divide(6, 0, onSuccess, onError);
		
	}
}
