input_string= input("Enter String:")
n= int(input("Enter n:"))

seq="abcdefghijklmnopqrstuvwxyz";
rev=seq[::-1]; # to reverse
dict1= dict(zip(seq,rev));

#finding the part of string on which we will do mirror operation;
prefix=input_string[0:n-1];
suffix=input_string[n-1:];


#find the mirror string;
mirror=""
for i in range(0,len(suffix)):
    mirror= mirror + dict1[suffix[i]]

#creating final string
    res=  prefix + mirror;

print("Result is ",res)