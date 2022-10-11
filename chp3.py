#!/usr/bin/env python
# coding: utf-8

# In[9]:


import tensorflow as tf


# In[10]:


print('Tensorflow Version: {}'.format(tf.__version__))


# In[11]:


from keras. datasets import mnist
(x_train,y_train),(x_test,y_test) = mnist.load_data()


# In[12]:


print(x_train.shape,x_test.shape)


# In[13]:


import pandas as pd


# In[16]:


data = pd.read_csv('./Income1.csv')


# In[17]:


data


# In[18]:


import matplotlib.pyplot as plt
get_ipython().run_line_magic('matplotlib', 'inline')


# In[19]:


plt.scatter(data.Education, data.Income)


# In[23]:


x = data.Education
y = data.Income


# In[26]:


model = tf.keras.Sequential()


# 

# In[29]:


model.add(tf.keras.layers.Dense(1,input_shape=(1,)))


# In[32]:


model.summary()


# In[ ]:




