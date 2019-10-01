/*
 * Rajat Arora (40078146)
 * Assignment 1
 */
interface Interface1 //interface 1
{
	double tempFunc(); 
}
interface Interface2 //interface 2
{
	String tempFunc(int a); //interface 3
}
interface Interface3
{
	boolean tempFunc(int a,String b);
}
public class PartA {

	public static void main(String[] args) 
	{
		Interface1 itr1=()->5.5; //implementation of interface 1 using lambda expression
		Interface2 itr2=(int a)->String.format("The number is %d",a);  //implementation of interface 2 using lambda expression
		Interface3 itr3=(int a,String b)->a==Integer.parseInt(b);  //implementation of interface 3 using lambda expression
		System.out.println(itr1.tempFunc());  
		System.out.println(itr2.tempFunc(5));  
		System.out.println(itr3.tempFunc(2,"3"));   
	}

}
