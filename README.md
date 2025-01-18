Assignment 3: Electricity Bill Generator

Q]
Create a system in C to generate electricity bills based on units consumed. 
Input customer details: ID, Name, Phone Number, Type (Domestic/Commercial), and Units. Implement functions for:
i. Input handling
ii. Bill calculation
iii. Displaying a formatted bill with all details (ID, Name, Phone, Type, Units, Amount).

Our ideation for the given question: 
The basic idea was to calculate the total fees that the student will have to pay to the coaching institute for two year course, including the reference book expenses.
This idea satisfies our condition for calculating the total amount and displaying the summary as the student will get a detailed receipt including his name, 
address, phone number, and fees according to the course chosen. 

Challenge faced:
Validation of phone number input by the user must be a valid 10 digit number so while coding, I first thought it would be easy just by using ctype library's isdigit function
but during testing I realised that the input must be stored in an array in order to validate the number of digits and every keystroke. Then I created a function for the same.
