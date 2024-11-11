# Cafeteria-Order-Management
A Cafeteria Order Management System in C++ is a console-based application designed to manage orders in a cafeteria. It allows the cafeteria staff or customers to view the menu, place orders by selecting items, and calculate the total bill based on item price and quantity ordered. Below is a breakdown of the system's components and functionality:

1. Classes and Objects <br>
Menu Class: This class is designed to represent each menu item. It contains attributes like:

itemNo: Unique identifier for each menu item.
item: Name of the menu item (e.g., "Masala Dosa", "Paneer Dosa").
price: Cost of a single unit of the item.
Methods:
getItemNo(), getItem(), and getPrice(): Getter methods to access item number, name, and price.
Cafeteria Class: This class is responsible for managing the entire cafeteria menu and order processes. It contains:<br>

ve: A vector of Menu objects that holds the entire menu.<br>
Methods:<br>
add(): Allows adding new items to the menu with item number, name, and price.<br>
order(): Displays the menu and enables the user to select an item number and quantity, then calculates and prints the total bill for the order.<br>
2. Functionalities<br>
Adding Items: Items can be added to the menu through the add() method in the Cafeteria class.<br> Each item is created as a Menu object and added to the vector storing all menu items.<br>
Displaying the Menu: The order() method first displays all available menu items with their item numbers, names, and prices.<br>
Order Processing: After displaying the menu, the order() method prompts the user to:<br>
Enter the item number they want to order.<br>
Enter the quantity of that item.<br>
The method then searches for the item by its number and calculates the total cost by multiplying the item’s price with the quantity.<br>
Bill Generation: The calculated total cost is printed, showing the amount to be paid.<br>
3. Example Code Structure<br>
Here’s how the code structure typically looks:<br>

Main Function: Creates an instance of Cafeteria, adds some items to the menu, displays the menu, and allows the user to place an order by calling the order() function.<br>
