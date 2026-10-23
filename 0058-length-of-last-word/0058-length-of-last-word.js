/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var arr = s.trim().split(' ');
    var last = arr[arr.length - 1];
    return last.length;
};