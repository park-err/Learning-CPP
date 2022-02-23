Plan A: xGB, 39.99 + (x-2)*8 if x > 2
	when x <= 2, 39.99

Plan B: xGB, x > 8, 59.99 + (x-8)*8
	x <= 8, 59.99

Plan C: 79.99 for unlimited

Write a program that calculates a customer's monthly bill. 
It should input the customer name, which plan was purchased, and how many gigabytes were used. 
It should then create a bill the includes the input information and the total amount due. 
It should also display how much money plan A customers would have save if they purchased plan B or plan C
and how much money plan B customers would save if they purchased plan C
If there ould be no savings, no message should be printed. Wherever possible, use named constants instead of numbers

file names:
PhoneBillSavings.h
PhoneBillSavings.cpp
main.cpp

classes and methods
class PhoneBillSavings
getUserInfo()
planA()
planB()
planC() ---> returns 79.99 always
