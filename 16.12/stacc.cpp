#include <iostream>
#include <string>
#include <vector>

class stacc
{
    private:
        std::vector<int> v;
        int s;
    public:
        stacc (void)
            : v { }, s{ }
        {
        }
        void push(int n)
        {
            v.push_back(n);
            s++;
            std::cout << "push " << n << " ";
        };
        int pop()
        {
            s--;
            int ret = v[s];
            v.pop_back();
            std::cout << "pop    ";
            return ret;
        };
        void print()
        {
            std::string st = "( ";
            for (int i = 0 ; i < s; i++)
            {
                st += std::to_string(v[i]);
                st += " ";
            }
            std::cout << st  << " )\n";
        };
};

int main()
{
    stacc S;

    S.print();
    S.push(1);
    S.print();
    S.push(2);
    S.print();
    S.push(3);
    S.print();
    S.pop();
    S.print();
    S.push(4);
    S.print();
    S.pop();
    S.print();
    S.pop();
    S.print();
    S.pop();
    S.print();

    return 0;
}
