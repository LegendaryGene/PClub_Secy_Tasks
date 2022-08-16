# The Messiah of IITK
### time limit per test: 1 second
### memory limit per test: 256 megabytes
### input: standard input
### output: standard output  
------ 
<br />

Satyajit is a professor of statistics at IITK. He is taking the infamous MTH102 course and is grading the answersheets. He is a kind prof and wants to give good grades, so he decides that in each copy, he will randomly give **h** free marks to the student as a surprise. But, if he is caught helping the students he will be punished, so he does some statistics and finds that if at most **k** of the marks are isolated, the he will not be caught. A mark is called isolated if it is surrounded by zero on both sides. The students of the Y'21 batch are not so smart, so their copy is an array of size **n** with first and last score zero, and scores in the i-th problem is either 0 or 1, but each 1 is guaranteed to be isolated. Help Satyajit find out if he can help the students without getting caught.

## **INPUT**  
  
Each test contains multiple test cases. The first line contains the number of test cases **t** (1≤t≤200000). The description of the test cases follows.

The first line of each test case contains three integers, n (1≤n≤200000), h(h≤n) and k(k≤n).

The next line contains n numbers, i-th of them representing the score on the i-th problem, each being a 0 or a 1, with a[0] and a[n-1] guaranteed to be 0, and each 1 seperated by atleast one 0.
  
## **OUTPUT**

For each test case print if Satyajit can help the student without getting caught, if no, then print -1. If yes, then print the maximum possible score the student can get on the test. The maximum score is simply the sum of scores on all the problems.

### **Example**  
#### **input**  
>2<br/>
>10 1 2<br/> 
>0 1 0 1 0 0 1 0 1 0  
>6 0 2 <br/>
>0 1 0 1 0 0

#### **output**    
>5  <br/>
>2  