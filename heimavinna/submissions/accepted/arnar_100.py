import sys

line = sys.stdin.readline().rstrip('\n')
cnt = 0
for x in line.split(';'):
    s = x.split('-')
    if len(s) == 1:
        cnt += 1
    else:
        cnt += int(s[1]) - int(s[0]) + 1

sys.stdout.write("%d\n" % cnt)
