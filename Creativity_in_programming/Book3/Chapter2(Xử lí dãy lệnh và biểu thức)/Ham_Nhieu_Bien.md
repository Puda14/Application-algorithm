# 2.4 HÀM NHIỀU BIẾN

**Time limit:** 1s.

**Problem:**

*Một số hàm có số tham biến không hạn chế:*

*Ví dụ 1:* Hàm ucln - tính ước chung lớn nhất của các số nguyên được định nghĩa như sau:

- ucln() = 0, không có tham biến, qui ước = 0.
- ucln(x) = |x|, ucln của số x là giá trị tuyệt đối của chính số đó.
- ucln(a, b) = ucln(b, a).
- ucln(a, 0) = a.
- ucln(a, b) = ucln(a mod b, b).
- ucln($x_1, x_2, ..., x_n $) = ucln(ucln($x_1, x_2, ..., x_{n-1}), |x_n|$), n $\geq$ 2.

*Ví dụ 2:* Hàm sum - tính tổng các số nguyên:

- sum() = 0.
- sum(x) = x.
- sum($x_1, x_2, ..., x_n $) = sum(sum($x_1, x_2, ..., x_{n-1} $), $x_n$), n $\geq$ 2.

Ngoài ra còn các hàm lấy min, max của dãy phần tử...

Cho một biểu thức được viết đúng cú pháp, chứa các hằng nguyên, các biến a, b,... được gán sẵn các giá trị a = 0, b = 1, ..., các phép toán số học +, -, *, / (chia nguyên), % (chia dư), các cặp ngoặc và các lời gọi hàm nhiều biến @. Hãy tính giá trị của biểu thức nếu @ là hàm ucln.

*Ví dụ:*

16 là giá trị của biểu thức (10 + @(12,30 + @(6,8)) + 17 * @() + 2) * @(1,3).

Thật vậy, ta có:

@() = 0; @(6,8) = 2;
@(12,30 + @(6,8)) = @(12,30 + 2) = @(12,32) = 4; @(1,3) = 1;
(10 + @(12,30 + @(6,8)) + 17 * @() + 2) * @(1,3) = (10 + 4 + 17 * 0 + 2) * 1 = 16 * 1 = 16.

#