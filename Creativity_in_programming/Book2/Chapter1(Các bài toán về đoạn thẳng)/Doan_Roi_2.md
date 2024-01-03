# 1.11 ĐOẠN RỜI 2

**Time limit:** 1s.

**Problem:**

*Cho N đoạn thẳng với các điểm đầu $a_i$ và điểm cuối $b_i$ là những số nguyên trong khoảng (-1000, 1000) $a_i \leq b_i$. Liệt kê số lượng tối đa K đoạn thẳng rời nhau. Hai đoạn thẳng được coi là rời nhau nếu chúng không có điểm chung. Các đoạn có dạng như trong bài Phủ đoạn 2.*

Dữ liệu vào: tệp văn bản **DOAN.INP** :

- Dòng đầu tiên: số tự nhiên N > 1.
- Từ dòng 2: liệt kê các đoạn, mỗi dòng có thể chứa nhiều đoạn, mỗi đoạn ghi trọn trên 1 dòng.

Dữ liệu ra: tệp văn bản **DOAN.OUT** :

- Dòng đầu tiên: số tự nhiên K.
- Tiếp theo là K số tự nhiên biểu thị chỉ số của các đoạn thẳng rời nhau.

*Ví dụ* dưới cho biết tối đa có 5 đoạn  rời nhau là 1, 2, 7, 3 và 4.

|DOAN.INP|DOAN.OUT|
|:----|:---|
|8|5|
|(-2, 3) [3, 5]|1 2 7 3 4|
|[8, 12] [13, 15)||
|(1, 9) (2, 5]||
|[8, 8) [7, 15]|

#