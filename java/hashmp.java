import java.util.Scanner;
import java.util.HashMap;

class hashmap{
HashMap<Integer,String> car =new HashMap<Integer,String>();
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
hashmap h=new hashmap();
int n=sc.nextInt();
for(int i=0;i<n;i++){
h.car.put(sc.nextInt(),sc.next());
}
for(int i=0;i<n;i++){
System.out.println(h.car.get(i));
}

}
}
