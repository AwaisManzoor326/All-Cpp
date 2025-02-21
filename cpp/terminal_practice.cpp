// #include <iostream>
// using namespace std;

// class Employee
// {
//     int ID;
//     string name;
//     static int count; // Static variable to keep track of employee count

// public:
//     // Default constructor
//     Employee() {}

//     // Parameterized constructor
//     Employee(int id, string nam) : ID(id), name(nam) {}

//     // Static method to get the employee count
//     static int get_counter()
//     {
//         return count;
//     }

//     // Method to add an employee and increment the count
//     void add_employee()
//     {
//         cout << "\t" << name << " with ID " << ID << " just joined us!!!" << endl;
//         count++; // Increment the count whenever a new employee is added
//     }
// };

// // Initialize the static member variable
// int Employee::count = 0;

// int main()
// {
//     // Create employee objects
//     Employee E1(111, "Hashim");
//     Employee E2(112, "Lala");
//     Employee E3(113, "Awais");
//     Employee E4(114, "Alima");

//     // Add employees and display their info
//     cout << "Employee 1: " << endl;
//     E1.add_employee();

//     cout << "Employee 2: " << endl;
//     E2.add_employee();

//     cout << "Employee 3: " << endl;
//     E3.add_employee();

//     cout << "Employee 4: " << endl;
//     E4.add_employee();

//     // Display total number of employees
//     cout << "Total number of employers is " << Employee::get_counter() << endl;

//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int ID;
//     int salary;
//     static int count;

// public:
//     Employee(int id, int sal) : ID(id), salary(sal) {}
//     static int get_counter()
//     {
//         return count;
//     }
//     void show()
//     {
//         cout << "Salary of person holding ID " << ID << " is " << salary << endl;
//         count++;
//     }
// };
// int Employee::count = 0;
// int main()
// {
//     Employee e1(500, 50000);
//     e1.show();
//     Employee e2(50, 50000);
//     e2.show();
//     Employee e3(5, 50000);
//     e3.show();
//     Employee e4(500, 70000);
//     e4.show();
//     cout << "Value of counter is " << Employee::get_counter();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// class _friend
// {
// private:
//     int x;

// public:
//     friend void display(_friend);
//     _friend(int a)
//     {
//         x = a;
//     }
// };
// void display(_friend f)
// {
//     cout << "Value of x is " << f.x << endl;
// }
// int main()
// {
//     _friend f1(6);
//     display(f1);
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// class _friend
// {
// private:
//     int y;

// public:
//     friend void show(_friend);
//     _friend(int a)
//     {
//         y = a;
//     }
// };
// void show(_friend x)
// {
//     cout << "value of y is " << x.y;
// }
// int main()
// {
//     _friend f(7);
//     show(f);

//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// class aid;
// class numbers
// {
// private:
//     int a;
//     int b;

// public:
//     void getdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     friend class aid;
// };
// class aid
// {
// public:
//     void display(numbers n)
//     {
//         cout << "value of a is " << n.a << " and value of b is " << n.b << endl;
//     }
//     void add(numbers nm)
//     {
//         cout << "sum of two numbers is " << nm.a + nm.b << endl;
//     }
//     void subtract(numbers nm)
//     {
//         cout << "difference of two numbers is " << nm.a - nm.b << endl;
//     }
//     void multiply(numbers nm)
//     {
//         cout << "Product of two numbers is " << nm.a * nm.b << endl;
//     }
//     void divide(numbers nm)
//     {
//         if (nm.b != 0)
//         {
//             cout << "Division of two numbers is " << nm.a / nm.b << endl;
//         }
//         else
//         {
//             cout << "Error! Division by zero is not allowed." << endl;
//         }
//     }
//     void modulus(numbers nm)
//     {
//         if (nm.b != 0)
//         {
//             cout << "Modulus of two numbers is " << nm.a % nm.b << endl;
//         }
//         else
//         {
//             cout << "Error! Division by zero is not allowed." << endl;
//         }
//     }
// };
// int main()
// {
//     numbers n;
//     n.getdata(10, 20);

