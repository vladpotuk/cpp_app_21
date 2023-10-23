#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    double prybytok = 0.0;

    for (int month = 1; month <= 6; ++month) {
        double monthlyPrybytok;
        std::cout << "¬вед≥ть прибуток за м≥с€ць " << month << ": ";
        std::cin >> monthlyPrybytok;

        prybytok += monthlyPrybytok;
    }

    std::cout << "«агальний прибуток за 6 м≥с€ц≥в: " << prybytok << std::endl;

    return 0;
}

