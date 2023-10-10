def is_palindrome(s):
    # Remove spaces and convert to lowercase
    s = s.replace(" ", "").lower()
    
    # Compare the string with its reverse
    return s == s[::-1]

input_string = input("Enter a string: ")
if is_palindrome(input_string):
    print("It's a palindrome!")
else:
    print("It's not a palindrome.")
