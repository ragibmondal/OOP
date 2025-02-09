//single level inheritance
//base class and a derived class
//multiple level inheritance
import java.util.*;

import amun;

class Shape{
    public void area(){
        System.out.println("display area");

    }
}
class Triangle extends Shape{
   public  void area(int l,int h){
   System.out.println(1/2*l*h);
   }
}
class EquilateralTriangle extends Triangle{
    public void area(int l,int h){
        System.out.println(1/2*l*h); 
    }
}
public class inharitance {
    public static void main(String args[]){
        amun.Account account1 =new amun.Account();
        account1.name="customer";
    }
}
