#include<iostream>
#include<vector>
using namespace std;
// Structure to store a to-do item
struct Todo {
  string description;
  bool completed;
};
// Function to display the main menu
void displayMenu() 
{
  cout<< " ** To-Do List Manager **" << endl;
  cout<< "1. Add a new task" << endl;
  cout<< "2. View all tasks" << endl;
  cout<< "3. Mark a task as completed" << endl;
  cout<< "4. Delete a task" << endl;
  cout<< "5. Exit" << endl;
  cout<< "Enter your choice: ";
}
void addTask(vector<Todo>& todos) {
  string description;
  cout << "Enter task description: ";
  cin>>description;
  todos.push_back({description, false});
  cout << "Task added successfully!" << endl;
}
void viewTasks(const vector<Todo>& todos) {
  if (todos.empty()) {
    cout << "No tasks to display." << endl;
    return;
  }
  for (int i = 0; i < todos.size(); ++i) {
    cout << "[" << (i + 1) << "] " << (todos[i].completed ? "[DONE]" : "[ ]") << " " << todos[i].description << endl;
  }
}
void markTaskCompleted(vector<Todo>& todos) {
  cout << "Enter the number of the task to mark as completed: ";
  int taskNumber;
  cin >> taskNumber;
  if (taskNumber < 1 || taskNumber > todos.size()) {
    cout << "Invalid task number." << endl;
    return;
  }
  todos[taskNumber - 1].completed = true;
  cout << "Task marked as completed." << endl;
}

void deleteTask(vector<Todo>& todos) {
  cout << "Enter the number of the task to delete: ";
  int taskNumber;
  cin >> taskNumber;
  if (taskNumber < 1 || taskNumber > todos.size()) {
    cout << "Invalid task number." << endl;
    return;
  }
  todos.erase(todos.begin() + (taskNumber - 1));
  cout << "Task deleted successfully." << endl;
}

int main() {
  vector<Todo> todos;

  while (true) {
    displayMenu();
    int choice;
    cin >> choice;

    switch (choice) {
      case 1:
        addTask(todos);
        break;
      case 2:
        viewTasks(todos);
        break;
      case 3:
        markTaskCompleted(todos);
        break;
      case 4:
        deleteTask(todos);
        break;
      case 5:
        cout << "Exiting..." << endl;
        return 0;
      default:
        cout << "Invalid choice. Please try again." << endl;
    }
  }

  return 0;
}
