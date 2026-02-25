#include<stdio.h>
int main()
{
    int qualification,score,experience,age,certification,internship;
    char gender;
    printf("__________Shortlisting System__________\nQualification:\n1. Graduate\t2. Post Graduate\t3. PhD\nPlease Enter your Qualification: ");
    scanf("%d",&qualification);
    if(qualification == 1)
    {
        printf("Please Enter your Experience: ");
        scanf("%d",&experience);
        printf("Please Enter your Score: ");
        scanf("%d",&score);
        if (experience >= 6 && score >= 75)
        {
            printf("Please Enter Certification (1) / No Certification (0): ");
            scanf("%d",&certification);
            printf("Please Enter your Internship Experience (0 No Internship / 1 For Interinship Experience): ");
            scanf("%d",&internship);
            if (certification)
            {
                printf("Congratulations!🎉🎉🎉\nYou have been Shortlisted based on your\nQualification: Graduate\nExperience: %d\nScore: %d\nCertification: Yes\n",experience,score);
            }
            else if(certification == 0 && internship)
            {
                printf("Thank You For Applying\nYou have been Waitlisted!\n");
            }
            else
            {
                printf("Thank You For Applying\nYou have not been Shortlisted\nAll the Best!🙌🙌🙌\n");
            }   
        }
        else if(experience >= 3 && score >= 85)
        {
            printf("Please Enter your Gender (M/F): ");
            scanf(" %c",&gender);
            if(gender == 'F')
            {
                printf("Thank You For Applying\nYou have been Waitlisted with Preference\n");
            }
            else
            {
                printf("Thank You For Applying\nYou have been Waillisted\n");
            }
        }
        else
        {
            printf("Please Enter Certification (1) / No Certification (0): ");
            scanf("%d",&certification);
            if (certification && score >=  90)
            {
                printf("Thank You For Applying\nYou have been Waitlisted (In Special Case)\n");
            }
            else
            {
                printf("Thank You For Applying\nYou have not been Shortlisted\nAll the Best!🙌🙌🙌\n");
            }
        }
    }
    else if(qualification == 2)
    {
        printf("Please Enter your Experience: ");
        scanf("%d",&experience);
        printf("Please Enter your Score: ");
        scanf("%d",&score);
        if(experience >= 4 && score >= 70)
        {
            printf("Please Enter your Age: ");
            scanf("%d",&age);
            printf("Please Enter Certification (1) / No Certification (0): ");
            scanf("%d",&certification);
            printf("Please Enter your Internship Experience (0 No Internship / 1 For Interinship Experience): ");
            scanf("%d",&internship);
            if(certification && age <= 35)
            {
                printf("Congratulations!🎉🎉🎉\nYou have been Shortlisted (Priority) based on your\nQualification: Post Graduate\nExperience: %d\nScore: %d\nCertification: Yes\nAge: %d\n",experience,score,age);
            }
            else if(certification && age > 35)
            {
                printf("Congratulations!🎉🎉🎉\nYou have been Shortlisted based on your\nQualification: Graduate\nExperience: %d\nScore: %d\nCertification: Yes\nAge: %d\n",experience,score,age);
            }
            else if(certification == 0 && internship)
            {
                printf("Thank You For Applying\nYou have been Waillisted\n");
            }
            else
            {
                printf("Thank You For Applying\nYou have not been Shortlisted\nAll the Best!🙌🙌🙌\n");
            }
        }
        else if(experience >= 2 && score >= 80)
        {
            printf("Please Enter your Gender (M/F): ");
            scanf(" %c",&gender);
            if (gender == 'F')
            {
                printf("Congratulations!🎉🎉🎉\nYou have been Shortlisted under diversity Quota\n");
            }
            else
            {
                printf("Thank You For Applying\nYou have been Waillisted\n");
            }
        }
        else
        {
            printf("Thank You For Applying\nYou have not been Shortlisted\nAll the Best!🙌🙌🙌\n");
        }
    }
    else if(qualification == 3)
    {
        printf("Please Enter your Experience: ");
        scanf("%d",&experience);
        printf("Please Enter your Score: ");
        scanf("%d",&score);
        if(experience >= 2 && score >= 60)
        {
            printf("Please Enter your Age: ");
            scanf("%d",&age);
            printf("Please Enter Certification (1) / No Certification (0): ");
            scanf("%d",&certification);
            printf("Please Enter your Internship Experience (0 No Internship / 1 For Interinship Experience): ");
            scanf("%d",&internship);
            if(certification && age <= 45)
            {
                printf("Congratulations!🎉🎉🎉\nYou have been Directly Shortlisted based on your\nQualification: PhD\nExperience: %d\nScore: %d\nCertification: Yes\nAge: %d\n",experience,score,age);
            }
            else if(certification == 0 && internship)
            {
                printf("Congratulations!🎉🎉🎉\nYou have been Shortlisted based on Condition and your\nQualification: PhD\nExperience: %d\nScore: %d\nInternship: Yes\n",experience,score);
            }
            else
            {
                printf("Thank You For Applying\nYou have not been Shortlisted\nAll the Best!🙌🙌🙌\n");
            }
        }
        else
        {
            printf("Invalid Qualification Code!❌❌❌\nCandidate Not Eligible!❌❌❌");
        }
    }
    printf("\n__________Thank You__________\n");
    return 0;
}