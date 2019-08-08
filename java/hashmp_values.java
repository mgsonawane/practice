import java.util.Scanner;
import java.util.HashMap;

class hashmap_values{
HashMap<Integer,String> car =new HashMap<Integer,String>();
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
hashmap h=new hashmap();
int n=sc.nextInt();
for(int i=0;i<n;i++){
h.car.put(sc.nextInt(),sc.next());
}
System.out.println(h.car.values()); //.values() does not accept parameter

}
}
