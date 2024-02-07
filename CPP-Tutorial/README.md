# Cơ bản về ngôn ngữ lập trình C++
## Introduction

C++ là một ngôn ngữ lập trình đa năng được phát triển như là một sự mở rộng của ngôn ngữ C để bao gồm mô hình hướng đối tượng. Đây là một ngôn ngữ lập trình cấp cao và được biên dịch.

Ví dụ:
```cpp
#include <iostream>
 
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}   
```

### Hoạt động
![SVG Image](image/model.svg)
![PNG Image](image/model.png)


## Basic 
### Libraries
```cpp
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
int main() {
    return 0;
}   
```

Thư viện chứa tất cả thư viện tiêu chuẩn.
```cpp
#include <bits/stdc++.h>
```

Thư viện tự soạn
```cpp
#include "myLib.h"
```
### Namespace

Trong C++, `namespace` là một tập hợp các tên hoặc định danh liên quan (hàm, lớp, biến) giúp phân biệt những định danh này với những định danh tương tự trong các `namespace` khác hoặc trong global `namespace`.

Các định danh của thư viện chuẩn C++ được định nghĩa trong một `namespace` được gọi là `std`.

Để sử dụng bất kỳ định danh nào thuộc thư viện chuẩn, chúng ta cần chỉ định rằng nó thuộc về `namespace std`. Một cách để làm điều này là sử dụng toán tử giải phóng phạm vi `::`. Ví dụ:
```cpp
std::cout << "Hello World!";
```
Ở đây, chúng ta đã sử dụng mã `std::` trước cout. Điều này thông báo cho trình biên dịch C++ rằng đối tượng `cout` mà chúng ta đang sử dụng thuộc về `namespace std`.


Tất cả các định danh của thư viện chuẩn được cung cấp bởi các tệp tiêu đề chuẩn như `<iostream>`, `<string>`, `<vector>`, v.v. đều được khai báo trong namespace std.

Ví dụ, các định danh cin và cout được định nghĩa trong tệp tiêu đề chuẩn `<iostream>` thuộc `namespace std`.

Chúng ta có thể sử dụng các định danh thuộc namespace std trong chương trình của mình bằng cách sử dụng:

1. Toán tử `::` (phạm vi giải phóng):
Sử dụng toán tử `::` để chỉ định rằng một định danh thuộc về namespace std.

Ví dụ: `std::cout` hoặc `std::cin`.
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
2. Khai báo sử dụng (using declaration):
Sử dụng khai báo sử dụng để chỉ định rằng chúng ta muốn sử dụng một định danh cụ thể từ namespace std trong phạm vi hiện tại.

Ví dụ: `using std::cout`; hoặc `using std::cin`;.
```cpp
#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    cout << "Hello, World!" << endl;
    return 0;
}
```
3. Chỉ thị sử dụng (using directive):
Sử dụng chỉ thị sử dụng để bao gồm toàn bộ namespace std trong phạm vi hiện tại, giúp chúng ta tránh việc phải sử dụng `std::` mỗi lần.

Ví dụ: `using namespace std;`.
```cpp
#include <iostream>

int main() {
    using namespace std;

    cout << "Hello, World!" << endl;
    return 0;
}
```

Lưu ý rằng việc sử dụng chỉ thị sử dụng có thể dẫn đến xung đột tên trong trường hợp lớn và không được khuyến khích trong các tệp đầu vào lớn hoặc trong mã nguồn mở để tránh xung đột đặt tên không mong muốn.

### Variables
![PNG Image](image/var.png)