//     aid a;
//     a.display(n);
//     a.add(n);
//     a.subtract(n);
//     a.multiply(n);
//     a.divide(n);
//     a.modulus(n);

//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// class add;
// class numbers
// {
//     int a, b;

// public:
//     void display(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     friend class add;
// };
// class add
// {
// public:
//     void dis(numbers n)
//     {
//         cout << "Number one is " << n.a << endl;
//         cout << "Number two is " << n.b << endl;
//     }
//     void sum(numbers n)
//     {
//         cout << "sum is: " << n.a + n.b << endl;
//     }
// };
// int main()
// {
//     numbers num;
//     num.display(5, 6);
//     add obj1;
//     obj1.dis(num);
//     obj1.sum(num);

//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// class student
// {
// protected:
//     int rollno;

// public:
//     void setroll(int);
//     void getroll(void);
// };
// void student::setroll(int r)
// {
//     rollno = r;
// }
// void student::getroll()
// {
//     cout << "Roll Number of student is " << rollno << endl;
// }
// class exam : public student
// {
// protected:
//     int math, physics;

// public:
//     void setmarks(int, int, int);
//     void getmarks();
// };
// void exam::setmarks(int a, int b, int r)
// {
//     math = a;
//     physics = b;
//     student::setroll(r);
// }
// void exam::getmarks()
// {
//     student::getroll();
//     cout << "Total marks of math are 100 " << endl;
//     cout << "Total marks of physics are 85 " << endl;
// }
// class result : public exam
// {
// protected:
//     int m_marks;
//     int p_marks;

// public:
//     void setmarks(int, int, int, int, int);
//     void getmarks();
// };
// void result::setmarks(int x, int y, int mm, int pm, int rl)
// {
//     m_marks = x;
//     p_marks = y;
//     exam::setmarks(mm, pm, rl);
// }
// void result::getmarks()
// {
//     exam::getmarks();
//     cout << "You have got " << m_marks << " in maths" << endl;
//     cout << "You have got " << p_marks << " in physics" << endl;
// }
// int main()
// {
//     result R1;
//     R1.setmarks(90, 80, 1, 2, 3);
//     R1.getmarks();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// class base1
// {
// protected:
//     int b1;

// public:
//     void setbase1(int a)
//     {
//         b1 = a;
//     }
//     void getbase1()
//     {
//         cout << "This is base 1 class" << b1 << endl;
//     }
// };
// class base2
// {
// protected:
//     int b2;

// public:
//     void setbase2(int b)
//     {
//         b2 = b;
//     }
//     void getbase2()
//     {
//         cout << "This is base 2 class" << b2 << endl;
//     }
// };
// class derive : public base1, public base2
// {
// protected:
//     int d;

// public:
//     void set(int x, int y, int z)
//     {
//         base1::setbase1(x);
//         base2::setbase2(y);
//         d = z;
//     }
//     void show()
//     {
//         cout << "This is base 1  " << base1::b1 << endl;
//         cout << "This is base 2  " << base2::b2 << endl;
//         cout << "This is derive  " << d << endl;
//     }
// };
// int main()
// {
//     derive obj1;
//     obj1.set(110, 550, 666);
//     obj1.show();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// class base1
// {
//     int b1 = 10;

// public:
//     void Greeting()
//     {
//         cout << "Hello, How are you!!!  " << b1 << endl;
//     }
// };
// class base2
// {
//     int b2 = 20;

// public:
//     void Greeting()
//     {
//         cout << "ma na pucha k ap kasay ho???  " << b2 << endl;
//     }
// };
// class derived : public base1, public base2
// {
//     int b3 = 30;

