// https://www.hackerrank.com/challenges/a-very-big-sum/problem
// https://github.com/jbreija
// By Jason Breijak

var sum = 0;
function processData(_input) {
    var lines = _input.split("\n");
    var n = parseInt(lines[0]);
    var arr = lines[1].split(" ");
    for (var i = 0; i < n; i++) {
        sum += parseInt(arr[i]);
    }
    console.log(sum);
}
 
process.stdin.resume();

input = "";
process.stdin.on("data", function (_input) {
    input += _input;
});


process.on('SIGINT', function(){
    processData(input);
});