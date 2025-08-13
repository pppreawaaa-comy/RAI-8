 #include <stdio.h>

// Function to get letter grade
char getLetterGrade(int score) {
     if (score >= 80)
        return 'A';
    else if (score >= 70 && score<80)
        return 'B';
    else if (score>= 60 && score<70)
        return 'C';
    else if (score >= 50 && score<60)
       return 'D';
    else
      return 'F';
}

// Function to get numeric grade
float getNumericGrade(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        default:  return 0.0;
    }
}

int main() {
    int calScore, phyScore, compScore;
    char calGrade, phyGrade, compGrade;
    float calNum, phyNum, compNum, gpa;

    // Input
    printf("Calculus score: ");
    scanf("%d", &calScore);
    printf("Physic score: ");
    scanf("%d", &phyScore);
    printf("Compro score: ");
    scanf("%d", &compScore);

    // Processing
    calGrade = getLetterGrade(calScore);
    phyGrade = getLetterGrade(phyScore);
    compGrade = getLetterGrade(compScore);

    calNum = getNumericGrade(calGrade);
    phyNum = getNumericGrade(phyGrade);
    compNum = getNumericGrade(compGrade);

    gpa = (calNum + phyNum + compNum) / 3.0;

    // Output table
    printf("\n%-10s %-7s %-7s %-7s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------------\n");
    printf("%-10s %-7d %-7c %-7.1f\n", "Cal", calScore, calGrade, calNum);
    printf("%-10s %-7d %-7c %-7.1f\n", "Physics", phyScore, phyGrade, phyNum);
    printf("%-10s %-7d %-7c %-7.1f\n", "Compro", compScore, compGrade, compNum);
    printf("GPA: %.1f\n", gpa);

    return 0;
}
