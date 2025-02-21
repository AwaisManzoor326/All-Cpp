// #include <iostream>
// using namespace std;

// class stack
// {
// private:
//     int top;
//     int arr[5];

// public:
//     stack()
//     {
//         top = 0;
//     }
//     void add(int value)
//     {
//         arr[top++] = value;
//         cout << "value added " << value << endl;
//     }
//     int remove()
//     {
//         cout << "value removed " << arr[--top] << endl;
//         return arr[top];
//     }
//     // void display()
//     // {
//     //     for(int i=0;i<top;i++)
//     //     {
//     //     cout<<arr[i]<<endl;
//         //}
//     //}
// };
// int main()
// {
//     stack s;
//     s.add(10);
//     s.add(20);
//     s.add(30);
//     s.add(40);
//     s.add(50);
//     // s.display();
//     s.remove();
//     s.remove();
//     // s.display();
//     s.remove();
//     // s.display();

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class queue
// {
// private:
//     int front, back;
//     int q[5];

// public:
//     queue()
//     {
//         front = 0;
//         back = -1;
//     }
//     int add(int value)
//     {
//         if(back == 4)
//         {
//             cout<<"Queue is full\n";
//             return 0;
//         }
//         q[++back] = value;
//         cout << "value added " << value <<" at position "<<back<< endl;
//     }
//     int remove()
//     {
//         if(front == 4)
//         {
//             cout<<"Queue is empty\n";
//             return 0;
//         }
//         cout << "value removed " << q[++front] <<" from position "<<front<< endl;
//         return q[front];
//     }
//     // void display()
//     // {
//     //     for(int i=0;i<top;i++)
//     //     {
//     //     cout<<arr[i]<<endl;
//         //}
//     //}
// };
// int main()
// {
//     queue qu;
//     qu.add(10);
//     qu.add(20);
//     qu.add(30);
//     qu.add(40);
//     qu.add(50);
//     // qu.display();
//     qu.remove();
//     qu.remove();
//     // qu.display();
//     qu.remove();
//     // qu.add(50);
//     qu.remove();
//     qu.remove();
//     // qu.display();

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class Queue
// {
// private:
//     int front;
//     int rear;
//     int arr[5];
//     int itemCount;

// public:
//     Queue()
//     {
//         front = 0;
//         rear = -1;
//         itemCount = 0;
//     }

//     void enqueue(int value)
//     {
//         // If there was a previous dequeue, add the new element to that position
//         if (rear == -1 || rear == front - 1)
//         {
//             arr[front] = value;
//             rear = front;
//         }
//         else
//         {
//             rear = (rear + 1) % 5;
//             arr[rear] = value;
//         }
//         itemCount++;
//         cout << "Value added at index " << rear << ": " << value << endl;
//     }

//     int dequeue()
//     {
//         if (itemCount == 0)
//         {
//             cout << "Queue is empty, nothing to remove." << endl;
//             return -1;
//         }

//         int value = arr[front];
//         cout << "Value removed from index " << front << ": " << value << endl;

//         front = (front + 1) % 5;
//         itemCount--;

//         if (itemCount == 0)
//         {
//             rear = -1; // Reset the rear if the queue becomes empty
//         }

//         return value;
//     }

//     // void display()
//     // {
//     //     for(int i = front; i != rear + 1; i = (i + 1) % 5)
//     //     {
//     //         cout << arr[i] << endl;
//     //     }
//     // }
// };

// int main()
// {
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     // q.display();
//     q.dequeue();
//     q.dequeue();
//     // q.display();
//     q.enqueue(60); // This will fill the position left by the first dequeue
//     q.enqueue(70); // This will fill the position left by the second dequeue
//     q.dequeue();
//     // q.display();

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class Queue
// {
// private:
//     int front;
//     int rear;
//     int arr[5]; 
//     int size;
//     int lastRemovedIndex;

// public:
//     Queue()
//     {
//         front = -1;
//         rear = -1;
//         size = 0;
//         lastRemovedIndex = -1;
//     }

//     void enqueue(int value)
//     {
//         if (size == 5)
//         {
//             cout << "Queue is full, cannot add value: " << value << endl;
//             return;
//         }

//         if (lastRemovedIndex != -1)
//         {
//             // Add the value at the last removed index
//             arr[lastRemovedIndex] = value;
//             cout << "Value added at index " << lastRemovedIndex << ": " << value << endl;
//             lastRemovedIndex = -1; // Reset last removed index
//         }
//         else
//         {
//             // Normal enqueue operation
//             if (rear == -1) // Queue is empty
//             {
//                 front = rear = 0;
//             }
//             else
//             {
//                 rear = (rear + 1) % 5; // Move rear to the next position
//             }

//             arr[rear] = value;
//             cout << "Value added at index " << rear << ": " << value << endl;
//         }
//         size++;
//     }

//     int dequeue()
//     {
//         if (size == 0)
//         {
//             cout << "Queue is empty, nothing to remove." << endl;
//             return -1;
//         }

//         int value = arr[front];
//         cout << "Value removed from index " << front << ": " << value << endl;

//         lastRemovedIndex = front; // Store the index of the removed element

//         front = (front + 1) % 5; // Move front to the next position

//         size--;

//         if (size == 0)
//         {
//             front = rear = -1;     // Reset front and rear if the queue becomes empty
//             lastRemovedIndex = -1; // Reset last removed index
//         }

//         return value;
//     }

//     void display()
//     {
//         if (size == 0)
//         {
//             cout << "Queue is empty." << endl;
//             return;
//         }

//         int i = front;
//         while (true)
//         {
//             cout << arr[i] << " ";
//             if (i == rear)
//                 break;
//             i = (i + 1) % 5;
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.display();

//     q.dequeue();
//     q.dequeue();
//     q.display();

//     q.enqueue(60); // This will fill the position left by the first dequeue
//     q.enqueue(70); // This will fill the position left by the second dequeue
//     q.display();

//     q.dequeue();
//     q.display();

//     return 0;
// }