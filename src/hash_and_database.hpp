#ifndef HASH_AND_DATABASE_HPP
#define HASH_AND_DATABASE_HPP
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <string.h>
#include <fstream>
using namespace std;

void readFileD(string fileName);
void readFileT(string fileName);
void printOutHashT();
void printOutHashD();
void combinate(vector<string> vector, int perm[], int index, int n, int k);
void makeCombinate();
void makeIntersection(string s);
void intersectionWithClassHash(vector<int> v);
void intersection();
void displayResult();
void printOutHashCombinate();
vector<int> intersection(vector<int> v1,vector<int> v2);

#endif
