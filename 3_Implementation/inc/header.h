/** 
* @file header.h
* Contact management system to store and update details 
*
*/
#ifndef __HEADER_H__
#define __HEADER_H__

#include<stdio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
#include<dos.h>

/**
 * @brief Structure to store name, address, email and phone number of a person
 * 
 */

struct contact
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
 * @return updated file with a new entry 
 */
int add();

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
 * @return updated file 
 */
int edit();

/**
 * @brief function to search for entries in the existing database
 * 
 * @return data of the searched contact 
 */
int search();


/**
 * @brief function to view list of entries in the existing database
 * 
 * @return list of contacts present in the database  
 */
int view();

/**
 * @brief function to delete an entry from the existing database
 * 
 * @return updated file with a deleted entry 
 */
int del();

/**
 * @brief function to input values
 * 
 */
void inputDet();

#endif  /* #define __HEADER_H__ */