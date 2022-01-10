import java.util.Scanner;

class starter {
	public static void main(String args[]) {

Scanner sc = new Scanner(System.in);

System.out.println("Enter an integer ");
int fact = sc.nextInt();
int u = fact;
while (true)
{
u = u-1;
fact = fact * u;
if (u == 1)
{
	break;
}
}
System.out.println(fact);











	}
}