#### Kiểu nguyên
| Kiểu            | Kích thước | Vùng giá trị                                        |
|-----------------|-------------|-----------------------------------------------------|
| char            | 1 byte      | -128 đến 127 hoặc 0 đến 255                         |
| unsigned char   | 1 byte      | 0 đến 255                                           |
| signed char     | 1 byte      | -128 đến 127                                        |
| int             | 2 hoặc 4 bytes | -32,768 đến 32,767 hoặc -2,147,483,648 đến 2,147,483,647 |
| unsigned int    | 2 hoặc 4 bytes | 0 đến 65,535 hoặc 0 đến 4,294,967,295                |
| short           | 2 bytes     | -32,768 đến 32,767                                  |
| unsigned short  | 2 bytes     | 0 đến 65,535                                        |
| long            | 4 bytes     | -2,147,483,648 đến 2,147,483,647                     |
| unsigned long   | 4 bytes     | 0 đến 4,294,967,295                                  |


#### Kiểu thực
| Kiểu          | Kích thước | Vùng giá trị                         | Độ chính xác         |
|---------------|-------------|--------------------------------------|----------------------|
| float         | 4 bytes     | 1.2E-38 đến 3.4E+38                 | 6 vị trí thập phân   |
| double        | 8 bytes     | 2.3E-308 đến 1.7E+308                | 15 vị trí thập phân  |
| long double   | 10 bytes    | 3.4E-4932 đến 1.1E+4932              | 19 vị trí thập phân |

#### Một số kiểu khác
| Kiểu          | Kích thước|
|---------------|-------------|
| char        | 1 bytes     | 
| bool        | 1 bytes     |
| void  |   |

#### auto
```cpp
auto a = 1; // a will become 'int' 
auto b = 1LL; // b will become 'long long' 
auto c = 1.0; // c will become 'double' 
auto d = "variable"; // d will become 'string' 
```

#### string
![PNG Image](image/Strings-in-Cpp.png)


C Style string được lưu trữ dưới dạng mảng thông thường của các ký tự, kết thúc bởi ký tự null `'0'`. Chúng là loại chuỗi mà C++ thừa hưởng từ ngôn ngữ C.

C++ Style string là các loại chuỗi mới được giới thiệu trong C++ dưới dạng lớp `std::string` được định nghĩa trong tệp tiêu đề `<string>`. Điều này mang lại nhiều lợi ích so với chuỗi kiểu C truyền thống như kích thước động, các hàm thành viên, và nhiều tính năng khác.
#### Biến toàn cục (global variable)
```cpp
#include <bits/stdc++.h>
using namespace std;

int a = 1; // global variable

void f(){
    a++;
}

void g(){
    a+=2;
}

int main(){
    f();
    g();
    cout << a;
    return 0;
}
```
#### Cục bộ (local variable)
```cpp
#include <bits/stdc++.h>
using namespace std;

void f(){
    int a = 2;
}

void g(){
    int a = 3;
}

int main(){
    int a = 1;
    f();
    g();
    cout << a;
    return 0;
}
```
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 10, j = 20;
    int sum = i;
    for(int i = 1 ; i <= 2 ; i++){
        sum += i;
        for(int j = 1 ; j <= 2; j++){
            sum += j;
        }
        sum = j;
    }
    cout << sum;
    return 0;
}
```
### Operators

Example 1: Arithmetic Operators
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    return 0;
}
```
Example 2: Increment and Decrement Operators
```cpp
// Working of increment and decrement operators
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 100, result_a, result_b;

    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    cout << "result_a = " << result_a << endl;


    // decrementing b by 1 and storing the result in result_b   
    result_b = --b;
    cout << "result_b = " << result_b << endl;

    return 0;
}
```

| Toán tử | Ví dụ      | Tương đương với    |
|---------|------------|--------------------|
| =       | a = b;     | a = b;             |
| +=      | a += b;    | a = a + b;         |
| -=      | a -= b;    | a = a - b;         |
| *=      | a *= b;    | a = a * b;         |
| /=      | a /= b;    | a = a / b;         |
| %=      | a %= b;    | a = a % b;         |

| Toán tử | Ý Nghĩa                    | Ví dụ                  |
|---------|----------------------------|------------------------|
| ==      | Bằng                       | 3 == 5 trả về false   |
| !=      | Không bằng                  | 3 != 5 trả về true    |
| >       | Lớn hơn                    | 3 > 5 trả về false    |
| <       | Nhỏ hơn                     | 3 < 5 trả về true     |
| >=      | Lớn hơn hoặc bằng          | 3 >= 5 trả về false   |
| <=      | Nhỏ hơn hoặc bằng           | 3 <= 5 trả về true    |

| Toán tử | Ví dụ                  | Ý Nghĩa                                                |
|---------|------------------------|--------------------------------------------------------|
| &&      | expression1 && expression2 | AND Logic. Đúng chỉ khi tất cả các toán hạng đều đúng.  |
| \|\|    | expression1 \|\| expression2 | OR Logic. Đúng nếu ít nhất một trong các toán hạng là đúng. |
| !       | !expression             | NOT Logic. Đúng chỉ khi toán hạng là sai.               |

| Toán tử | Mô Tả                  |
|---------|------------------------|
| &       | AND Binary             |
| \|      | OR Binary              |
| ^       | XOR Binary             |
| ~       | One's Complement Binary|
| <<      | Dịch Trái Binary      |
| >>      | Dịch Phải Binary       |

