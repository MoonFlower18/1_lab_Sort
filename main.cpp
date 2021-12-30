#include "tree.h"
#include "Node.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fill_in(std::vector<int>& rand_nums) //рандомное заполнение
{
    int min = 0;
    int max = 10;
    for (int i = 0; i < rand_nums.size(); i++)
    {
        int rand_num = min + rand() % (max - min);
        rand_nums[i] = rand_num;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    size_t size = 0;
    cout << "Введите размер дерева A: ";
    cin >> size;
    vector<int> rand_nums(size);
    fill_in(rand_nums);

    Tree A;
    A.push(rand_nums);
    rand_nums.clear();
    cout << "Дерево А: " << endl;
    A.reverse_print();

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Введите размер дерева B: ";
    cin >> size;
    rand_nums.resize(size);
    fill_in(rand_nums);

    Tree B;
    B.push(rand_nums);
    cout << "Дерево В: " << endl;
    B.symmetry_print();

    A.add_tree(&B);

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    std::cout << "Дерево А и В: " << endl;
    A.reverse_print();
}