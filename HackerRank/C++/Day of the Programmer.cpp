string dayOfProgrammer(int year) {
    // Special case for the year 1918 (transition from Julian to Gregorian calendar)
    if (year == 1918) {
        return "26.09." + to_string(year);
    }
    
    // Leap year condition for Julian and Gregorian calendars
    if (year < 1918) { // Julian calendar
        if (year % 4 == 0) {
            return "12.09." + to_string(year); // Leap year
        } else {
            return "13.09." + to_string(year); // Non-leap year
        }
    } else { // Gregorian calendar
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            return "12.09." + to_string(year); // Leap year
        } else {
            return "13.09." + to_string(year); // Non-leap year
        }
    }
}