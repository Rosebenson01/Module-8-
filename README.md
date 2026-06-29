# Module-8-
# Summarize the project and what problem it was solving
The Airgead Banking project was a C++ application designed to simulate compound interest growth over time for investment accounts. The program allowed users to input an initial investment, monthly deposit amount, interest rate, and number of years, then calculated and displayed projected account balances over time. The problem it solved was helping users clearly understand how consistent investing and compound interest affect long-term savings growth in a structured, easy-to-read format.

# What did you do particularly well?
I did well organizing the program using object-oriented principles, especially separating responsibilities into classes such as an investment account class and main driver logic. I also structured the output clearly so the user could easily compare yearly balances with and without monthly deposits. My calculations for compound interest were accurate and consistently applied across time periods, which ensured reliable results.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I could improve my code by adding stronger input validation and error handling to prevent invalid values such as negative deposits or interest rates. I could also improve efficiency and maintainability by reducing repeated calculations and possibly modularizing interest calculations into smaller helper functions. In terms of security and robustness, validating user input and handling edge cases would prevent runtime errors and make the program more reliable for unexpected input.

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The most challenging part was correctly calculating compound interest with monthly deposits while ensuring the math stayed accurate across multiple years. It was also challenging to format the output so it was easy to read and aligned properly. I overcame these issues by breaking the problem into smaller steps, testing calculations incrementally, and using debugging tools in Visual Studio to verify values at each stage. Going forward, I will rely more on documentation, online C++ references (such as cppreference), and debugging tools to troubleshoot logic errors more efficiently.

# What skills from this project will be particularly transferable to other projects or course work?
This project strengthened my object-oriented programming skills, especially class design, encapsulation, and separation of concerns. It also improved my ability to implement mathematical logic in code and reinforced debugging skills. These are transferable to nearly all future programming tasks, especially larger applications that require structured design and accurate data processing.

# How did you make this program maintainable, readable, and adaptable?
I made the program maintainable by organizing the code into functions and classes rather than placing all logic in the main function. I used clear variable names and consistent formatting to improve readability. I also structured the program so that changes to interest calculations or input handling could be made in one place without rewriting the entire program. This modular approach makes it easier to update, debug, and expand the program in the future.
