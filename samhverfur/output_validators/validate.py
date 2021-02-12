#!/usr/bin/env python2
import sys
import os
input_file = sys.argv[1]
answer_file = sys.argv[2]
feedback_dir = sys.argv[3]

output = sys.stdin.read()

answer = '''
1 2
2 4
3 8
4 11
5 22
6 55
7 121
8 252
9 505
10 1001
11 2002
12 4004
13 8118
14 16361
15 32723
16 65456
17 130031
18 261162
19 523325
20 1048401
21 2096902
22 4193914
23 8387838
24 16766761
25 33544533
26 67100176
27 134212431
28 268434862
29 536868635
30 1073663701
31 2147447412
32 4294884924
33 8589889858
34 17179797171
35 34359695343
36 68719391786
37 137438834731
38 274877778472
39 549755557945
40 1099511159901
41 2199023209912
42 4398046408934
43 8796092906978
44 17592177129571
45 35184366348153
46 70368733786307
47 140737484737041
48 281474969474182
49 562949949949265
50 1125899889985211
51 2251799779971522
52 4503599559953054
53 9007199229917009
54 18014398489341081
55 36028796969782063
56 72057593939575027
57 144115187781511441
58 288230375573032882
59 576460752257064675
60 1152921504051292511
61 2305843009003485032
62 4611686018106861164
63 9223372036302733229
64 18446744066044764481
65 36893488144188439863
66 73786976288267968737
67 147573952585259375741
68 295147905171509741592
69 590295810353018592095
70 1180591620660261950811
71 2361183241331423811632
72 4722366482772846632274
73 9444732965665692374449
74 18889465931413956498881
75 37778931862926813987773
76 75557863725852736875557
77 151115727451154727511151
78 302231454903309454132203
79 604462909806608909264406
80 1208925819614169185298021
81 2417851639229229361587142
82 4835703278457548723075384
83 9671406556916196556041769
84 19342813113833831131824391
85 38685626227666672262658683
86 77371252455333355425217377
87 154742504910666019405247451
88 309485009821343128900584903
89 618970019642686246910079816
90 1237940039285335829300497321
91 2475880078570660758700885742
92 4951760157141441417510671594
93 9903520314283003824130253099
94 19807040628566066582604070891
95 39614081257132123175218041693
96 79228162514264246241526182297
97 158456325028527725820523654851
98 316912650057056650750056219613
99 633825300114114411411003528336
100 1267650600228229228220060567621
'''

def fix(s):
    ans = []
    for l in s.replace('\r', '\n').split('\n'):
        l = l.replace(' ', '')
        if l:
            ans.append(l)
    return ans

ans = set(fix(answer))
out = set(fix(output))

corr = ans & out
with open(os.path.join(feedback_dir, 'score.txt'), 'w') as f:
    f.write('%0.10f\n' % (float(len(corr)) / len(ans)))
sys.exit(42)