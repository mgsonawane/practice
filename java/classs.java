import java.util.Scanner;
public class classs{
public static void main(String[] args){
classs m=new classs();
Scanner sc = new Scanner(System.in);
int n=sc.nextInt();
String[] name=new String[n];
for (int i=0;i<n;i++)
{
name[i]=sc.next();
}
for (int i=0;i<n;i++)
{
System.out.println(name[i]);
}
}
}
