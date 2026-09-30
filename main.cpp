#include <iostream>

// Lab 5 — Tristan Daliva
// CIS 5 Week 05 · Eligibility check

using std::cout;
using std::cin;

int main() {
  int age = 0;
  double gpa = 0.0;

  cout << "What is your current age? ";
  cin >> age;

  cout << "What is your current GPA? ";
  cin >> gpa;

  bool adult = age >= 18;
  bool honors = gpa >= 3.5;

  if (adult && honors) cout << "You are eligible for the honors program! \n";

  else if (adult || honors) cout << "You only meet one of the requirements for the honors program, sorry! \n";

  else cout << "You meet no requirements for the honors program!";
 
 
  // TODO: cout question, then cin, for age and for gpa done

  // Thresholds: adult at 18, honors at 3.5 (change these and say why in a comment)
  // TODO: bool adult = ...;
  // TODO: bool honors = ...;

  // TODO: if (adult && honors) { ... }        best case first
  // TODO: else if (adult || honors) { ... }   exactly one requirement met
  // TODO: else { ... }                        neither — the program still answers

  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20

  return 0;
}
