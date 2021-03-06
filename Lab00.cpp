// Lab00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" //basic console application header file
#include <iostream> //including the input output stream commands
#include <fstream> //including the reading and writing commands to write/read files
#include <string> // including the string data type
using namespace std; //this using statement makes it so we dont have to put std:: in front of different commands

int main() //the initialization of the main body of the program
{
	string line, response; //creating a string called "line" and "response"
	cout << "Hello Github!" << endl; // printing out the typed line
	ifstream file_squestns; //creating the reading stream
	file_squestns.open("StudentQuestions.txt"); //opeing the questions text document
	ofstream file_sanswers;  //creating the writing stream
	file_sanswers.open("StudentAnswers.txt"); //opening the answers text file so it will write the answers to them
	while (getline(file_squestns, line)) //while there are text lines to read, the loop will continue
	{
		cout << line << " "; //printing out a return (newline) and a space
		cin >> response; //reading the response, and then writing it to the response object/data type we created earlier
		file_sanswers << response << endl; //writing the value of the response to the answers text file
	}
	cout << "Goodbye Github!" << endl; //printing out the typed text, in this case its "Goodbye Github!"
	return 0; //returning a 0 because to signify the end of the program
}


