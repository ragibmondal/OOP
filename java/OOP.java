class Pen{
    String color;
    String type;
    public void write(){
        System.out.println("Writing Something");
    }
    public void printcolor(){
        System.out.println(this.color);
    }
}
class Student{
    String name;
    int age;
    public void printInfo(){
     System.out.println(this.name);
     System.out.println(this.age);
    }
}
public class OOP{
    public static void main(String args[]){

        /*Pen pen1= new Pen();
        pen1.color="Red";
        pen1.type="Gel";
        pen1.write();
        Pen pen2=new Pen();
        pen2.color="blue";
        pen2.type="Ball";
        pen1.printcolor();
        pen2.printcolor();*/
        Student s1=new Student();
        s1.name="aman";
        s1.age=24;
        s1.printInfo();
    }
}