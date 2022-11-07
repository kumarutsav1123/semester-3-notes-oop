#include <iostream>

using namespace std;
class book
{
public:
    string title, author;
    int price, no;
    void getdata();
};
void create(book *a, book *b, book *c, book *d)
{
    a->title = "John";
    a->author = "John Wick";
    a->price = 500;
    a->no = 3;
    b->title = "Dune";
    b->author = "Frank Hebert";
    b->price = 600;
    b->no = 5;
    a->title = "Harry Potter";
    a->author = "J K Rowling";
    a->price = 400;
    a->no = 6;
    a->title = "Loop";
    a->author = "Adarsh Tiwar";
    a->price = 900;
    a->no = 2;
}

int main()
{
    book a[4];
    create(&a[0], &a[1], &a[2], &a[3]);
    int x, n, tot = 0;
    string tit;
    do
    {
        cout << "1) ENTER TITLE\n2) EXIT\n";
        cout << "Choice: ";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            int flag = 0;
            cout << "Enter the title of book: ";
            getline(cin >> ws, tit);
            for (int i = 0; i < 4; i++)
            {
                if (tit == a[i].title)
                {
                    if (a[i].no > 0)
                    {
                        cout << "Book Available\n";
                        cout << "Author: " << a[i].author << "\n";
                        cout << "Price: " << a[i].price << "\n";
                        cout << "No. of copies: " << a[i].no;
                        cout << "\nEnter the number of copies required: ";
                        cin >> x;
                        fflush(stdin);
                        cout << "Total Bill: " << x*a[i].price <<endl;
                        a[i].no = a[i].no - x;
                    }
                    else
                    {
                        cout << "\nNo Copies left\n\n";
                    }
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                cout << "\nEntered Title not available\n\n";
            }
            break;
        }
        case 2:
        {
            exit(0);
            break;
        }
        default:
            break;
        }
    } while (n != 2);

    return 0;
}