<img align="right" height="36" width="200" src="https://upload.wikimedia.org/wikipedia/commons/thumb/b/bb/Ros_logo.svg/512px-Ros_logo.svg.png?20230604145013"/>

# Introduction to ROS

## Why ROS?
***The Robot Operating System (ROS) is an open-source, meta-operating system designed to provide a structured framwork for robotics software development. 
ROS provides abstractions that allow seperating programming from physical layer and a rich set of capabilities for robot developers.***
<br>
***Abstraction of Robot System: Sense-Think-Act***
<br>
***ROS Provides interface with low level drivers and hardware, kind of standard APIs:turning sensing data into ROS topics and actuations into ROS messages so you can focus on the think part.***
<br>

---

<code>***<span style="color:green">What are publishers and subscribers?***</code>
***Messages are transmitted on a topic, and each topic has a unique name in the ROS network. If a node wants to share information, it uses a ```publisher``` to send data to a topic. A node that wants to receive that information uses a ```subscriber``` to that same topic.***

---

## ROS Architecture
<code>***ROS Node ->***</code> ***A computational unit in ROS that can communicate by publishing or subscribing to topics, providing or using services,and accessing the parameter server.***
<br><br>
<code>***ROS Topics ->***</code>
***A named channel for communication between ROS Nodes, allowing asynchronous message passing.Nodes can publish messages through topics or even subscribe to receive messages.***
<br><br>
<code>***ROS message ->***</code>
***A data structure used to represent information exchanged between ROS nodes on topics.Messages are defined in ```.msg``` files and specfiy the format and content of data being transmitted.***
<br><br>
<code>***ROS Services ->***</code>
***AREAS service allows nodes to send a request and receive a response.It follows asynchronous communication pattern,meaning the requester waits for a response from the service provider before proceeding.Services are useful for tasks that require immediate feedback or where requester needs specific information or actions to be performed,Services are defined using ```.srv``` files.***
![Service](https://cdn.prod.website-files.com/66a37d395dfadcdb65dcdf45/66e476da786ae6b52b1def20_hero.webp)
<br><br>
<code>***ROS Actions ->***</code>
***Actions are similar to services but follow an asynchronus communication pattern.With actions,a node can send a goal to another node and continue its own processing withou waiting for a response.The node providing the action periodically sends updates on the progress of the goal and,eventually,a result when the goal is completed.Actions are commonly used for tasks that involve lengthy computations, motion,planning,or tasks with multiple steps.***
![Actions](https://cdn.prod.website-files.com/66a37d395dfadcdb65dcdf45/66e476db6258bbc8da66396e_hero.webp)
<br><br>
<code>***ROS Master ->***</code>
***The ROS Master provides naming and registration services to the nodes in the ROS system. It tracks publishers and subscribers to the topics. Communication is established between the nodes by the ROS Master.***
<br><br>
<code>***ROS Launch File ->***</code>
***The launch files are ROS tools that allows the creation of a list with all the functionalities that we want to start together with a single command.***
<br><br>
<code>***ROS Bags ->***</code>
***This is a set of tools for recording from and playing back to ROS topics.It is intended to be high performance and avoids deserialization and reserialization of the messages.***

---
---
![ROS computation graph](https://github.com/mhered/ROS-notes/raw/main/ROS-notes/assets/images/ROS_computation_graph.png)

---
---

