# 🚗 Car Rental Management System

A C++ Object-Oriented Program simulating a complete **Car Rental Management System**, built for coursework or academic demonstration of object-oriented principles such as **classes**, **inheritance**, **encapsulation**, and **file handling**.

---

## 📌 Project Overview

This system allows a **Car Rental Company** to manage its vehicles and customers through two user roles:

- **Owner** (admin-level access)
- **Employee** (limited functionality)

### 🧭 Core Functionalities

- Vehicle inventory management (Add, Edit, Search, View)
- Customer registration and information management
- Renting process with billing
- Vehicle return with damage report handling
- Secure login system for owners

---

## 💡 Features

### 🎮 Main Functionalities

- **🔐 Login System**
  - Owner login with hardcoded credentials
  - Credentials:  
    - Username: `user`  
    - Password: `pass`

- **🚘 Vehicle Module**
  - Add new vehicles (SportsCar, DailyUseCar, E-Car)
  - Set fuel type: Diesel, Petrol, Electric
  - Set transmission type: Auto, Manual
  - Edit existing vehicle information
  - Search vehicles by name or chassis number
  - View all vehicles with total rental history

- **👥 Customer Module**
  - Register new customers with name, CNIC, email, phone, address
  - Associate customers with rented vehicles
  - Calculate bills: rent/day × duration, advance, total, damage penalty
  - Extend rental duration
  - Return vehicle with optional damage report

---

## 🧾 Billing System

- Calculates:
  - Total bill = Rent per day × Number of days
  - Advance payment = 50% of total
  - Damage fee = 30% of bill (if reported)
- Displays:
  - Customer info
  - Vehicle details
  - Total, advance, remaining charges

---

## 🛠 Technologies Used

- **Language:** C++
- **Platform:** Windows Console Application
- **IDE Compatible:** Dev-C++, Code::Blocks, Visual Studio
- **Libraries Used:**
  - `<iostream>` – Input/output
  - `<fstream>` – File handling
  - `<string>` – String manipulation
  - `<conio.h>` – Console I/O for password masking
  - `<windows.h>` – Windows-specific enhancements

- **Concepts Implemented:**
  - Object-Oriented Programming
  - Inheritance (sports car, daily car, e-car)
  - Encapsulation and access modifiers
  - Static members
  - File persistence using `.txt`

---

## ▶️ How to Run
Open the project in any C++ IDE (e.g., Code::Blocks, Dev-C++, or Visual Studio).
Compile and run Car Rental (OOP).cpp.
Use the menu-driven interface to navigate through the system.

**🔐 Login Credentials for Owner Access:**
- Username: user
- Password: pass

## 🔐 Security & Limitations
🧩 Authentication: Hardcoded owner login credentials
🖥 Interface: Console-based UI only (no GUI)
💾 Storage: Text files used for record keeping (.txt)
🧍 Concurrency: Single-user usage only (no multi-user or multi-threaded access)


