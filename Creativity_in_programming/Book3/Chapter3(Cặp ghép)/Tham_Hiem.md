# 3.3 THÁM HIỂM

**Time limit:** 1s.

**Problem:**

*Trường A và trường B đều cử n học sinh (HS) tham gia trò chơi Thám hiểm Cung Trăng với n xe tự hành, mỗi xe chở được 2 người có nhiệm vụ khảo cứu một đề tài khoa học và hoạt động tại một vùng riêng trên Cung Trăng với một chủ đề cụ thể ghi trên xe đó. Sau khi xem bản hướng dẫn và trình diển thử của các xe tự hành, mỗi HS chọn một số xe. Ban Tổ chức (BTC) cần chia các em thành các nhóm, mỗi nhóm 2 bạn sẽ làm việc trên một xe, một bạn của trường A và một bạn của trường B sao cho 2 bạn trên cùng một xe thì cùng quan tâm đến chủ đề chung. Hãy giúp BTC sắp xếp sao cho nhiều chủ đề nhất được thực hiện.*
 
 Dữ liệu vài: Text file **Discover.inp** :

 - Dòng 1: số tự nhiên n.
 - Dòng thứ i trong số n dòng tiếp theo có dạng: $k c_1 c_2...c_k$ trong đó k là số lượng xe HS i của trường A chọn, các số tiếp theo là mã số của các xe đồng thời là mã số của đề tài mà bạn đó chọn. Dòng thứ i trong số n dòng tiếp theo là thông tin của trường B có cấu trúc tương tự như trường A.

 Dữ liệu ra: Text file **Discover.out** gồm n dòng, mỗi dòng 2 HS: i của trường A, j của trường B cho biết i và j tạo thành một nhóm do cùng chọn 1 xe. 
 
 *Chú ý:* Dữ liệu trên cùng dòng cách nhau qua dấu cách.

 *Ví dụ:*

|Discover.inp|Discover.out|
|:----|:---|
|5|1 1|
|3 3 1 4|2 5
|2 2 3|4 2
|3 4 2 1| 3 4
|2 1 3|5 3
|3 5 4 2
|3 2 3 1
|3 1 4 3
|2 5 2
|3 4 2 1
|3 3 1 2

![Alt text](<Screenshot (1221).png>)
#