import java.util.ArrayList;
import java.util.Scanner;
class arraylist{
ArrayList <String> ss=new ArrayList<String>();
public static void main(String[] args){
Scanner cs=new Scanner(System.in);
arraylist c=new arraylist();
int n=cs.nextInt();
for(int i=0;i<n;i++)
{
c.ss.add(cs.next());
}
for(int i=0;i<n;i++)
{
System.out.println(c.ss.get(i));
}

}

} 
