# 2.9 QUÝ MÙI

**Time limit:** 1s.

**Problem:**

*Mình muốn làm một thiếp chúc tết Quý Mùi có nền được tạo bởi $2^n$ dòng là một dãy kí tự gồm n chữ cái 'Q' và 'M' sao cho hai dòng kề nhau khác nhau tại đúng một vị trí, dòng cuối cùng cũng được coi là kề với dòng đầu tiền. Giả sử bạn có thể giúp Minh làm điều đó. Với mỗi giá trị n và k cho trước bạn hãy hiển thị dòng thứ k trong tấm thiếp trên. Các dòng được mã số từ 1 trở đi, 1 $\leq$ n $\leq$ 30.*

## Mã Gray

Mã Gray của một số tự nhiên k là số (k shr 1) xor k = (k div 2) xor k, trong đó xor là phép toán cộng loại trừ theo bít: a xor b = 0 khi và chỉ khi a = b.

>Các tính chất của mã Gray:
>>1. Mã Gray của hai số tự nhiên khác nhau: $k_1$ $\neq$ $k_2$ $\Rightarrow$ Gray($k_1$) $\neq$ Gray($k_2$).
>>2. Mã Gray của 2 số tự nhiên liên tiếp khác nhau tại đúng 1 bit.
>>3. Gray(0) = 0; Gray(1) = 1.
>>4. Nếu số x có n bit thì Gray($2^n - 1$) = $2^{n-1}$.

Mã Gray và các giá trị của hàm Gline của 16. Số tự nhiên đầu tiên k = 0...15

|K|Gray(k)|Gline 4, k)| k| Gray(k)| Gline 4,k)|
|:----|:---|:---|:---|:---|:---|
|0: 0000|0: 0000| QQQQ|8: 1000| 12: 1100|MMQQ
|1: 0001|1: 0001|QQQM|9: 1001|13: 1101| MMQM|
|2: 0010|3: 0011|QQMM|10: 1010|15: 1111|MMMM|
|3: 0011|2: 0010|QQMQ|11: 1011|14: 1110|MMMQ|
|4: 0100|6: 0110|QMMQ|12: 1100| 10: 1010|MQMQ|
|5: 0101|7: 0111|QMMM|13: 1101|11: 1011| MQMM|
|6: 0110|5: 0101| QMQM| 14: 1110| 9: 1001|MQQM|
|7: 0111|4: 0100|QMQQ|15: 1111|8: 1000| MQQQ|

## Phương pháp

Nhờ mã Gray ta có thể viết hàm GLine(n, k) cho ra dòng k trong thiệp T(n) một cách đơn giản như sau:

- Bước 1:
    - Tính x = Gray(k) = (k shr 1) xor k = (k div 2) xor k.
- Bước 2:
    - Xét n bit thấp của x, nếu 1 thì viết 'M' nếu là 0 thì viết 'Q'.

***(* Pascal *)***

```
function Gray(k; longint): longint;
begin Gray := (k shr 1) xor k end;
function Gline(n: integer; k: longint): string;
var s: tring; i: integer;
const cc; array[0..1] of char = ('Q','M');
begin
    k := Gray(k); s = `';
    for i := n-1 downto 0 do
      s = s + cc[(k shr i) and 1];
    Gline := s;
end;
```
#