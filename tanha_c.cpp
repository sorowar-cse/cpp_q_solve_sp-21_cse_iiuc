#include <iostream>
using namespace std;

/*
ভিতরে Polygon() {} মানে Polygon Class এর কন্সট্রাক্টর,
এটা দিচ্ছি কারণ,
ওরা বলছে object দিয়ে কল করতে মেইন থেকে, যার জন্য কন্সট্রাক্টর দিলে আমরা জানি জাস্ট অবজেক্ট বানালে কল হয় সেটা।

Same Constructor বানানোর কাজটা প্রতিটা ক্লাসে করছি।
আর সব ক্লাসে প্রশ্নে যেভাবে প্রশ্নে বলছে সেভাবে সে ক্লাসের লাইনটা প্রিন্ট করতেছি!
*/

/* shape এর প্রিন্ট টা virtual রাখার কারণ হলোঃ
এটাকে সবাই ইনহেরিট করতেছে তাই ভার্চুয়াল করা হইছে প্রিন্ট ফাংশন টাকে!
*/
class Shape {
public:
    Shape() {}
    virtual void print() {
        cout<<"\nThis is a shape.";
    }
};


/*
এখানে Polygon Shape কে ইনহেরিট করতেছে, যা : চিহ্ন দি বুঝাচ্ছি।
ভিতরে Polygon() {} মানে Polygon Class এর কন্সট্রাক্টর,
এটা দিচ্ছি কারণ,
ওরা বলছে object দিয়ে কল করতে মেইন থেকে, যার জন্য কন্সট্রাক্টর দিলে আমরা জানি জাস্ট অবজেক্ট বানালে কল হয় সেটা।
*/
class Polygon: public Shape {
public:
    Polygon() {}
    void print() {
        cout<<"\nPolygon is a shape.";
    }
};


class Rectangle: public Polygon {
public:
    Rectangle() {}
    void print() {
        cout<<"\nRectangle is a Polygon.";
    }
};
class Triangle: public Polygon {
public:
    Triangle() {}
    void print() {
        cout<<"\nTriangle is a Polygon.";
    }
};
class Square: public Rectangle {
public:
    Square() {}
    void print() {
        cout<<"\nSquare is a Rectangle.";
    }
};

/* প্রশ্ন ভালো করে পড়লে বুঝবা কোনটা কোনটাকে সিরিয়ালি ইনহেরিট করতেছে! */

int main()
{

    Shape S; // Shape এর অবজেক্ট বানাচ্ছি S কে
    Polygon P; // Polygon এর অবজেক্ট বানাচ্ছি P কে
    Rectangle R; // Rectangle এর অবজেক্ট বানাচ্ছি R কে
    Triangle T; // Triangle এর অবজেক্ট বানাচ্ছি T কে
    Square Sq; // Square এর অবজেক্ট বানাচ্ছি Sq কে
    
    
    /*
    খেয়াল করো সব ক্লাসে প্রিন্ট ফাংশন আছে একই নামে। 
    বাট কোনো সমস্যা হবে না এটার দ্বারা, কারণ আমরা তাদেরকে এইযে 
    উপরে অবজেক্ট বানালাম তা দিয়ে কল করব!
    সিস্টেমঃ Object.Function_Name()
    */
    
    S.print(); // Shape প্রিন্ট কে কল করা হচ্ছে, S dot দ্বার্ সেটা বুঝাচ্ছি, কারণ আমরা S কে Shape এর অবজেক্ট হিসাবে বানিয়েছি। সেইমভাবে নিচেরগুলো!
    P.print();
    R.print();
    T.print();
    Sq.print();
    
    return 0;
}