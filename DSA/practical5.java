import java.util.*;
class practical5{

	public static void main(String args[])
		{
			Scanner s=new Scanner(System.in);

			System.out.print("Enter number of item :");
			int n=s.nextInt();
			int choice;
			double ans=0;
			double price;

			for(int i=0;i<n;i++)
			{
				System.out.println("Enter your item type :");
				System.out.println("1 for moter");
				System.out.println("2 for fan");
				System.out.println("3 for tube");
				System.out.println("4 for wires");
				System.out.println("5 for other");
				choice=s.nextInt();

				switch (choice){
					case 1:
					{
						System.out.print("Enter price of moter :");
						price=s.nextInt();
						ans=ans+price+price*0.08;
						break;
					}
					case 2:
					{
						System.out.print("Enter price of fan :");
						price=s.nextInt();
						ans=ans+price+price*0.12;
						break;
					}
					case 3:
					{
						System.out.print("Enter price of tube light :");
						price=s.nextInt();
						ans=ans+price+price*0.05;
						break;
					}
					case 4:
					{
						System.out.print("Enter price of wire :");
						price=s.nextInt();
						ans=ans+price+price*0.075;
						break;
					}
					case 5:
					{
						System.out.print("Enter price of other :");
						price=s.nextInt();
						ans=ans+price+price*0.03;
						break;
					}
				}
			}
			System.out.print(ans);


		}

}
