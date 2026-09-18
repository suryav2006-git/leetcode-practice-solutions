/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function(num) {
    if(num < 1) return false;
    let low = 1;
    let high = num;

    while(low <= high) {
        let mid = Math.floor( low + (high - low) / 2);
        let sqr = mid * mid;

        if(sqr == num) return true;
        else if (sqr < num) low = mid + 1;
        else high = mid - 1;
    }
    return false;
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna