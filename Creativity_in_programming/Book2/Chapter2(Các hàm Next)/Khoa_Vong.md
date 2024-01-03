# 2.6 KHOÁ VÒNG

**Time limit:** 1s.

**Problem:**

*Một ổ khoá gồm M vòng chữ và N vòng số. Mỗi vòng chữa hoặc số chứa các giá trị biến thiên từ giới hạn nhỏ nhất a đến giới hạn lớn nhất b. Hãy liệt kê tăng dần theo trật tự từ điểm các giá trị có thể có của khoá.*

Dữ liệu vào: tệp văn bản **KHOA.INP** :

- Dòng 1: hai số tự nhiên M và N (1 $\leq$ M, N $\leq$ 5).

- Dòng thứ i trong số M + N dòng tiếp theo: giới hạn $a_i$ và $b_i$ cho các vòng khoá.

Dữ liệu ra: tệp văn bản **KHOA.OUT** :
 
 - Dòng 1: Tổng số khả năng.

 - Dòng thứ 2 trở đi: mỗi dòng một giá trị khoá liệt kê tăng dần theo trật tự từ điển. Các kí tự chữ và số trong mỗi khoá được viết liền nhay, không có dấu cách ở giữa. Các giá trị chữ được lấy từ bảng chữ HOA tiếng Anh.

 *Ví dụ:*

|KHOA.INP|KHOA.OUT|
|:----:|:---:|
|1 2|12|
|B C|B20|
|2 3|B21|
|0 2|B22|
||B30|
||B31|
||B32|
||C20|
||C21|
||C22|
||C30|
||C31|
||C32|

#