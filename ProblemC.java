
/**
 * @file ProblemThree.java
 * @author amir aghazadeh (cssu.ama@gmail.com)
 * @brief Ramz Problem
 * @version 0.1.0
 * @date 2022-08-05
 * @id 3code2
 *
 * @copyright Copyright (c) 2022
 *
 */

import java.util.Scanner;

public class ProblemThree {
  public static void main(String[] args) {
    var scanner = new Scanner(System.in);

    int inputValue = scanner.nextInt();
    int totalSum = 0;
    String password = scanner.next();

    for (int fiIndex = 0; fiIndex < inputValue; fiIndex++) {
      char digit = password.charAt(fiIndex);
      String spinner = scanner.next();

      for (int seIndex = 0; seIndex < 9; seIndex++) {
        if (digit == spinner.charAt(seIndex)) {
          if (seIndex < 5) {
            totalSum += seIndex;
          } else {
            totalSum += (9 - seIndex);
          }
        }
      }
    }

    System.out.println(totalSum);

    scanner.close();
  }
}