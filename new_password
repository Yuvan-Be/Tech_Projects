import random
letters =['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
symbols = ['(',')','+','-','#','@','₹','&']
numbers = ['0','1','2','3','4','5','6','7','8','9']
print("welcome to the password generator")
n_letters = int(input("how many letters wuold you like in your password:\n"))
n_symbols = int (input (" how may symbols would you like:\n"))
n_numbers = int (input ("how many numbers would you like:\n "))
password_generator = []
for i in range(1,n_letters+1) :
    char = random.choice(letters)
    password_generator+=char
for i in range (1,n_symbols+1)  :
    char = random.choice(symbols) 
    password_generator+=char
for i in range (1,n_numbers+1) :
    char = random.choice(numbers)
    password_generator += char
random.shuffle(password_generator)
password = " "
for char in password_generator :
    password+= char
print(password)