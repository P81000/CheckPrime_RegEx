class Main {
    public static boolean isPrime(int n) {
        String str = new String(new char[n]).replace('\0', '1'); // Create a string with 'n' '1' characters
        System.out.println(str);
        // Check for empty or single '1'
        if (str.isEmpty() || str.equals("1")) {
            return false;
        }

        // Check for repeated pattern (11+?)
        int patternLength = 2;
        while (patternLength <= n / 2) {
            if (n % patternLength == 0 && str.matches("^(1{" + patternLength + "})+$")) {
                return false;
            }
            patternLength++;
        }

        return true;
    }

    public static void main(String[] args) {
        int[] numbers = {2, 10, 11, 12, 13};

        for (int n : numbers) {
            System.out.println(n + " is prime: " + isPrime(n) + '\n');
        }
    }
}