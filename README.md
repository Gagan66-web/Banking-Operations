# Banking Operations Program

This is a menu-driven C program that allows users to perform various banking operations including deposit, balance check, withdrawal, interest calculation for a savings account, calculation of interest and maturity amount for a fixed deposit (FD) account, and calculation of Equated Monthly Installment (EMI) for a home loan.

## Operations

1. **Deposit**
    - Allows the user to deposit funds into their savings account.

2. **Balance Check**
    - Displays the current balance in the savings account.

3. **Withdrawal**
    - Allows the user to withdraw funds from their savings account, provided the balance is sufficient.

4. **Interest Calculation for Savings Account**
    - Calculates the interest for a given balance in a savings account.

5. **Interest and Maturity Amount Calculation for FD Account**
    - Calculates both the interest and maturity amount for a fixed deposit account given the principal, interest rate, and time period.

6. **Home Loan EMI Calculation**
    - Calculates the EMI for a home loan given the principal, interest rate, and time period.

## Implementation Details

- The program is implemented using header files, client file, function files, and a Makefile.
- The header files contain function declarations.
- The function files contain the implementation of the banking operations.
- The client file contains the main function and the menu-driven logic.
- The Makefile is used for compiling and building the program.

## Usage

1. **Compile the Program:**
   - Before running the program, make sure you have a C compiler installed (e.g., GCC).
   - Use the following command to compile the program using the Makefile:
     ```
     make
     ```

2. **Run the Program:**
   - Execute the compiled program by running the following command:
     ```
     ./banking_operations
     ```

3. **Follow the Prompts:**
   - Upon running the program, you will be presented with a menu.
   - Choose the desired banking operation by entering the corresponding number.
   - Follow the prompts to perform the chosen operation, such as deposit amount, withdrawal amount, etc.

4. **View Outputs:**
   - The program will perform the chosen operation and display the result, such as current balance, interest amount, maturity amount, or EMI.

## Requirements

- C compiler (e.g., GCC)

## Compatibility

- This program can be run on any system with a C compiler installed.
- It can be executed on the command shell or any C-supported IDE.