| Toán tử | Mô Tả                           | Ví Dụ                                              |
|---------|---------------------------------|-----------------------------------------------------|
| sizeof  | Trả về kích thước của kiểu dữ liệu | `sizeof(int); // 4`                                |
| ? :     | Trả về giá trị dựa trên điều kiện | `string result = (5 > 0) ? "even" : "odd"; // "even"` |
| &       | Biểu diễn địa chỉ bộ nhớ của toán hạng | `&num; // địa chỉ của num`                      |
| .       | Truy cập thành viên của biến kiểu struct hoặc đối tượng của lớp | `s1.marks = 92;`                               |
| ->      | Được sử dụng với con trỏ để truy cập các biến của lớp hoặc struct | `ptr->marks = 92;`                             |
| <<      | In giá trị ra màn hình              | `cout << 5;`                                     |
| >>      | Nhận giá trị đầu vào               | `cin >> num;`                                   |
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 20;
    int j = 10;
    int a = ++i - j--;
    cout << a << endl << i << endl << j;
}
```

### I/O
Thay vì dùng `scanf` và `printf` thì chúng ta có thể sử dụng `ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);` và `cin/cout` 

`ios::sync_with_stdio(false);` không hẳn là tăng tốc độ vào ra, nó chỉ là tắt sự đồng bộ giữa C++ streams và C streams.

### File

`FILE *freopen(const char *filename, const char *mode, FILE *stream)`
| Mode | Mô Tả                                                           |
|------|-----------------------------------------------------------------|
| "r"  | Mở một tệp để đọc. Tệp phải tồn tại.                             |
| "w"  | Tạo một tệp trống để ghi. Nếu tệp cùng tên tồn tại, nội dung sẽ bị xóa và tệp được coi như mới. |
| "a"  | Phụ thêm (append) vào một tệp. Trong trường hợp ghi, dữ liệu được thêm vào cuối tệp. Tệp sẽ được tạo nếu nó chưa tồn tại. |
| "r+" | Mở một tệp để đọc và ghi. Tệp phải tồn tại.                       |
| "w+" | Tạo một tệp trống để đọc và ghi.                                 |
| "a+" | Mở một tệp để đọc và phụ thêm (append).                         |
```cpp
freopen("file.INP", "r", stdin);
freopen("file.OUT", "w", stdout);
```
### Pointer
![PNG Image](image/pointers-in-c.png)
![PNG Image](image/pointer.png)

Ứng dụng 

![PNG Image](image/LList.png)


### Function
![PNG Image](image/Function.png)
| Call by Value                     | Call by Reference                                   |
|-----------------------------------|-----------------------------------------------------|
| A copy of the value is passed to the function.| An address of the value is passed to the function. |
| Changes made inside the function are not reflected on other functions.| Changes made inside the function are reflected outside the function as well.|
| Actual and formal arguments will be created at different memory locations.| Actual and formal arguments will be created at the same memory location.    |
```cpp
#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main(){
    int a = 1;
    int b = 2;
    swap(a, b);
    cout << a << endl << b; // ???
}
```


### Algorithms
Một số hàm thuật toán
| Hàm                        | Mô Tả                                                                                               |
|----------------------------|------------------------------------------------------------------------------------------------------|
| sort(first_iterator, last_iterator)                        | Sắp xếp vector/container được đưa vào.                                                            |
| sort(first_iterator, last_iterator, greater<int>())       | Sắp xếp vector/container được đưa vào theo thứ tự giảm dần.                                       |
| reverse(first_iterator, last_iterator)                    | Đảo ngược thứ tự của vector. (nếu đang tăng dần -> giảm dần HOẶC nếu giảm dần -> tăng dần)         |
| *max_element (first_iterator, last_iterator)              | Tìm phần tử lớn nhất của vector.                                                                   |
| *min_element (first_iterator, last_iterator)              | Tìm phần tử nhỏ nhất của vector.                                                                   |
| accumulate(first_iterator, last_iterator, initial_sum)    | Tổng hợp các phần tử của vector, bắt đầu từ giá trị khởi đầu cho tổng.                           |

# Data structure
![PNG Image](image/DataStruct.png)

## Array
![PNG Image](image/Arrays-in-C.png)

- Một Mảng là một bộ sưu tập dữ liệu cùng kiểu dữ liệu, được lưu trữ tại một vị trí liên tục trong bộ nhớ.

- Chỉ mục của một mảng bắt đầu từ 0. Điều này có nghĩa là phần tử đầu tiên được lưu trữ tại chỉ mục 0, phần tử thứ hai tại chỉ mục 1, và cứ tiếp tục như vậy.

- Các phần tử của mảng có thể được truy cập bằng cách sử dụng chỉ mục của chúng.

- Một khi một mảng được khai báo, kích thước của nó duy trì không đổi suốt chương trình.

- Một mảng có thể có nhiều chiều.

- Số lượng phần tử trong một mảng có thể được xác định bằng toán tử sizeof.

- Chúng ta có thể tìm kích thước của loại các phần tử được lưu trữ trong mảng bằng cách trừ địa chỉ liền kề.

`data_type array_name[Size_of_array];`

Ví dụ:

```cpp
int array[101];
int a[3][3];
```
![PNG Image](image/two-d.png)

## Vector
Vector là một loại dữ liệu tương tự như mảng động, có khả năng tự điều chỉnh kích thước của mình tự động khi một phần tử được thêm vào hoặc xóa bỏ.

Ví dụ:

```cpp
vector<int> g1;
vector<int> myvector{ 1, 2, 3, 4, 5 };
vector<int> v1(101);
vector<vector<int>> v2;
```

![PNG Image](image/vector.png)
## Map

![PNG Image](image/red-black-tree.png)

Ví dụ:
```cpp
// C++ program to illustrate the begin and end iterator
#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main()
{
    // Create a map of strings to integers
    map<string, int> mp;
 
    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
 
    // Get an iterator pointing to the first element in the
    // map
    map<string, int>::iterator it = mp.begin();
 
    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }
 
    return 0;
}
```
## Set

Set trong C++ được cài đặt như là một `Self-Balancing Binary Search Tree`

Ví dụ:

```cpp
// C++ Program to Demonstrate
// the basic working of STL
#include <iostream>
#include <set>
 
int main()
{
    std::set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a) {
        std::cout << str << ' ';
    }
    std::cout << '\n';
    return 0;
}
```

## Stack

![PNG Image](image/stack.webp)

Ví dụ:

```cpp
#include <iostream> 
#include <stack>
using namespace std;
int main() {
    stack<int> stack;
    stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
    stack.push(num);
    stack.pop();
    stack.pop();
    stack.pop();
   
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
}
```

## Queue

![PNG Image](image/fifo-property-in-Queue.png)

Ví dụ:
```cpp
// CPP code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>
#include <queue>

