var reverse = function(x) {
    let result = 0;
    let sign = x < 0 ? -1 : 1;

    x = Math.abs(x);

    while (x > 0) {
        let digit = x % 10;
        x = Math.floor(x / 10);

        // Check overflow before: result = result * 10 + digit
        if (
            result > Math.floor((2147483647 - digit) / 10)
        ) {
            return 0;
        }

        result = result * 10 + digit;
    }

    return result * sign;
};