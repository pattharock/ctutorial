#include<stdio.h>
#include<string.h>

typedef struct Book
{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
} book;

int main(){

  book Book;

  strcpy(Book.title, "C Programming");
  strcpy(Book.author, "Muhammed Ali");
  strcpy(Book.subject, "C Programming Tutorial");
  Book.book_id = 1;

  printf( "Book title : %s\n", Book.title);
  printf( "Book author : %s\n", Book.author);
  printf( "Book subject : %s\n", Book.subject);
  printf( "Book book_id : %d\n", Book.book_id);

  return 0;
}
