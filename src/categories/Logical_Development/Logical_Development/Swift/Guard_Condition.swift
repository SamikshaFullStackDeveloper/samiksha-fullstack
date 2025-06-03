import Foundation 
 print ("Enter the first number:")
 guard let input1 = readLine() else{
     
     print("Invalid input")
     exit (0)
 }
 
  print("Enter the second number:")
 guard let input2 = readLine() else{
     
     print ("Invalid input")
     exit (0)
 }
 
 guard let num1 = Int(input1), let num2 = Int(input2) else{
     print("Enter valid number:")
     exit (0)
 
 }
 let sum = num1 + num2
 print(sum)
 
