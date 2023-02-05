// There was a test in your class and you passed it. Congratulations!
// But you're an ambitious person. You want to know if you're better than the average student in your class.

// You receive an array with your peers' test scores. Now calculate the average and compare your score!

// Return True if you're better, else False!

#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints)
{
    double classAverage = 0;

    for (int i = 0; i < classPoints.size(); i++)
    {
        classAverage += classPoints[i];
    }

    classAverage = classAverage / classPoints.size();

    return true ? yourPoints > classAverage : false;
}