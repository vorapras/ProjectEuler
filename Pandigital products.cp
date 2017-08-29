/*
 * File:   main.cpp
 * Author: cpt_giraffe
 *
 *
 
 * We shall say that an n-digit number is pandigital if it makes use of all the
 * digits 1 to n exactly once; for example,
 * the 5-digit number, 15234, is 1 through 5 pandigital.
 
 * The product 7254 is unusual, as the identity, 39 × 186 = 7254,
 * containing multiplicand, multiplier, and product is 1 through 9 pandigital.
 
 * Find the sum of all products whose multiplicand/multiplier/product
 * identity can be written as a 1 through 9 pandigital.
 
 * HINT: Some products can be obtained in more than one way
 * so be sure to only include it once in your sum.
 
 * Created on November 27, 2013, 9:41 PM
 */

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
#include <sstream>

using namespace std;

// store the products, a set is ideal because of the HINT:
set<unsigned> products;

/**
 * Insert to products if string arguments is a proper product
 */
void insert_if_product(string factor1, string factor2, string product) {
    stringstream values(factor1 + " " + factor2 + " " + product);
    
    // is this a valid product.  (Most cases says no)
    unsigned f1, f2, p;
    values >> f1 >> f2 >> p;
    if (f1 * f2 == p) {
        products.insert(p);
    }
    
}

/**
 * magnitudes needs to add up: I'm checking
 * 9 digits total
 * m1 * m3 = m5
 * m1 * m4 = m4
 * m2 * m3 = m4
 * Is this all?
 *
 * @param check this permutation
 */
void check_products(string perm) {
    // all permutations are coming from perm, so no need to perm stuff here.
    string factor1 = perm.substr(0, 1);
    string factor2 = perm.substr(1, 3);
    string product = perm.substr(4, 5);
    
    insert_if_product(factor1, factor2, product);
    
    factor1 = perm.substr(0, 1);
    factor2 = perm.substr(1, 4);
    product = perm.substr(5, 4);
    
    insert_if_product(factor1, factor2, product);
    
    factor1 = perm.substr(0, 2);
    factor2 = perm.substr(2, 3);
    product = perm.substr(5, 4);
    
    insert_if_product(factor1, factor2, product);
    
}

int main(int argc, char** argv) {
    string s = "123456789";
    do {
        check_products(s);
        
    } while (next_permutation(s.begin(), s.end()));
    
    // Test case
    if (products.find(7254) != products.end()) {
        cout << "found 7254" << endl;
    } else {
        cout << "did not find 7254" << endl;
    }
    unsigned sum = 0;
    
    sum = accumulate(products.begin(), products.end(), 0);
    cout << "Sum:" << sum << endl;
    return 0;
}
