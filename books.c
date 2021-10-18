#include <stdio.h>
#include <string.h>

struct Books
{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

void print_book(struct Books *book);

int main()
{

  struct Books Book1;
  struct Books Book2;

  strcpy(Book1.title, "C Programming");
  strcpy(Book1.author, "Muhammed Ali");
  strcpy(Book1.subject, "C Programming Book");
  Book1.book_id = 6495407;

  strcpy(Book2.title, "Telecom Billing");
  strcpy(Book2.author, "Ronnie Coleman");
  strcpy(Book2.subject, "Telecom Boilling Tutorial");
  Book2.book_id = 6333333;

  print_book(&Book1);
  print_book(&Book2);

  return 0;
}

void print_book(struct Books *book)
{
  printf("%s\n", "===============");
  printf("Title: %s\n", book->title);
  printf("Author: %s\n", book->author);
  printf("Subject: %s\n", book->subject);
  printf("ID: %d\n", book->book_id);
  printf("%s\n", "===============");
  printf("\n");
};