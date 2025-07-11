#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
	int id;
	char title[100];
	char author[100];
	float price;
	int isSubscription;
} Book;

typedef struct CartItem {
	Book book;
	struct CartItem* next;
} CartItem;

Book books[10];
int bookCount = 0;

void loadBooks() {
books[bookCount++] = (Book){1, "Atomic Habits", "James Clear", 299.0, 0};
books[bookCount++] = (Book){2, "The Lean Startup", "Eric Ries", 399.0, 0};
books[bookCount++] = (Book){3, "Atomic Habits", "James Clear", 299.0, 0};
books[bookCount++] = (Book){1, "Atomic Habits", "James Clear", 299.0, 0};
