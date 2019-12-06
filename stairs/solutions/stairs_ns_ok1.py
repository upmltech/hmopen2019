n, x = map(int, input().split())
a = list(map(int, input().split()))

ans = 0
for i in range(n - 1):
    ans += (a[i + 1] - a[i] - 1) // x

print(ans)
