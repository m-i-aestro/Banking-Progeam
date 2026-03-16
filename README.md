# ATM-Program

A straightforward, terminal-based banking application built with C++. This project simulates the core operations of a real-world ATM with a clean and modular code structure. Created for personal learning purposes.
---

##Key Features

* **Check Balance:** View your current account balance anytime.
* **Deposit Money:** Add funds to your account with a multi-step confirmation menu.
* **Withdraw Money:** Take out funds with automatic balance checks to prevent overdrawing.
* **Persistent Transactions:** Perform multiple operations in one session without restarting the app.
* **Safe Exit:** A dedicated option to end your session securely with a closing message.

---

##How It Works

The program is built using a **modular approach** where each banking action is handled by its own dedicated function:
* `choice()`: The main navigation hub and menu controller.
* `balanceCheck()`: Displays the current state of funds.
* `deposit()`: Handles incoming funds with validation.
* `withdraw()`: Manages outgoing funds and checks for insufficient balance.
* `quit()`: Handles the session termination and closing messages.

---

##Installation & Usage

Follow these steps to run the ATM application on your local machine:

### 1. Clone the Repository
Open your terminal and run:
```bash
git clone https://github.com/m-i-aestro/atm-simulation-cpp.git
```
### 2. Compile the Program
Use a C++ compiler (like G++) to build the executable:
```bash
g++ main.cpp -o ATM_App
```
3. Run the Application
Start the simulation by executing the file:
```bash
./ATM_App
```