// public:
//     void Greeting()
//     {
//         base1::Greeting();
//         base2::Greeting();
//         cout << "I am fine. How about you??  " << b3 << endl;
//     }
// };
// int main()
// {
//     derived d;
//     d.Greeting();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class student
// {
// protected:
//     string name;
//     int rollno;

// public:
//     void set()
//     {
//         cout << "Enter your name: ";
//         cin >> name;
//         cout << "Enter your roll no: ";
//         cin >> rollno;
//     }
// };

// class exam : virtual public student
// {
// protected:
//     string paper;
//     int marks;

// public:
//     void setdata()
//     {
//         cout << "Enter paper title: ";
//         cin >> paper;
//         cout << "Enter taken marks: ";
//         cin >> marks;
//     }
// };
// class quiz : virtual public student
// {
// protected:
//     string title;
//     int numbers;

// public:
//     void setdata()
//     {
//         cout << "Enter title  of quiz";
//         cin >> title;
//         cout << "Enter marks  of quiz";
//         cin >> numbers;
//     }
// };
// class result : public exam, public quiz
// {
// public:
//     void set1()
//     {
//         student::set();
//         exam::setdata();
//         quiz::setdata();
//     }
//     void show()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollno << endl;
//         cout << "In exam of " << paper << " you got " << marks << " marks" << endl;
//         cout << "In quiz of " << title << " you got " << numbers << " marks" << endl;
//     }
// };
// int main()
// {
//     result obj1;
//     obj1.set1();
//     obj1.show();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// class shape
// {
// protected:
//     int colorcode;

// public:
//     shape(int s) : colorcode(s) {}
//     virtual void set() = 0;
//     virtual float calcarea() = 0;
//     virtual int cc() = 0;
// };
// class circle : public shape
// {
// protected:
//     float radius;

// public:
//     circle(int x, int y) : radius(x), shape(y) {}
//     void set()
//     {
//         cout << "Enter radius of circle ";
//         cin >> radius;
//         cout << "Enter color code of circle ";
//         cin >> colorcode;
//     }

//     float calcarea()
//     {
//         return 3.14 * radius * radius;
//     }
//     int cc()
//     {
//         return colorcode;
//     }
// };
// class rectangle : public shape
// {
// protected:
//     float length, width;

// public:
//     rectangle(int a, int b, int c) : length(a), width(b), shape(c) {}
//     void set()
//     {
//         cout << "Enter length: ";
//         cin >> length;
//         cout << "Enter width: ";
//         cin >> width;
//         cout << "Enter color code: ";
//         cin >> colorcode;
//     }
//     float calcarea()
//     {
//         return length * width;
//     }
//     int cc()
//     {
//         return colorcode;
//     }
// };
// int main()
// {
//     //     shape *ptr[2];
//     //     circle c(8.9,1122);
//     //     rectangle r(6.4,5.5,555);
//     shape *pt = new circle(3.3, 112);
//     shape *pt2 = new rectangle(2.2, 4.5, 1112);
//     // ptr[0]=&c;
//     // ptr[1]=&r;
//     // ptr[1]->set();
//     cout << "\nArea of circle is " << pt->calcarea() << endl;
//     cout << "Color code of circle is " << pt->cc() << endl
//          << endl;
//     cout << "Area of rectangle is " << pt2->calcarea() << endl;
//     cout << "Color code of rectangle is " << pt2->cc() << endl;
//     delete pt;
//     delete pt2;
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class animal
// {
// protected:
//     string name;
//     float age;

// public:
//     animal()
//     {
//     }
//     animal(string n, float a) : name(n), age(a)
//     {
//     }
// };

// class cat : public animal
// {
// public:
//     cat(string n, float a) : animal(n, a)
//     {
//     }
//     void show()
//     {
//         cout << "My cat's name is " << name << " and his/her age is " << age << " years." << endl;
//     }
// };

// class dog : public animal
// {
// public:
//     dog(string n, float a) : animal(n, a)
//     {
//     }
//     void show()
//     {
//         cout << "My dog's name is " << name << " and his/her age is " << age << " years." << endl;
//     }
// };

