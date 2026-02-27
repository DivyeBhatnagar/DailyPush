n = int(input("Enter a number: "))

print(f"\nNumbers from 1 to {n}:")
sum_total = 0
for i in range(1, n + 1):
    print(i, end=" ")
    sum_total += i

print(f"\nSum = {sum_total}")
