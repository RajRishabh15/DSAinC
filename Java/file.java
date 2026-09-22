public class file {
    file() {
        System.out.println("Hello!");
    }
    file(String name){
        System.out.println("Hello, " + name + "!");
    }
    public static void main(String[] args) {
        file obj = new file("Rishabh");
    }
}