// int main()
// {
//     cat _1("Mano", 3.2);
//     dog _2("Jack", 3.3);
//     _1.show();
//     _2.show();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class device
// {
// public:
//     void start()
//     {
//         cout << "Device is starting...by Robot" << endl;
//     }
// };

// class machine
// {
// public:
//     void start()
//     {
//         cout << "Machine is starting...by Robot" << endl;
//     }
// };

// class Robot : public device, public machine
// {
// public:
//     void start()
//     {
//         device::start();
//         machine::start();
//         cout << "This was how ambiguity resolved in Robot" << endl;
//     }
// };

// int main()
// {
//     Robot robot1;
//     robot1.start();

//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class Employee
// {
// protected:
//     int id;
//     float hours;

// public:
//     Employee(int ID, float h) : id(ID), hours(h)
//     {
//     }
//     virtual void work()
//     {
//     }
// };

// class engineer : public Employee
// {
// public:
//     engineer(int ID, float h) : Employee(ID, h)
//     {
//     }
//     void work()
//     {
//         cout << "Engineer is working" << endl;
//         cout << "His ID is " << id << " and working for " << hours << " hours" << endl
//              << endl;
//     }
// };

// class manager : public Employee
// {
// public:
//     manager(int ID, float h) : Employee(ID, h)
//     {
//     }
//     void work()
//     {
//         cout << "Manager is working" << endl;
//         cout << "His ID is " << id << " and working for " << hours << " hours" << endl
//              << endl;
//     }
// };

// int main()
// {
//     Employee *emp[2];
//     emp[0] = new engineer(01, 8.0);
//     emp[1] = new manager(03, 12.0);
//     for (int i = 0; i < 2; i++)
//     {
//         emp[i]->work();
//     }
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class shape
// {
// public:
//     virtual float calcArea() = 0;
// };

// class circle : public shape
// {
// private:
//     float radius;

// public:
//     circle(float r) : radius(r)
//     {
//     }
//     float calcArea()
//     {
//         return 3.14 * radius * radius;
//     }
// };

// class rectangle : public shape
// {
// private:
//     float length, width;

// public:
//     rectangle(float l, float w) : length(l), width(w)
//     {
//     }
//     float calcArea()
//     {
//         return length * width;
//     }
// };

// int main()
// {
//     shape *sh[2];
//     sh[0] = new circle(4.5);
//     sh[1] = new rectangle(3.2, 2.3);
//     cout << "Area of circle is " << sh[0]->calcArea() << endl;
//     cout << "Area of rectangle is " << sh[1]->calcArea() << endl;
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class students
// {
// private:
//     static int count;

// public:
//     students()
//     {
//         count++;
//     }
//     static void show()
//     {
//         cout << "Number of students created so far is " << count << endl;
//     }
// };
// int students ::count = 0;

// int main()
// {
//     students s1, s2, s3;
//     students::show();
//     students a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
//     students::show();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class person
// {
// public:
//     void display()
//     {
//         cout << "Hello, I am a person." << endl;
//     }
// };

// class teacher : public person
// {
// public:
//     void display()
//     {
//         cout << "Hello, I am a teacher" << endl;
//     }
// };

// class student : public person
// {
// public:
//     void display()
//     {
//         cout << "I am a Student" << endl;
//     }
// };

// class assistant : public teacher, public student
// {
// public:
//     void display()
//     {
//         teacher::display();
//         cout << "But Assiatant Professor" << endl;
//     }
// };

// int main()
// {
//     assistant a;
//     a.display();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// past paper question no 4
// #include <iostream>
//     using namespace std;

// class StaticClass
// {
// private:
//     static int x;
//     static int y;
//     static int z;

