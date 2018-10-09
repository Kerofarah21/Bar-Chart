// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 3 - problem 1
// purpose: Draw a bar chart in a SVG file
// Author:  Kerolos Farah Adeeb
// Date:    6 October 2018
// Version: 1.0


#include <iostream>
#include <fstream>
using namespace std;

void drawBarChart (ofstream &datafile , int h1 , int h2 , int h3 , int h4); // function to draw the bar Chart

int main()
{
    int h1 , h2 , h3 , h4;
    cout << "Enter the heights of the bar chart" << endl;
    cout << "h1 : ";
    cin >> h1; // first height
    while (h1>400 || h1<=0)
    {
        cout << "Enter a height from 1 to 400 : ";
        cin >> h1;
    }
    cout << "h2 : ";
    cin >> h2; // second height
    while (h2>400 || h2<=0)
    {
        cout << "Enter a height from 1 to 400 : ";
        cin >> h2;
    }
    cout << "h3 : ";
    cin >> h3; // third height
    while (h3>400 || h3<=0)
    {
        cout << "Enter a height from 1 to 400 : ";
        cin >> h3;
    }
    cout << "h4 : ";
    cin >> h4; // fourth height
    while (h4>400 || h4<=0)
    {
        cout << "Enter a height from 1 to 400 : ";
        cin >> h4;
    }
    ofstream barChart;
    drawBarChart(barChart , h1 , h2 , h3 , h4); // call the function
    cout << "Bar Chart has been drawn" << endl;
    return 0;
}

void drawBarChart (ofstream &datafile , int h1 , int h2 , int h3 , int h4)
{
    datafile.open("Kerolos_Farah.svg"); // create a SVG file
    if (datafile.fail()) // Testing for open errors
    {
        cout << "File open error" << endl;
        datafile.close();
    }
    // write in the file
    datafile << "<?xml version=\"1.0\" standalone=\"no\"?>\n<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\"\n\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">";
    datafile << "<svg width=\"500\" height=\"500\"\nxmlns=\"http://www.w3.org/2000/svg\">";
    datafile << "<rect x=\"30\" y=\"" << 400-h1 << "\" width=\"50\" height=\"" << h1 << "\"\nstyle=\"fill:blue;\"/>";
    datafile << "<rect x=\"130\" y=\"" << 400-h2 << "\" width=\"50\" height=\"" << h2 << "\"\nstyle=\"fill:red;\"/>";
    datafile << "<rect x=\"230\" y=\"" << 400-h3 << "\" width=\"50\" height=\"" << h3 << "\"\nstyle=\"fill:yellow;\"/>";
    datafile << "<rect x=\"330\" y=\"" << 400-h4 << "\" width=\"50\" height=\"" << h4 << "\"\nstyle=\"fill:purple;\"/>";
    datafile << "<line x1=\"0\" y1=\"400\" x2=\"400\" y2=\"400\"\nstyle=\"stroke:black;stroke-width:5\"/>";
    datafile << "<line x1=\"0\" y1=\"400\" x2=\"0\" y2=\"0\"\nstyle=\"stroke:black;stroke-width:5\"/>\n</svg>";
    datafile.close(); // close the file
}
