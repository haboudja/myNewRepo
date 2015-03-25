void calculator(){
  int operand1, operand2;
  printf(" Please enter the 2 opreands : \n");
  scanf("%d %d ",&operand1, &operand2);

  add(operand1, operand2);
  substract(operand1, operand2);
  multiply(operand1, operand2);
  divide(operand1, operand2);


}
