# 5.17 GAME

**Time limit:** 1s.

**Problem:**

*Đây là trò chơi một người tạm gọi là bạn Vova với hai dãy số nguyên dương: a gồm n > 1 phần tử và b gồm m > 1 phần tử. Vova phải thực hiện các thao tác sau đây:*

- Chia mỗi dãy a và b thành k $\geq$ 1 nhóm, mỗi nhóm gồm dãy các phần tử đứng liền nhau, số phần tử của mỗi nhóm có thể khác nhau nhưng tối thiểu phải là 1. Số k do Vova tự quyết định; Mã số các nhóm là 1, 2,..., k;
- Tiếp đến, Vova phải tính tổng: 

$c= c_{1} + c_{2} +...+c_k$,

Trong đó: 
- $c_{i} = (s_{i} - u_{i})(t_{i} - v_{i})$, i = 1, 2 ,...,k;

- $s_i$ là tổng các phần tử của nhóm i trong dãy a;

- $u_{i}$ là số phần tử của nhóm i trong dãy a;

- $t_i$ là tổng các phần tử của nhóm i trong dãy b;

- $v_i$ là số phần tử của nhóm i trong dãy b;

*Hãy cho biết giá trị min của c.*

Dữ liệu vào: text file **VOVA.INP** :

- Dòng 1: 2 số n và m;
- Tiếp là n phần tử của dãy a;
- Tiếp là m phần tử của dãy b;

*Chú ý:* Các dữ liệu cùng dòng cách nhau qua dấu cách.

Dữ liệu ra: text file **VOVA. OUT** chứa giá trị min c.

*Ví dụ:* 

Xét các phương án sau: 

***Phương án 1:*** Chọn k = 1 Khi đó mỗi dãy tự tạo thành một nhóm: a = (3, 7, 4) ; b = (5, 2).

Thao tác trên dãy a: $s_{1} = 3 + 7 + 4 = 14; u_{1} = 3$;

Thao tác trên dãy b: $t_{1} = 5 + 2 = 7; v_{1} = 2$;

$c = c_{1} = (s_{1} - u_{1})(t_{1} - v_{1}) = (14 - 3)(7 - 2) = 11 * 5 = 55.$

***Phương án 2:*** Chọn k = 2 Khi đó mỗi dãy có đúng 2 nhóm: a = (3)(7, 4) b = (5)(2) hoặc a = (3, 7)(4) ; b = (5)(2) Ta xét lần lượt từng phương án con 2.1 và 2.2:

*Phương án 2.1:* a = (3)(7, 4); b = (5)(2).

Thao tác trên dãy a: $s_{1} = 3 ; u_{1} = 1; s_{2} = 7 + 4 = 11; u_{i} = 2;$

Thao tác trên dãy b: $t₁ = 5; v₁ = 1; t2 = 2; v_2= 1;$

$c₁ = (s_1-u₁)(t_1-v_11)=(3-1)(5-1) = 2 * 4 = 8;$

$c_2 = (s_2-u_2)(t_2-v_2) = (11-2)(2-1) = 9 * 1 = 9;$

$c = c_1 + c_2 = 8 + 9 = 17.$

*Phương án 2.2:* a = (3,7)(4); b = (5)(2).

Thao tác trên dãy a: $s₁ = 3+7 = 10; u₁ = 2; s_2 = 4; u₂ = 1;$

Thao tác trên dãy b: $t₁ = 5; v₁ = 1; t_2 = 2; v_2 = 1;$

$c_1 = (s_1 - u_1)(t_1-v_1) = (10–2)(5-1) = 8 * 4 = 32;$

$c_2 = (s_2-u_2)(t_2-v_2) = (4-1)(2-1) = 3 * 1 = 3;$

$c = c_1+c_2 = 32+3=35.$

Vậy $cmin = min(55, 17, 35) = 17.$

|VOVA.INP|VOVA.OUT|
|:---|:---|
|3 2|17
|3 7 4|
|5 2|

#