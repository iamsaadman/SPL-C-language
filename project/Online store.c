#include <stdio.h>
#include <stdlib.h>

#define MAX_PRODUCTS 10
#define MAX_NAME_LENGTH 50

// Define a structure to represent a product
typedef struct
{
    char name[MAX_NAME_LENGTH];
    float price;
} Product;

// Define a structure to represent an item in the cart
typedef struct
{
    Product product;
    int quantity;
} CartItem;

// Declare global variables
Product products[MAX_PRODUCTS];
int num_products = 0;
CartItem cart[MAX_PRODUCTS];
int num_items = 0;

// Declare function prototypes
void display_menu();
void view_product_list();
void add_item_to_cart();
void view_cart();
void check_out();

int main()
{
    int choice;

    // Add some products to the store
    products[num_products++] = (Product)
    {"Product A", 10.99
    };
    products[num_products++] = (Product)
    {"Product B", 15.99
    };
    products[num_products++] = (Product)
    {"Product C", 20.99
    };

    // Display the menu and get the user's choice
    do
    {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            view_product_list();
            break;
        case 2:
            add_item_to_cart();
            break;
        case 3:
            view_cart();
            break;
        case 4:
            check_out();
            break;
        case 5:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    while (choice != 5);

    return 0;
}

// Display the menu
void display_menu()
{
    printf("\n");
    printf("1. View product list\n");
    printf("2. Add item to cart\n");
    printf("3. View cart\n");
    printf("4. Check out\n");
    printf("5. Quit\n");
}

// View the list of available products
void view_product_list()
{
    printf("\n");
    printf("Available products:\n");
    for (int i = 0; i < num_products; i++)
    {
        printf("%d. %s ($%.2f)\n", i + 1, products[i].name, products[i].price);
    }
}

// Add an item to the cart
void add_item_to_cart()
{
    int choice;
    printf("\n");
    printf("Enter the number of the product you want to add to your cart: ");
    scanf("%d", &choice);
    if (choice < 1 || choice > num_products)
    {
        printf("Invalid choice. Please try again.\n");
        return;
    }
    int index = choice - 1;
    printf("Enter the quantity you want to add: ");
    int quantity;
    scanf("%d", &quantity);
    if (quantity < 1)
    {
        printf("Invalid quantity. Please try again.\n");
        return;
    }
    if (num_items == MAX_PRODUCTS)
    {
        printf("Your cart is full. Please check out or remove items.\n");
        return;
    }
    cart[num_items].product = products[index];
    cart[num_items].quantity = quantity;
    num_items++;
    printf("Item added to cart.\n");
}

// View the contents of the cart
void view_cart()
{
    if (num_items == 0)
    {
        printf("Your cart is empty.\n");
        return;
    }
    printf("\n");
    printf("Your cart:\n");
    float total_price = 0.0;
    for (int i = 0; i < num_items; i++)
    {
        CartItem item = cart[i];
        printf("%d. %s x %d ($%.2f each)\n", i + 1, item.product.name, item.quantity, item.product.price);
        total_price += item.product.price * item.quantity;
    }
    printf("Total price: $%.2f\n", total_price);
}

// Check out and empty the cart
void check_out()
{
    if (num_items == 0)
    {
        printf("Your cart is empty.\n");
        return;
    }
    printf("\n");
    printf("Checking out...\n");
    float total_price = 0.0;
    for (int i = 0; i < num_items; i++)
    {
        CartItem item = cart[i];
        total_price += item.product.price * item.quantity;
    }
    printf("Total price: $%.2f\n", total_price);
    num_items = 0;
}
