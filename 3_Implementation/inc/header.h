/**
 * @file header.h
 * @author Prerna Agrawal
 * @brief Header file for Contact Management System
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __HEADER_H__
#define __HEADER_H__

#include<stdio.h>
#include<string.h>
//#include<process.h>
#include<stdlib.h>
#include<ctype.h>
//#include<dos.h>

/**
 * @brief Structure to store name, address, email and phone number of a person
 * 
 */

typedef struct contact
{
    long long ph;
    char name[20],add[20],email[20];
} list;


/**
 * @brief two file pointers to store values to and retrieve values from the actual file
 * 
 */
FILE *fp, *ft;

/**
 * @brief function to display the main menu
 * 
 * @return displayed menu
 */
void main_menu();

/**
 * @brief function to add new entries to the existing database 
 * 
 * @param ph 
 * @param name 
 * @param add 
 * @param email 
 * @return int 
 */
int add(long long int ph, char name[], char add[], char email[]);

/**
 * @brief function to check for the validity of the city
 * 
 * @param ch 
 * @return int 
 */
int validity(char ch[]);

/**
 * @brief function to check for validity of email id
 * 
 * @param test 
 * @return int 
 */
int isValid(char test[]);

/**
 * @brief function to check for the validity of phone
 * 
 * @param n 
 * @return int 
 */
int checkPh(long long n);

/**
 * @brief function to edit existing database
 * 
 * @param ph 
 * @param name 
 * @param add 
 * @param email 
 * @param edit_name 
 * @return int 
 */
int edit(long long int ph, char name[20], char add[20], char email[20], char edit_name[20]);

/**
 * @brief function to search for entries in the existing database
 * 
 * @param edit_name 
 * @return int 
 */
int search(char edit_name[20]);


/**
 * @brief function to view list of entries in the existing database
 * 
 * @return list of contacts present in the database  
 */
int view();

/**
 * @brief function to delete an entry from the existing database
 * 
 * @param edit_name 
 * @return int 
 */
int del(char edit_name[20]);

/**
 * @brief function to input values for add and edit functions
 * 
 */
void inputDet();

#endif  /* #define __HEADER_H__ */
