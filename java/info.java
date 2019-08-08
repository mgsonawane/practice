import java.util.Scanner;
class info{
public static void main(String args[]){
//System.out.println("how many names?");
student s=new student();
Scanner sc=new Scanner(System.in);
int n=3;
for(int i=0;i<n;i++)
{
System.out.println("Enter string");
s.name[i]= sc.next();
}
for(int i=0 ; i<n ;i++)
{
System.out.println(s.name[i]);
}
}
}
