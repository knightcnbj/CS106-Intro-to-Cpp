/**
 * File: ssmodel.cpp
 * ------------------
 * This file will contain the implementation of the SSModel class (once you
 * have finished it!
 */
 
#include "ssmodel.h"
#include "exp.h"
using namespace std;

SSModel::SSModel(int nRows, int nCols, SSView *view) {
    (void) nRows;
    (void) nCols;
    (void) view;
    // TODO delete this line and the three lines above and implement constructor
}

SSModel::~SSModel() {
    // TODO implement destructor
}

bool SSModel::nameIsValid(const string& cellname) const {
    (void) cellname;
    // TODO delete this line and the one above and implement this method
    return false; // so it compiles
}

void SSModel::setCellFromScanner(const string& cellname, TokenScanner& scanner) {
    (void) cellname;
    (void) scanner;
    // TODO delete this line and the two lines above and implement this method
}

void SSModel::printCellInformation(const string& cellname) const {
    (void) cellname;
    // TODO delete this line and the one above and implement this method
}

void SSModel::writeToStream(ostream& outfile) const {
    (void) outfile;
    // TODO delete this line and the one above and implement this method
}

void SSModel::readFromStream(istream& infile) {
    (void) infile;
    // TODO delete this line and the one above and implement this method
}
