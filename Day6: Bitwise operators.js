'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}
function getMaxLessThanK(n,k){
    let max = 0;
    let current =-1;

    for(let i=0;i<n;i++){
        for(let j=i+1;j<=n;j++){

            current = i&j;
            if(current < k & current>max){
                max = current;
            }
        }



    }
    return max;
}