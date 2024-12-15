#include <stdio.h>
#include "sqlite3.h"

// kund
int main()
{
    sqlite3 *mydb;
    int err = sqlite3_open("mydatabase.db", &mydb);

    if (err)
    {
        printf("Something went wrong!");
        return 1;
    }
    else
    {
        printf("Opened Successfully!");
    }

    return 0;
}