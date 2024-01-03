# 1.10 PHỦ ĐOẠN 2

**Time limit:** 1s.

**Problem:**

*Cho N đoạn thẳng <$a_i  b_i$> với các điểm đầu $a_i$ và điểm cuối $b_i$ là những số nguyên trong khoảng (-1000, 1000) $a_i \leq b_i$ và thuộc 1 trong 4 dạng sau đây:*

[d,c] - đoạn đóng: chứa điểm đầu d và điểm cuối c.

(d,c] - đoạn mở trái: không chứa điểm đầu d, chứa điểm cuối c.

[d,c) - đoạn mở phải: chứa điểm đầu d, không chứa điểm cuối c.

(d,c) - đoạn mở: không chứa điểm đầu d và điểm cuối c.

Dữ liệu và: tệp văn bản **DOAN.INP** :

- Dòng 1: số tự nhiên 1 < N $\leq$ 1000.
- Dòng 2: Đoạn [x,y].
- Từ dòng 3 liệt kê các đoạn, mỗi dòng có thể chứa nhiều đoạn, mỗi đoạn được ghi trọn trên một dòng.

Dữ liệu ra: tệp văn bản **DOAN.OUT** : 

- Dòng đầu tiên: số K, nếu vô nghiệm K=0.
- K dòng tiếp theo, mỗi dòng chứa một số tự nhiên là chỉ số của đoạn thẳng phủ kín đoạn [x,y].

*Ví dụ* dưới cho biết ít nhất có 3 đoạn 1, 2 và 6 sẽ phủ kín đoạn (4, 10).

|DOAN.INP|DOAN.OUT|
|:----|:---|
|6|3|
|(4, 10)|1|
|(-2, 5)|2|
|[5, 7]|6|
|[6, 7]||
|[7, 8]||
|[8, 9]||
|(7, 10)||

Chú ý: Giữa các số và ký tự trong file input có thể chứa các dầu cách.
#