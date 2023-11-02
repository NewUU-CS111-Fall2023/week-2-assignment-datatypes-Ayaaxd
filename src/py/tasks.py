from random import randint


class NumberGuesser:
    def guess_number(self, target):
        n = randint(1, 100)
        while target != n:
            if target > n:
                print("Too high\n")
                target = int(input("Please guess again!\n"))
            else:
                print("Too low\n")
                target = int(input("Please guess again!\n"))
        print(f"You found the number {target}! Congratulations!!! ")

class LongArithmeticCalculator:
    def calculate_long_arithmetic(self, divisor):
        x = randint(10**99, 10**100 - 1)
        print(f"{x} is a random 100-digit number\n")
        print(float(x / divisor))

class StringMatcher:
    def match_string(self, text):
        if text[-1] in text[0:-1]:
            print(f'Index of "{text[-1]}" in "{" ".join(text[0:-1])}" sentence is {text[0:-1].index(text[-1])}!')
        else:
            print("Does not match")
