# 5.15 CÓC

**Time limit:** 1s.

**Problem:**

*Kết quả được chọn ưu tiên cho các giá trị nhỏ. Ví dụ, Rhythm(""aaaaa") = 1, trong khi các tình huống 3 và  5 cũng thỏa mãn. Biết 2 $\leq$ n $\leq$ 255.*

***Thuật toán:***

Ta sử dụng 3 biến đếm b (bằng), t (tăng), g (giảm) và duyệt tuần tự xâu s để ghi nhận các tình huống khi di chuyển từ phần tử tiếp theo $S_{i + 1}$ . Cụ thể là ta gán:

- b = 1 nếu $s_i = s_{i+1}$,

- t = 1 nếu $s_i < s_{i+1}$,

- g = 1 nếu $s_i > s_{i+1}$.

Giá trị của hàm Rhythm chính là số nguyên có dạng biểu diễn nhị phân (g,t,b). Cụ thể là với 5 trường hợp đầu ta có:

Rhythm = 4 * g + 2 * t + b

Hai trường hợp cuối ứng với các trị 6 và 7 được chuyển về 0.

Tóm lại, ta có:

Rhythm =((4 * g+2 * t + b ) mod 7) mod 6

|g|t|b|Rhythm|
|:---|:---|:---|:---|
|0|0|1|1
|0|1|0|2
|0|1|1|3
|1|0|0|4
|1|0|1|5
|1|1|0|6 $\rightarrow$ 0
|1|1|1|7 $\rightarrow$ 0

#