#include <iostream>
#include <string>
using namespace std;

/*
১ টা ক্লাস বানাতে বলছে Programming  নামে, দেন সোটার মধ্যে ২ টা কন্সট্রাক্টর বা ফাংশন থাকবে যা একই নামে হবে।
২ টা থাকবে কারণঃ 
ওরা বলছে ১ টা শুধু "I love programming languages" প্রিন্ট করতে, যখন Function without Parameter call করা হবে মেইন থেকে।
আর যখন সেইম ফাংশন কে ১ টা স্ট্রিং প্যারামিটার দিয়ে মেইন থেকে কল করব, তখন প্রিন্ট করবে সেইম মেসেজ, 
তবে তখন I love দিয়ে সে স্ট্রিং টা লিখব।
*/

class Programming
{
private:
    string s;

public:

    Programming() //Constructor without parameter
    {
        cout << "I love programming languages";
    }

    Programming(string ss) //Constructor with parameter (string)
    {
        s = ss; // receiving the string parameter
        cout << "I love " << s; //s মানে প্যারামিটার টা প্রিন্ট করতরছি, যেটা রিসিভ করছি
    }
};

/*
মেইনে আমরা ২ টা পয়েন্টার বানাইছি pr & pr1 নামে।
পয়েন্টার বানাতে হলে ক্লাসের নামের শেষে স্টার দিতে হয়,  দেন = চিহ্ন দিয়ে 
new classname দেয়া লাগে, নিউ টা কি ওয়ার্ড।
*/
int main( )
{
    Programming* pr = new Programming();
    cout << endl;
    Programming* pr1 = new Programming("C++");

    return 0;
}