// public:
//     StaticClass()
//     {
//         x = x + 10;
//         y = y + 20;
//         z = z + 30;
//     }
//     static void display()
//     {
//         cout << "\nx = " << x << endl;
//         cout << "y = " << y << endl;
//         cout << "z = " << z << endl;
//     }
// };
// int StaticClass ::x = 10;
// int StaticClass ::y = 10;
// int StaticClass ::z = 10;

// int main()
// {
//     StaticClass s1, s2, s3, s4, s5;
//     StaticClass::display();

//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// past paper question no 3
// #include <iostream>
//     using namespace std;

// class greatest
// {
// private:
//     int g[10];

// public:
//     greatest()
//     {
//         for (int i = 0; i < 10; i++)
//         {
//             g[i] = rand();
//         }
//     }
//     void display()
//     {
//         cout << "Numbers in array are: " << endl;
//         for (int i = 0; i < 10; i++)
//         {
//             cout << g[i] << " ";
//         }
//         cout << endl;
//     }
//     void find()
//     {
//         int max = g[0];
//         for (int j = 1; j < 10; j++)
//         {
//             if (g[j] > max)
//             {
//                 max = g[j];
//             }
//         }
//         cout << "The greatest number is " << max << endl;
//         if (max > 100)
//             cout << "It is my good luck..." << endl;
//         else
//             cout << "It is my bad luck..." << endl;
//     }
// };

// int main()
// {
//     greatest g1;
//     g1.display();
//     g1.find();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// past paper question 02
// #include <iostream>
// using namespace std;

// class Area
// {
// private:
//     float length;
//     float width;

// public:
//     void dimensions(float l, float w)
//     {
//         length = l;
//         width = w;
//     }
//     float takeArea()
//     {
//         return length * width;
//     }
// };

// int main()
// {
//     Area a[3];
//     a[0].dimensions(5.0, 3.0);
//     a[1].dimensions(7.0, 2.0);
//     a[2].dimensions(9.0, 4.0);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Area of rectangle " << i + 1 << " is " << a[i].takeArea() << endl;
//     }
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// past paper question 01
// #include <iostream>
// using namespace std;

// class employee
// {
// private:
//     int salary;
//     int hoursperday;

// public:
//     void print()
//     {
//         cout << "\tSalary: $" << salary << endl;
//     }
//     void getinfo(int s, int h)
//     {
//         salary = s;
//         hoursperday = h;
//     }
//     void addSal()
//     {
//         if (salary < 500)
//             salary = salary + 10;
//     }
//     void addWork()
//     {
//         if (hoursperday > 6)
//             salary += 5;
//     }
// };

// int main()
// {
//     employee e1;
//     e1.getinfo(400, 8);
//     e1.addSal();
//     e1.addWork();
//     cout << "Employee 1:\n";
//     e1.print();
//     employee e2;
//     e2.getinfo(600, 5);
//     e2.addSal();
//     e2.addWork();
//     cout << "Employee 2:\n";
//     e2.print();

//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
// Stack.............
// #include <iostream>
// using namespace std;
//     const int size = 5;
// class stack
// {
// private:
//     int top;

//     int arr[size];

// public:
//     stack()
//     {
//         top = -1; // Initialize top to -1, indicating the stack is empty
//     }

//     bool isfull()
//     {
//         return (top == size - 1); // Return true if the stack is full
//     }

//     bool isempty()
//     {
//         return (top == -1); // Return true if the stack is empty
//     }

//     void push(int value)
//     {
//         if (isfull())
//         {
//             cout << "Stack is full\n"; // Notify user if the stack is full
//         }
//         else
//         {
//             arr[++top] = value; // Increment top and add value to stack
//             cout << "Value pushed: " << value << endl;
//         }
//     }

//     void pop()
//     {
//         if (isempty())
//         {
//             cout << "Stack is empty\n"; // Notify user if the stack is empty
//         }
//         else
//         {
//             cout << "Value popped: " << arr[top] << endl; // Display popped value
//             top--;                                        // Decrement top to remove the element
//         }
//     }

