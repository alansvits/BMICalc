//
//  main.c
//  BMICalc
//
//  Created by Stas Shetko on 15/02/18.
//  Copyright © 2018 Stas Shetko. All rights reserved.
//

#include <stdio.h>

typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person p) {
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[]) {
    
    Person person;
    person.weightInKilos = 96;
    person.heightInMeters = 1.8;
    
    printf("person weighs %d kilo \n\n", person.weightInKilos);
    
    printf("person height %.2f meters tall \n\n", person.heightInMeters);
    
    float bmi = bodyMassIndex(person);
    printf("Person has a BMI of %.2f \n\n", bmi);
    
    return 0;
}
