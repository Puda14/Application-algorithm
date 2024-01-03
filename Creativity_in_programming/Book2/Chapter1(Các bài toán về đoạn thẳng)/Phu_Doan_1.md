# 1.7 PHỦ ĐOẠN 1

**Time limit:** 1s.

**Problem:**

*Cho N đoạn thẳng trên trục số với các điểm đầu $a_i$ và điểm cuối $b_i$ là những số nguyên trong khoảng (-1000, 1000) $a_i \leq b_i$ i = 1...N. Hãy chỉ ra ít nhất K đoạn thẳng sao cho khi đặt chúng trên trục số thì có thể phủ kín đoạn [x,y] với toạ độ nguyên cho trước.*

Dữ liệu và: tệp văn bản **DOAN.INP** (xem bài đoạn trước)

Dữ liệu ra: tệp văn bản **DOAN.OUT** : 

- Dòng đầu tiên: số K, nếu vô nghiệm K=0.
- K dòng tiếp theo, mỗi dòng chứa một số tự nhiên là chỉ số của đoạn thẳng phủ kín đoạn [x,y].

*Ví dụ* dưới cho biết ít nhất có 3 đoạn bao nhau là các đoạn 1, 3 và 4 sẽ phủ kín đoạn [3, 23].

|DOAN.INP|DOAN.OUT|
|:----|:---|
|5|3|
|3 23|1|
|1 15|3|
|3 10|4|
|8 20||
|17 25||
|2 7||

#