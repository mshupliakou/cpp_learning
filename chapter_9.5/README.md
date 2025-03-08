# Name Pairs Program

This C++ program provides a library management system that allows users to manage books, patrons, and transactions. It includes various functionalities such as book borrowing, membership management, and transaction tracking

## Features
- **Book Management**: Add books with unique ISBNs, authors, titles, genres, and availability status.
- **Patron Management**: Register patrons with unique IDs, track their borrowed books, and manage fees.
- **Library Transactions**: Process book borrowings, record transactions, and identify debtors.
- **Date Handling**: Uses a custom Chrono namespace for date management.
- **Operator Overloading**: Supports == and != operators for book and date comparisons.
- **Formatted Output**: Overloads << operator for structured display of book and date information

## Files Included

*Header Files*:
- `Book.h`: Defines the Book class, handling book-related data and operations.
- `Patron.h`: Defines the Patron class, managing library members.
- `Library.h`: Implements the Library class, handling books, patrons, transactions, and borrowing functions.
- `Chrono.h`: Contains the Chrono namespace for date-related operations.


*Source Files*:
- `Book.cpp`: Implements methods of the Book class.
- `Patron.cpp`: Implements methods of the Patron class.
- `Library.cpp`: Implements methods of the Library class.
- `Chrono.cpp`: Implements date-related functions from the Chrono namespace.
- `Main.cpp`: Main program for user interaction and system testing.
