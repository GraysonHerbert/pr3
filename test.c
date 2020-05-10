#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{  
  Node * list = NULL;
  int choice = 0, value = 0;

  printf("Choose the action you would like to take:\n (1) insert a node at the head \n (2) insert a node at the tail \n (3) delete a node \n (4) delete all \n (5) Display \n (6) exit\n");
 
  do{
    scanf("%i", &choice);

    switch (choice)
    {
      case 1:
        printf("Input a value for the node: ");
        scanf("%i", &value);
        list = List_insert(list, value);
        break;
      case 2:
        printf("Input a value for the node: ");
        scanf("%i", &value);
        List_insert_last(list, value);
        break;
      case 3:
        printf("Input a value to delete from the list: ");
        scanf("%i", &value);
        list = List_delete(list, value);
        break;
      case 4:
        List_destroy(list);
        break;
      case 5:
        List_print(list);
        break;
      case 6:
      break;
      default:
        printf("That was not a valid input\n");
      
    }
  } while(choice != 6); 

  return 0;
}
