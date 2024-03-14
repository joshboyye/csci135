1. To string function`to_string(int)`this will convert integer to string 
2. *compare to function* `"apple".compare("banna")` this will compare to string to see if they are same or not 
	- If the string object is equal to the string passed in the argument, it returns `0`.
	- If the string object is greater than the string passed in the argument, it returns a positive value.
	- If the string object is less than the string passed in the argument, it returns a negative value.
3. *substring* is a function that will extract a string to use to function type `substr(start,end)`
Example 
```c++
string str ="hello world"; 
string sub = str.substr(1,5); //this will give ello 
```
4. *replace* is a function that will replace a substring to different string that you want 
example code
```c++
string str ="hello world";

string re = str.replace(0, 5, "goodbye");

cout << re << endl;
```
5. *swap* function can literally swap the string 
example code 
```c++
string s = "Hello, World!";

string s2 = "Goodbye, World!";

swap(s, s2);

cout << s << endl;
```
6. *replace* function will change the string to whatever the string you want to change to 
```cpp
#include<iostream>
using namespace std;
int main() {
    string string1 = "Today I will eat Apple";
    string string2 = "Mango";

    cout << "Before using replace() function : " << string1 << '\n';
    // Using the replace() function.
    string1.replace(17, 5, string2);

    cout << "After using replace() function : " << string1 << '\n';
//output
//Before using replace() function : Today I will eat Apple
//After using replace() function : Today I will eat Mango
```
