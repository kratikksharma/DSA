/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function (num) {
    let count = 0;
    function step(n) {
        while (n > 0) {
            if (n % 2 == 0) {
                n = n / 2;
                count++;
            }
            else {
                n--;
                count++;
            }
        }
    }
    console.log(step(num));
    return count;
};