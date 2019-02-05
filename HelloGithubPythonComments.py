print("Hello Github!") #this just prints out whatever is typed in quotations
file_squestns = open('StudentQuestions.txt', 'r') #opens the StudentQuestions text file
file_sanswers = open('StudentAnswers.txt', 'w') #opens the Student answers file
for line in file_squestns: #This for loop runs while there is still questions to be asked
  ans = input(line) #sets the typed response as the ans variable
  file_sanswers.write(ans + '\n') #writes whatever the ans variable currently is to the answers file
print("Goodbye Github!") # prints whatever is typed put, in this case its "Goodby Github"
file_squestns.close() #closes the questions file
file_sanswers.close() #closes the answers file



