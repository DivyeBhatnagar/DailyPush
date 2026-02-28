str_input = input("Enter a string: ")

vowels = 0
for ch in str_input.lower():
    if ch in 'aeiou':
        vowels += 1

print(f"\nLength: {len(str_input)}")
print(f"Vowels: {vowels}")
print(f"Consonants: {len(str_input) - vowels}")
