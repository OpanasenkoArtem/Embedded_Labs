#include <stdio.h>

struct Book {
    char* title;
    float price;
    int pages;
    char* language;
    float weight;
    int year;
    struct Book* next;
};

int main() {
    struct Book b7 = {"Гаррі Поттер і Смертельні реліквії", 520.0, 640, "Українська", 720, 2007, NULL};
    struct Book b6 = {"Гаррі Поттер і Напівкровний Принц", 480.0, 576, "Англійська", 660, 2005, &b7};
    struct Book b5 = {"Гаррі Поттер і Орден Фенікса", 580.0, 816, "Українська", 890, 2003, &b6};
    struct Book b4 = {"Гаррі Поттер і Келих вогню", 520.0, 672, "Німецька", 750, 2003, &b5};
    struct Book b3 = {"Гаррі Поттер і в'язень Азкабану", 420.0, 384, "Українська", 470, 2002, &b4};
    struct Book b2 = {"Гаррі Поттер і Таємна кімната", 380.0, 352, "Французька", 440, 2002, &b3};
    struct Book b1 = {"Гаррі Поттер і філософський камінь", 380.0, 320, "Українська", 410, 2002, &b2};

    struct Book* current = &b1;

    while (current != NULL) {
        printf("Назва: %s\n", current->title);
        printf("Ціна: %.2f грн | Сторінок: %d | Мова: %s | Вага: %.0f г | Рік: %d\n\n",
               current->price, current->pages, current->language, current->weight, current->year);
        
        current = current->next;
    }

    return 0;
}