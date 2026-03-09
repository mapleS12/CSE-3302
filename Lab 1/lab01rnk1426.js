//Rohita Konjeti
//1002141462
//2-12-26

//1) Create an Input Array
const inputTable=[1,2,3,4,5,6,7,8,9,10];
console.log("#1 : ", inputTable);

//2) Generate Multiplication Tables
//Multiples of 5 between 1 and 51
const fiveMultiple = inputTable.map(num=>num*5 );
console.log("#2.1 : ", fiveMultiple)
//Multiples of 13 between 1 and 131
const thirteenMultiple = inputTable.map(num=>num*13 );
console.log("#2.2 : ", thirteenMultiple)
//Squares of numbers in inputTable 
const squareNumbers = inputTable.map(num=>num*num );
console.log("#2.3 : ", squareNumbers)


//3) Filter Odd Multiples of 5
const table = Array.from({length:20}, (_,i)=> i+1);
const multipleOfFive = table.map(num=>num*5 );
const oddMultiples = multipleOfFive.filter(num=>num%2===1);
console.log("#3 : ", oddMultiples);

//4) Sum of Even Multiples of 7
const numbersTo14 = Array.from({length:14},(_,i)=>i+1);
const multiOf7 = numbersTo14.map(num=> num*7);
const evenMultiples = multiOf7.filter(num=>num%2===0);
const sumEvenMulti = evenMultiples.reduce((sum, num)=>sum+num, 0);
console.log("#4 : ", sumEvenMulti);

//5) Curring for Cylinder Volume
const cylinderVol = function(R){
    return function(H){
        return 3.14159265 *R *R *H;
    };
};
const rad = cylinderVol(5);
console.log("#5 : ");
console.log ("Volume with radius 5 and height 10:", rad(10));
console.log ("Volume with radius 5 and height 17:", rad(17));
console.log ("Volume with radius 5 and height 11:", rad(11));

//6) HTML Table with Closures
const makeTag = function(beginTag, endTag) {
  return function(textcontent) {
    return beginTag + textcontent + endTag;
  };
};

const tableTag = makeTag ("<table>", "</table>");
const trTag = makeTag("<tr>", "</tr>");
const tdTag=makeTag("<td>", "</td>");
const row = trTag(tdTag(" item 1 ")+tdTag(" item 2 ")+tdTag(" item 3 "));
const finalTable = tableTag(row)
console.log("#6 : ", finalTable);

//7) Generic Multiples Finder
//generic function that takes in all the input
const findMulti= (multiples, conditions, max)=>{
    const num = Math.floor(max/multiples);
    const allMulti = Array.from({length: num}, (_,i)=>(i+1)*multiples);
    return allMulti.filter(conditions);
};
const odd = num=> num%2 !==0;
const even = num => num%2 ===0;

//recreation of question 3 
const genericMulti7 = findMulti(5, odd, 100);
console.log("#7.1 Modified question 3 : ", genericMulti7);

//recreation of question 4
const genericEvenMulti7 = findMulti(7, even, 100);
const genericSum = genericEvenMulti7.reduce((sum,num)=> sum+num,0);
console.log("#7.2 Modified question 4 : ", genericSum);

//different value test
console.log("Odd multiples of 2: ", findMulti(2,odd, 100));
console.log("Even multiples of 12: ", findMulti(12,even, 100));