import sys
import re

line = sys.stdin.readline()
assert re.match('^[1-9][0-9]* [1-9][0-9]*\n$', line)
n,k = map(int, line.split())

assert 1 <= n <= 10**5
assert 1 <= k <= 10**5

line = sys.stdin.readline()
arr = [int(x) for x in line.split()]

assert len(arr) == n

for x in range(n):
    assert 1 <= arr[x] <= 10**9

assert not sys.stdin.read()
sys.exit(42)
