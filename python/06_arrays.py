n = int(input("Enter number of elements: "))

arr = []
print(f"Enter {n} elements:")
for i in range(n):
    arr.append(int(input()))

print(f"\nArray elements: {arr}")
print(f"Sum = {sum(arr)}")
print(f"Average = {sum(arr) / n}")
