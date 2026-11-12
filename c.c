#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main(void) {
#ifdef _WIN32
    /* Консоль Windows переключаем на UTF-8, чтобы кириллица не превращалась в "кракозябры" */
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif

    /* Исходные данные */
    const char *student_name_ru = "Гареев Артур Динарович";
    const char *student_name_en = "Gareev Artur Dinarovich";
    const int student_number = 7;
    const char *group_name = "М3О-109БВ-26";
    const char *language_name = "C";
    const int course_code = 304;

    /* Вычисляемые значения */
    char student_id[64];
    snprintf(student_id, sizeof student_id, "%s/%02d", group_name, student_number);
    const int control_value = course_code * student_number;

    printf("Hello to %d from %s, number %d, group %s!\n",
           course_code, student_name_en, student_number, group_name);
    printf("Привет, %d! Это %s, номер %d, группа %s!\n",
           course_code, student_name_ru, student_number, group_name);
    printf("Student ID: %s | Language: %s | Control: %d\n",
           student_id, language_name, control_value);
    return 0;
}
