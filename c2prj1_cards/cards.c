#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"

void assert_card_valid(card_t c) {
  assert((c.value <= VALUE_ACE)&&(c.value >=2));
  assert((c.suit <= CLUBS)&&(c.suit >=SPADES));
}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case STRAIGHT_FLUSH: printf("STRAIGHT FLUSH\n"); break;
  case FOUR_OF_A_KIND: printf("FOUR OF A KIND\n"); break;
  case FULL_HOUSE: printf("FULL HOUSE\n"); break;
  case FLUSH: printf("FLUSH\n"); break;
  case STRAIGHT: printf("STRAIGHT\n"); break;
  case THREE_OF_A_KIND: printf("THREE OF A KIND\n"); break;
  case TWO_PAIR: printf("TWO PAIR\n"); break;
  case PAIR: printf("PAIR\n"); break;
  case NOTHING: printf("NOTHING\n"); break;
  default: printf("Invalid Input\n"); break;
  }
  return "";
}

char value_letter(card_t c) {
  char x ='0';
  if(c.value < 10) x+= c.value;
  else if(c.value == 11) x = 'J';
  else if(c.value == 12) x = 'Q';
  else if(c.value == 13) x = 'K';
  else if(c.value == 14) x = 'A';
  return x;
}

char suit_letter(card_t c) {
  char x = 'c';
  if(c.suit == SPADES){x = 's';}
  else if(c.suit == HEARTS){x = 'h';}
  else if(c.suit == DIAMONDS){x = 'd';}
  return x;  
}

void print_card(card_t c) {
  char s,v;
  s = suit_letter(c);
  v = value_letter(c);
  printf("%c%c",v,s);
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  if(value_let == '0'){
    temp.value = 10;
  }
  if(value_let == 'A'){
    temp.value = 14;
  }
  if(value_let == 'J'){
    temp.value = 11;
  }
  if(value_let == 'Q'){
    temp.value = 12;
  }
  if(value_let == 'K'){
    temp.value  = 13;
  }
  if(value_let >= 50 && value_let <=57){
      temp.value = value_let-48;
  }
  switch(suit_let){
  case 's':
    temp.suit = SPADES;
    break;
  case 'h':
    temp.suit = HEARTS;
    break;
  case 'd':
    temp.suit = DIAMONDS;
    break;
  case 'c':
    temp.suit = CLUBS;
    break;
}
  // assert(temp.value>=2 && temp.value<=14);
  assert(temp.suit>=0 && temp.suit<4);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  assert(c<=52 && c>=0);
  if(c>=0 && c <=12){
    temp.value = c + 2;
    temp.suit = SPADES;
  }
  else if (c>=13 && c<= 25){
    temp.value = c+2-13;
    temp.suit = HEARTS;
  }
  else if (c>=26 && c<=38){
    temp.value = c+2-26;
    temp.suit = DIAMONDS;
  }
  else if (c>= 39 && c<=51){
    temp.value = c+2-39;
    temp.suit = CLUBS;
  }
  return temp;
}
