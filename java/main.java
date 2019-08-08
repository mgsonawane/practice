import java.util.Scanner;
class inh{
Scanner in=new Scanner(System.in);
int n;
int[] roll =new int[n];
String[] name=new String[n];
int[] courseid=new int[n];
inh(int n)
{
set(n);
}
public int set(int n){
return n;
}
}

class cdetails extends inh{
String[] id_01=new String[n];
public cdetails(int n){
super(n);
}
}
public class main{
public static void main(String[] args){
Scanner in=new Scanner(System.in);
System.out.println("Enter n");
int n=in.nextInt();
cdetails c=new cdetails(n);
for(int i=0;i<n;i++)
{
c.name[i]=in.next();
}
}
}

