
/**
 * Lab 2
 * By : Harini Sangaran
 * Matrics Number : A23CS0081
 */

//Q1 - Create Employee Class
public class Main {
    public static void main(String[] args) {
        Employee e1 = new Employee();
        e1.setEmpNum(101);
        e1.setEmpName("Ali");
        System.out.println("Employee Number: " + e1.getEmpNum());
        System.out.println("Employee Name: " + e1.getEmpName());
    }
}
class Employee {
    // TODO: Add fields
    private String empName;
    private int empNum;
    
    // TODO: Add setter and getter methods
    public void setEmpName(String a){
        empName = a;
    }
    public void setEmpNum(int b){
        empNum = b;
    }
    public String getEmpName(){
        return empName;
    }
    public int getEmpNum(){
        return empNum;
    }
}

//Q2 - Declare instance variables
class Car {
    // TODO: Declare two private instance variables (brand and year)
    private String brand;
    private int year;
    
    // TODO: Create setter for brand
    public void setBrand(String c){
        brand = c;
    }
    // TODO: Create getter for year
    public int getYear(){
        return year;
    }
}

//Q3 - Use a parameterized constructor to initialize a Book object
public class Main {
    public static void main(String[] args) {
        Book b1 = new Book("Java 101", "John Doe");
        b1.display();
    }
}
class Book {
    private String title;
    private String author;

    // TODO: Add a constructor
    Book (String d, String e){
        title = d;
        author = e;
    }
    
    public void display() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
    }
}

//Q4 - Complete the Student class
class Student {
    private String name;
    private int age;

    // TODO: Implement setter for name
    public void setName(String f){
        name = f;
    }
    // TODO: Implement getter for age
    public int getAge(){
        return age;
    }
}

//Q5 - Method overloading
class Message {
    // TODO: Write a method display() that prints "Hello!"
     public void display() {
        System.out.println("Hello!");
    }
    // TODO: Overload display(String msg) to print "Message: msg"
    public void display(String g) {
        System.out.println("Message: " + g);
    }
}

//Q6 - Keep track of how many objects of User have been created
class User {
    // TODO: Declare a static counter variable
    private static int counter = 0;
    public User() {
        // TODO: Increment counter
        counter++;
    }
    public static int getUserCount() {
        // TODO: Return counter
        return counter;
    }
}
public class Main {
    public static void main(String[] args) {
        new User();
        new User();
        System.out.println("Total Users: " + User.getUserCount());
    }
}

//Q7 - Ensure the salary field is private and accessible only through methods.
class employee {
    // TODO: Make salary private
    private double salary;
    // TODO: Write setSalary() and getSalary() methods
    public void setSalary(double h) {
        salary = h;
    }
    public double getSalary() {
        return salary;
    }
}
public class Main {
    public static void main(String[] args) {
        Employee e = new Employee();
        e.setSalary(5000);
        System.out.println("Salary: " + e.getSalary());
    }
}