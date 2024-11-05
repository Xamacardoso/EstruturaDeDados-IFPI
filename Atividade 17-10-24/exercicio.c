#include <stdio.h>
#include <string.h>

// Creates a struct called Student
typedef struct {
    int reg; // Register id
    char name[30]; // Student's name
} Student;

// Array of 20 students
Student studentArr[20];
int last = 0; // The last element of the array.

// Returns if the array has any element left
int isFull(){
    return last == 20;
    /*There are 20 elements in the array, that
    it's indexes goes from 0 to 19, if the last 'points' to 20
    it means that the list is full */
}

// Returns if the array has no element (last is 0)
int isEmpty(){
    return !last;
}

// Inserts a student at the end of the array
void insertStudent(Student newStudent){
    if (isFull()){
        printf("Error: The list is full!\n");
        return;
    }

    studentArr[last] = newStudent;
    last++; // Updates who's the last
}

// Removes a student by its index in the array
void removeStudent(int wanted){
    if (isEmpty()){
        puts("Error: The list is empty, try adding some more elements.");
        return;
    }
    // From the selected index, replaces the i element of the array with its next
    // This causes an element to be lost in memory, in other words, being 'removed' of the array
    for (int i = wanted; last-i; i++){ 
        studentArr[i] = studentArr[i + 1];
    }
    last--; // Updates last
}

void showStudents(){
    // Prints the information about every student until the (last - i) evaluates something that's not a null value
    for (int i = 0; last - i;i++){
        printf("%d - Matricula: %d | Nome: %s\n", i+1,studentArr[i].reg, studentArr[i].name);
    }
}

int main(){
    Student aluno = {1, "Caio"};
    for (int i = 0; i < 20; i++)
        insertStudent(aluno);       
    
    showStudents();
    return 0;
}