# Requirements
## Introduction
The main aim of making this application is to provide a system to store the contact details of all the employees in an organization so that the information can be useful in retrieving the data of a particular employee during times of need as well as to have a record of all those people working in the organization. It will help keep track of the employees working that organization and any suspecious looking contact or person can be traced and reported to the police for enquiry. Thus, it can prove to be useful for regular checks as well as to monitor the employees.

## Research
While thinking of a project topic, **Contact Management System** caught my attention. The first thing that came to my mind was that we can use this to store details but of what use can this be for anyone by just storing contact details of a person? Actually watching the serial: **'CID'**, I remembered how they always use contact details and name details to search for a person working in an organization or if they are in the records of the police. They most of the time had to go to the place where that person worked. So what if I make an application that can be used by only the authorized person from any part of the world? That can save a lot of time searching about a person. Also, when someone stays somewhere or when they do some suspicious activity, people can share their information to the police so that they can arrest the person and know his real intensions without even letting other people know about it and any chaos can be avoided. And if something is really off, one can then inform the others. 

So, as a precautive and registering measure, this application can be used for dual purpose. It contains the name of the person, their phone number, email ID and the state in which they live. This application can be modified in the future with more details but as for a mini project I have kept this as simple as possible. But in order to prevent any wrong entries, I am also checking for the right email ID format, and also that the number provided is a 10-digit number or not. Number and email verification too can be provided in the future with the login details of the authorized person.

## Cost and Features

**Cost:** 

This system is basically meant to store details of an employee working in an organization. So, the cost here is the time required to keep the database updated, ensuring there is no wrong data entered as well as the application works systematically and smoothly without any problems.

**Features:**

The main features of this application are:
    - It stores all the main details of an employee which includes name, phone number, address and email id.
    - The manager can be able to add, delete, update, view and search for a contact from the database.
    - Entry of wrong data should be avoided.
    - The phone numbers and email id should be verified before being registered in this database.
    - Any suspecious looking contact or person can be traced and reported to the police for enquiry.

## Defining Our System

![System Design](https://github.com/Prerna983/260567_Mini_Project/blob/main/6_ImagesAndVideos/defining%20our%20prog%20image.JPG)

    - User can choose from the menu what would they like to do(add,delete,view,edit,search).
    - Accoding to the option they will be able to alter it.
    - After finishing they will be given a choice to continue back to menu or exit.
    - Any wrong key or exit choice will lead to termination of program.

## Working Of the Project

The program flow is based on the following flowchart:

![Flow Chart](https://github.com/Prerna983/260567_Mini_Project/blob/main/6_ImagesAndVideos/FlowChart.png)


This flow chart tells as how the system works.
    - There is the usage of do-while loop to make the program run until the user really wants to exit
    - Then there is a switch case loop to check what did the user input ( as in add, edit, delete, display, search or exit )
    - Next based on the conditions user has to enter the details and a name for edit, search and delete options
    - If the user wants to continue they can and if the don't, then they can choose to exit.



## SWOT ANALYSIS

![SWOT-Sample](https://github.com/Prerna983/260567_Mini_Project/blob/main/6_ImagesAndVideos/swots.JPG)

# 4W&#39;s and 1&#39;H

## Who:

The people of the organizations and every other people working there are involved.
Workers, helpers, managers, customers everyone related to that organization should be involved.

## What:

Information of a person is recorded, which includes name, phone number, address and email id.
With this, anyone entering or exiting an organization leaves a trace of his details so that if by any chance or during an emergency, their details can be shared and the issue can be taken care of.

## When:

It can be applied anywhere, anytime, and at any place. 
Since it is a contact management system, the details of the people are stored.
So, it should be applied in places where there are a lot of people to keep track of everyone working there and to avoid any kind of suspicious activity that may occur.

## Where:

It is currently being used in colonies, police stations, schools, and companies.
It can be applied to many other places like malls, super markets, and tourist places.

## How:

Managers can search by name or phone number of a person with registered number and find information of that person during an emergency. 
Registering can help create awareness in employees or people as they have their information and can be tracked anytime.
Updation of records can help keep track of at-present working employees.
Backend data holds the track of once-worked employees.
They can also see the lost of employees and their details as to who all are there.
It can also help keep track of total employees working.


# Detail requirements
## High Level Requirements:

 | ID  | Description | Status (Implemented/Future) |
 | --- | --- | --- |
 | HR01 | Add         | TBD-S1 |
 | HR02 | View        | TBD-S1 |
 | HR03 | Edit        | TBD-S1 |
 | HR04 | Search      | TBD-S1 |
 | HR05 | Delete      | TBD-S1 |
 | HR06 | Check Phone validity      | TBD-S1 |
 | HR07 | Check Email validity      | TBD-S1 |
 | HR08 | Check State validity      | TBD-S1 |
 

##  Low level Requirements:

|  ID    |                           Description                           | HLR ID | Status (Implemented/Future) |
| --- | --- | --- | --- |
| LR01   | Addition of new records during new recruitment                  |  HR01  | TBD-S1  |
| LR02.1 | Listing of all the records of present employee in organization |  HR02  | TBD-S1  |
| LR02.2 | It includes name, phone number, address, and email id          |  HR02  | TBD-S1  |
| LR03   | Editing the previously entered details and updating it         |  HR03  | TBD-S1  |
| LR04   | Searching contacts based on names and printing it            |  HR04  | TBD-S1  |
| LR05   | Deletion of selected contacts from the database based on the name given as input              |  HR05  | TBD-S1  |
| LR06   | Checks the validity of phone number if it is of 10 digits or not and if it is only digit input        |  HR06  | TBD-S1  |
| LR07.1   | Checking for validity of email ID if it is in right format        |  HR07  | TBD-S1  |
| LR07.2   | Checks for the use of `@` and if it has right domain name and `.` and three characters after that        |  HR07  | TBD-S1  |
| LR08   | Checks whether the state input given is right state or not. Also any spelling error may lead to non acceptance of state   |  HR08  | TBD-S1  |
