#include <stdlib.h>

// set the contact in struct
typedef struct {
    int id;
    char alias[MAX_ALIAS_LENGTH];
    int phone_numeber;
} Contact;

const int MAX_ALIAS_LENGTH = 50;

Contact format_contact(const char* alias, int phone_number);
void print_contact_list(const Contact* contacts);
void update_contact();
void delete_contact();

int main() {
    int *contacts = (int *)malloc(10 * sizeof(int));

    // todo: ask for the user input
    // todo: keep looping until the user wants to stop
    // todo: format the user input into a Contact struct with the function format_contact
    // todo: store the Contact struct in the contacts array

    return 0;
}

// the character array should be passed as a pointer in the function args
Contact format_contact(const char* alias, int phone_number) {
    Contact contact;
    contact.id = 0;
    strncpy(contact.alias, alias, MAX_ALIAS_LENGTH);
    contact.phone_numeber = phone_number;
    return contact;
}

void print_contact_list(const Contact* contacts) {}
void update_contact() {}
void delete_contact() {}