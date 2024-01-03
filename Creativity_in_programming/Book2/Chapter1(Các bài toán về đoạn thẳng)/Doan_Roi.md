# 1.1 ĐOẠN RỜI

**Time limit:** 1s.

**Problem:**

*Cho N đoạn thẳng với các điểm đầu $a_i$ và điểm cuối $b_i$ là những số nguyên trong khoảng (-1000, 1000) $a_i \leq b_i$. Liệt kê số lượng tối đa K đoạn thẳng không giao nhau. Hai đoạn thẳng  [a,b] và [c,d] được coi là không giao nhau nếu xếp chung trên cùng một trục số, chúng không có điểm chung. Điều kiện này đòi hỏi: b < c hoặc d < a.*

Dữ liệu vào: tệp văn bản **DOAN.INP** :

- Dòng đầu tiên: số tự nhiên N (1 < N $\leq$ 1000).
- Dòng thứ i trong N dòng tiếp theo, mỗi dòng chứa hai số nguyên $a_i$ và $b_i$ cách nhau qua dấu cách, biểu thị điểm đầu và điểm cuối của đoạn thứ i, i = 1...N.

Dữ liệu ra: tệp văn bản **DOAN.OUT** :

- Dòng đầu tiên: số tự nhiên K.
- K dòng tiếp theo, mỗi dòng một số tự nhiên v thể hiện chỉ số của các đoạn rời nhau tìm được.

*Ví dụ* dưới cho biết tối đa có 5 đoạn  rời nhau là 1, 2, 7, 3 và 4.

|DOAN.INP|DOAN.OUT|
|:----|:---|
|8|5|
|2 3|1|
|4 5|2|
|10 12|7|
|13 15|3|
|1 9|4|
|2 5|
|6 8|
|7 5|

#