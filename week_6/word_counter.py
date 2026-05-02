sentence = input("Enter a sentence: ")
words = sentence.lower().split()

number = len(words)

characters = 0
for i in words:
    length = len(i)
    characters = characters + length

frequency = {}
for word in words:
    if word in frequency:
        frequency[word] += 1
    else:
        frequency[word] = 1

print(f"Total words: {number}")
print(f"Total characters: {characters}")
for i in frequency:
    print(f"{i} --> {frequency[i]}")
