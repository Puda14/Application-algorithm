# 7.2 PALINDROME

**Time limit:** 1s.

**Problem:** 

***(Olympic Quốc tế 2000 tại Bắc Kinh, Trung Quốc)***

*Dãy ký tự s được gọi là đối xứng (palindrome) nếu các phần tử cách đều đầu và cuối giống nhau. Cho dãy s tạo bởi n ký tự gồm các chữ cái hoa và thường phân biệt và các chữ số. Hãy cho biết cần xoá đi từ s ít nhất là bao nhiêu ký tự để thu được một dãy đối xứng. Giả thiết rằng sau khi xoá bớt một số ký tự từ s thì các ký tự còn lại sẽ tự động xích lại sát nhau.*

*Dữ liệu* vào ghi trong tệp văn bản **PALIN.INP** với cấu trúc như sau:

- Dòng đầu tiên là giá trị *n* (1 $\leq$ n $\leq$ 1000).
- Dòng thứ hai là *n* ký tự của dãy viết liền nhau.

Dữ liệu ghi ra trong tệp văn bản **PALIN.OUT** là số lượng ký tự cần xoá.

*Ví dụ:*

| PALIN.INP | PALIN.OUT |
|:----:|:-----:|
|9|4|
|**baeadbadb**| |

Với dãy *s* gồm 9 ký tự, *s* = 'baeadbadb' thì cần xoá ít nhất 4 ký tự, chẳng hạn, các ký tự 5,7,8 và 9 ta thu được được dãy đối xứng chiều dài 5 là 'baeab'.

baea~~d~~b~~adb~~ $\to$ baeab

Dĩ nhiên là có nhiều cách xoá. Ví dụ, có thể xoá các ký tự thứ 2,3,4 và 6 từ dãy s để thu được dãy con đối xứng khác là 'bdadb' với chiều dài là 5:

b~~aea~~d~~b~~adb $\to$ bdadb

Tuy nhiên đáp số là số ít nhất các ký tự cần loại bỏ khỏi *s* thì là duy nhất và bằng 4.

#