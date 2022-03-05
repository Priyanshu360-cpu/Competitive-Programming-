section	.text
   global _start     
	
_start:	  
   mov	edx,len   
   mov ecx,msg
   mov	ebx,1       
   mov	eax,4       
   int	0x80 
   
   mov	edx,1   
   mov ecx,letter
   mov	ebx,1       
   mov	eax,4       
   int	0x80 
   
   mov	edx,nlen   
   mov ecx,newline
   mov	ebx,1       
   mov	eax,4       
   int	0x80 
   
   mov	edx,1   
   mov ecx,number
   mov	ebx,1       
   mov	eax,4       
   int	0x80 
   
   mov	edx,9    
   mov ecx,stars
   mov	ebx,1       
   mov	eax,4       
   int	0x80        
	
   mov	eax,3       
   int	0x80        

section	.data
msg db 'Output',0xa
len equ $ - msg
newline db '',0xa
nlen equ $ - newline
letter DB 'y'
number		DW	12345
stars   times 9 db '*'
