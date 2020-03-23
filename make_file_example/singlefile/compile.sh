 #########################################################################
# File Name: compile.sh
# Author: Shen Bo
# mail: nichol_shen@yahoo.com
# Created Time: Mon Mar 23 10:58:01 2020
 ########################################################################/

 g++ -E test.cpp -o test.i;
 g++ -S test.i -o test.s;
 g++ -c test.s -o test.o;
 g++ test.o -o test
