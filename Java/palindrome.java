import java.util.Scanner;
public class palindrome{
    public static void main(String[] args){
        String str="madam";
        String rev=new StringBuffer(str).reverse().toString();
        if(str.equals(rev)){
            System.out.println("STRINGWA IS PALINDROME");
        }
        else{
            System.out.println("PALINDROME ILLE");
        }
    }
}