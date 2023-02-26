const currentValue = 0;
let sessionValue = currentValue;

function add(sessionValue, input) {
  let enteredValue = Number(input.value);
  console.log(sessionValue,enteredValue);
  input.value = null;
  sessionValue += enteredValue;
  console.log(sessionValue,enteredValue);

  return sessionValue;
}
function subtract(sessionValue, input) {
  let enteredValue = Number(input.value);
  input.value = null;
  sessionValue -= enteredValue;
  console.log(sessionValue);
  return sessionValue;
}
function divide(sessionValue, input) {
  let enteredValue = Number(input.value);
  input.value = null;
  sessionValue /= enteredValue;
  console.log(sessionValue);
  return sessionValue;
}
function multiply(sessionValue, input) {
  let enteredValue = Number(input.value);
  input.value = null;
  sessionValue *= enteredValue;
  console.log(sessionValue);
  return sessionValue;
}
addBtn.addEventListener("click", () => {
  let x = add(sessionValue, userInput);
  outputResult(x, "");
});
subtractBtn.addEventListener("click", () => {
  let x = subtract(sessionValue, userInput);
  outputResult(x, "");
});
multiplyBtn.addEventListener("click", () => {
  let x = multiply(sessionValue, userInput);
  outputResult(x, "");
});
divideBtn.addEventListener("click", () => {
  let x = divide(sessionValue, userInput);
  outputResult(x, "");
});