//     int peek()
//     {
//         if (isempty())
//         {
//             cout << "Stack is empty..." << endl; // Notify user if the stack is empty
//             return -1;                           // Return -1 as an error code
//         }
//         else
//         {
//             return arr[top]; // Return the top element
//         }
//     }

//     void display()
//     {
//         if (isempty())
//         {
//             cout << "Stack is empty... No elements to show" << endl; // Notify user if the stack is empty
//         }
//         else
//         {
//             cout << "Stack elements are: ";
//             for (int i = 0; i <= top; i++)
//             {
//                 cout << arr[i] << " "; // Print each element in the stack
//             }
//             cout << endl; // New line for better readability
//         }
//     }
// };

// int main()
// {
//     stack s;
//     s.push(1);
//     s.push(10);
//     s.push(100);
//     s.push(1000);
//     s.push(10000);
//     s.push(100000); // Trying to push to a full stack
//     s.display();

//     cout << "Top element is: " << s.peek() << endl; // Print the top element

//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.display();

//     return 0;
// }

// //////////////////////////////////////////////////////////////////////////////////////////////////
// Circular Queue...
// #include <iostream>
// using namespace std;

// class CircularQueue
// {
// private:
//     int *queue;
//     int front, rear, capacity, size;

// public:
//     CircularQueue(int capc)
//     {
//         capacity = capc;
//         queue = new int[capacity];
//         size = 0;
//         front = 0;
//         rear = -1;
//     }
//     ~CircularQueue()
//     {
//         delete[] queue;
//     }
//     bool isFull()
//     {
//         return (size == capacity);
//     }
//     bool isEmpty()
//     {
//         return (size == 0);
//     }
//     void enqueue(int value)
//     {
//         if (isFull())
//         {
//             cout << "Queue is full\nRemoving the oldest element to store " << value << endl;
//             front = (front + 1) % capacity;
//         }
//         else
//             size++;
//         rear = (rear + 1) % capacity;
//         queue[rear] = value;
//         cout << "Stored " << value << endl;
//     }
//     void dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is empty\n";
//         }
//         else
//         {
//             cout << "Removed " << queue[front] << endl;
//             front = (front + 1) % capacity;
//             size--;
//         }
//     }
//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << "No elements to show...\n";
//         }
//         else
//         {
//             for (int i = 0; i < size; i++)
//             {
//                 cout << queue[(front + i) % size] << ", ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     CircularQueue cq(3);
//     cq.enqueue(1);
//     cq.enqueue(2);
//     cq.enqueue(3);
//     cq.display();
//     cq.enqueue(4);
//     cq.display();
//     cq.dequeue();
//     cq.dequeue();
//     cq.display();
//     cq.dequeue();
//     cq.dequeue();
//     cq.display();
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
class animal
{
    protected:
    string name;
    public:
    animal()
    {}
    animal(string n) : name(n)
    {}
    void display()
    {
        cout<<"Animal's name is "<<name<<endl;
    }
    void speak()
    {
        cout<<"Animal voice is ";
    }
};
class Dog : public animal
{
    public:
    Dog(){}
    Dog(string n) : animal(n)
    {}
    void speak()
    {
        animal::speak();
        cout<<"Woof!"<<endl;
    }
};
class Cat : public animal
{
    public:
    Cat(){}
    Cat(string n) : animal(n)
    {}
    void speak()
    {
        animal::speak();
        cout<<"Meow!"<<endl;
    }
};
int main()
{
    animal * pt[2];
    // Cat cat("Mano");
    // Dog dog("Jack");
    // cat.display();
    // cat.speak();
    // dog.display();
    // dog.speak();
    // pt[0] = &cat;
    // pt[1] = &dog;
    // pt[0]->display();
    // pt[0]->speak();
    // pt[1]->display();
    // pt[1]->speak();
    
    return 0;
}