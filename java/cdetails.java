import java.util.Scanner;
class inh{
Scanner in=new Scanner(System.in);
int n=in.nextInt();
int[] roll =new int[n];
String[] name=new String[n];
int[] courseid=new int[n];
}

class cdetails extends inh{
String[] id_01=new String[n];

public static void main(String[] args){
cdetails c=new cdetails();
Scanner in=new Scanner(System.in);
System.out.println("Enter n");
int n=in.nextInt();
for(int i=0;i<n;i++)
{
c.name[i]=in.next();
}
}
}

