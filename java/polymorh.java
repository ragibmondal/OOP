
class Student{
    String name;
    int age;
    public void printInfo(String name){
        System.out.println(name);
    }
    public void printInfo(int age){
        System.out.println(age);

    }
    public void printInfo(String name,int age){
        System.out.println(name+ " "+age);

    }

}
public class polymorh {
    //compile time polimorphism -> function overloading
    //run time polimorphism -> function overriding
    public static void main(String args[]){
    Student s1 =new Student();
    s1.name="ragib";
    s1.age=24;
    Student s2= new Student();
    s2.name="Shariful";
    s2.printInfo(s2.name);
    }

}
