# 3.4 SHOW

**Time limit:** 1s.

**Problem:**

*Nhóm n học sinh (HS) tham gua trình diễn phần mềm. Mỗi em được trình bày riêng sản phẩm của mình trước Ban giám khảo (BGK) trong thời gian 30 phút. BGK làm việc việc trong m ngày, ngày thứ i có thể nhận $v_i$ HS. Trong bản đăng ký mỗi HS ghi khả năng có thể trình diễn phần mềm của mình vào những ngày nào. Hãy sắp xếp lịch để các HS được trình diễn theo đúng nguyện vọng.*

Dữ liệu vào: Text file **show.inp** :

- Dòng 1: hai số n và m.
- Dòng 2: các giá trị $v_1 v_2...v_m$.
- Dòng thứ i trong số n dòng tiếp theo: $k u_1 u_2 ... u_k$. Trong đó k - số HS u chọn, các $u_j$ là những ngày cụ thể HS i chọn.

Dữ liệu ra: Text file **show.out** gồm m dòng, dòng thứ i cho biết ngày thứ i BGK duyệt trình diễn của những HS nào. Dữ liệu trên cùng dòng cách nhau qua dấu cách.

*Ví dụ:*

||Ngày 1|Ngày 2|Ngày 3|
|:---|:---|:---|:---|
|HS 1||$\checkmark$||
|HS 2|$\checkmark$||$\checkmark$|
|HS 3||$\checkmark$|$\checkmark$|
|HS 4|$\checkmark$|||
|HS 5|$\checkmark$|||

|show.inp|show.out|
|:----|:---|
|5 3|4 5|
|2 2 1| 1 3|
|1 2|2|
|2 1 3
|2 2 3
|1 1 
|1 1

#