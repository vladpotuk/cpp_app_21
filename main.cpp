#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    double prybytok = 0.0;

    for (int month = 1; month <= 6; ++month) {
        double monthlyPrybytok;
        std::cout << "������ �������� �� ����� " << month << ": ";
        std::cin >> monthlyPrybytok;

        prybytok += monthlyPrybytok;
    }

    std::cout << "��������� �������� �� 6 ������: " << prybytok << std::endl;

    return 0;
}

