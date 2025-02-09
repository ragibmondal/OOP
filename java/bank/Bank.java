package bank;
class Account{
    public String name;
    protected String email;
    private String password;
    //getter and setter
    public String getPassword(){
        return  password;
    }
    public void  setPassword(String pass){
     this.password=pass;
    }
}

public class Bank{
  public static void main(String args[]){
    Account account1=new Account();
    account1.name="customer";
    account1.email="lamda@gmail.com";
    account1.setPassword("ABCDEF");
    System.out.println(account1.getPassword());

  }  
}
