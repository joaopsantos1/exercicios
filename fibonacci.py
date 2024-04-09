n = int(input())

termo1, termo2 = 0, 1

while termo1 < n:
    termo1, termo2 = termo2, termo1 + termo2

print(termo1 == n)