using namespace std;

// Print the queue
void showq(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

// Driver Code
int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);

	cout << "The queue gquiz is : ";
	showq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	showq(gquiz);

	return 0;
}

```

## Pair

Struct

![PNG Image](image/struct.webp)

Pair

Ví dụ:

```cpp


// CPP program to illustrate 
// auto-initializing of pair STL
#include <iostream>
#include <utility>
 
using namespace std;
 
int main()
{
    pair<int, double> PAIR1;
    pair<string, char> PAIR2;
 
    // it is initialised to 0
    cout << PAIR1.first; 
   
    // it is initialised to 0
    cout << PAIR1.second; 
 
    cout << " ";
 
    // // it prints nothing i.e NULL
    cout << PAIR2.first; 
     
    // it prints nothing i.e NULL
    cout << PAIR2.second; 
 
    return 0;
}
```

```cpp
// CPP Program to demonstrate make_pair()
// function in pair
#include <iostream>
#include <utility>
using namespace std;

// Driver Code
int main()
{
	pair<int, char> PAIR1;
	pair<string, double> PAIR2("GeeksForGeeks", 1.23);
	pair<string, double> PAIR3;

	PAIR1.first = 100;
	PAIR1.second = 'G';

	PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);

	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;

	cout << PAIR2.first << " ";
	cout << PAIR2.second << endl;

	cout << PAIR3.first << " ";
	cout << PAIR3.second << endl;

	return 0;
}
```

```cpp
// CPP Program to demonstrate swap()
// function in pair
#include <iostream>
#include <utility>

using namespace std;

// Driver Code
int main()
{
	pair<char, int> pair1 = make_pair('A', 1);
	pair<char, int> pair2 = make_pair('B', 2);

	cout << "Before swapping:\n ";
	cout << "Contents of pair1 = " << pair1.first << " "
		<< pair1.second;
	cout << "Contents of pair2 = " << pair2.first << " "
		<< pair2.second;
	pair1.swap(pair2);

	cout << "\nAfter swapping:\n ";
	cout << "Contents of pair1 = " << pair1.first << " "
		<< pair1.second;
	cout << "Contents of pair2 = " << pair2.first << " "
		<< pair2.second;

	return 0;
}

```

# References

- [C++ work](https://hackingcpp.com/cpp/lang/separate_compilation.html)
- [bits/stdc++.h](https://www.geeksforgeeks.org/bitsstdc-h-c/)
- [auto](https://www.quora.com/Competitive-Programming/What-are-some-cool-C++-tricks-to-use-in-a-programming-contest)
- [string](https://www.geeksforgeeks.org/strings-in-cpp/)
- [I/O](https://codeforces.com/blog/entry/5217)
- [Operators](https://www.programiz.com/cpp-programming/operators)
- [Function](https://www.geeksforgeeks.org/functions-in-cpp/)
- [Algorithm](https://www.geeksforgeeks.org/c-magicians-stl-algorithms/)
- [Algorithms](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/amp/)
- [STL](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/amp/)
- [Vector](https://www.geeksforgeeks.org/vector-in-cpp-stl/)
- [Map](https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/)
- [Set](https://www.geeksforgeeks.org/set-in-cpp-stl/)
- [SetDataStructure](https://www.geeksforgeeks.org/introduction-to-set-data-structure-and-algorithm-tutorials/)
- [Stack](https://www.geeksforgeeks.org/stack-in-cpp-stl/)
- [Queue](https://www.geeksforgeeks.org/queue-cpp-stl/)
- [Struct](https://www.geeksforgeeks.org/structures-in-cpp/)
- [Pair](https://www.geeksforgeeks.org/pair-in-cpp-stl/)