# 5. 7 MÃ BW

**Time limit:** 1s.

**Problem:**

***(Olimpic Quốc tế(Bài dự tuyển))***

*Mã BW do Michael Burrows and David Wheeler đề xuất dùng để mã hoá xâu kí tự s thành cặp (u,d) như sau:*

1. Quay xâu s qua trái mỗi lần 1 vị trí để thu được n xâu tính cả xâu s,
2. Sắp tăng các xâu thu được theo trật tự từ điển,
3. Lấy các kí tự cuối của các xâu được sắp ghép thành từ u,
4. Xác định d là vị trí xuất hiện của xâu s trong dãy được sắp.

*Ví dụ:* s = "panama" ta có kết quả tại các bước như sau:

1. Sinh các xâu theo cách quay: "panama", "anamap", "namapa", "amapan", "mapana", "apanama".
2. Sắp xếp các xâu:  "anamap", "amapan", "mapana","namapa", "panama".
3. u = "npmaaa".
4. d = 6.

Kết quả: "panama" được mã BW thành: ("npaa", 6).

*Cho s, hãy tính (u,d) và biết (u,d), hãy xác định s. Chiều dài tối đa của s là 200.*

#