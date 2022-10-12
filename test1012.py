#!/usr/bin/env python
# coding: utf-8

# In[5]:


import math
radius = float(input("请输入圆的半径:"))
circumference = 2*math.pi*radius
area = math.pi*radius*radius
print("圆的周长为:%.2f" % circumference)
print("圆的面积为:%.2f" % area)


# In[7]:


string = 'hello_world'
string[:-6]*2


# In[8]:


x=y=z=1


# In[9]:


x=(y=x+1)


# In[10]:


print(5//2)


# In[14]:


c = 5


# In[16]:


isinstance('5//2',int)#判断数据类型


# In[17]:


15 == 0xf


# In[18]:


int(-3.8)                        
int('0x41', 16)
int('1.8')
int('0b111', 2) 


# In[19]:


complex(1)


# In[23]:


a = eval( input() )
print ( "{:+>9.3f}".format ( a ** 0.5) )


# In[27]:


cal = input("请输入您的计算表达式:")
print("%s = %s" % (cal,eval(cal)))


# In[33]:


(1.6-0.7)>0.9


# In[29]:


1.6-0.7==0.9


# In[30]:


1.6-0.7=0.9


# In[31]:


abs((1.6-0.7)-0.9)<1e-6


# In[40]:


a=0
b=36
print(a or b)


# In[41]:


a='0'
b=36
print(a or b)


# In[42]:


a='Faulse'
b=36
print(a or b)


# In[44]:


a="Hi"
b=36
print(a or b)


# In[54]:


aList =[7,9]
x=aList.insert(-2,3)
print (aList)


# In[53]:


aList = [123, 'xyz', 'zara', 'abc']
 
aList.insert( 3, 2009)
 
print ("Final List : ", aList)


# In[ ]:




