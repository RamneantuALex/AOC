#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Open file
    int a, b, k = 0, num, sum = 0;
    ifstream in("input.txt");

    if (!in.is_open())
    {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    string line;

    while (getline(in, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (isdigit(line[i]))
            {
                if (k == 0)
                    a = line[i] - '0';
                else
                    b = line[i] - '0';

                k++;
            }
        }

        if (k == 1)
            b = a;

        num = stoi(line);
        sum += num;
        k = 0;
    }

    in.close();

    cout << "suma este " << sum;

    return 0;
}
