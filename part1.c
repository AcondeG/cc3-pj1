#include <stdio.h> // for stderr
#include <stdlib.h> // for exit()
#include "types.h"
#include "utils.h"


// forward declarations
void print_rtype(char *, Instruction);
void print_itype_except_load(char *, Instruction, int);
void print_load(char *, Instruction);
void print_store(char *, Instruction);
void print_branch(char *, Instruction);
void write_rtype(Instruction);
void write_itype_except_load(Instruction);
void write_load(Instruction);
void write_store(Instruction);
void write_branch(Instruction);
void write_auipc(Instruction);
void write_lui(Instruction);
void write_jalr(Instruction);
void write_jal(Instruction);
void write_ecall(Instruction);


void decode_instruction(Instruction instruction) {
  /* YOUR CODE HERE: COMPLETE THE SWITCH STATEMENTS */
  //Switch por el opcode
  switch(instruction.opcode) { 
    /* YOUR CODE HERE */
    case 0x33:
      write_rtype(instruction);
    break;
    default: // undefined opcode
      handle_invalid_instruction(instruction);
      break;
  }
}


void write_rtype(Instruction instruction) {
  switch(instruction.rtype.funct7) { // What do we switch on?
    /* YOUR CODE HERE */
    case 0x00:
      switch (instruction.rtype.funct3) {
      case 0x00:
        print_rtype("add", instruction);  
      break;
      case 0x01:
        print_rtype("sll", instruction);
      break;
      case 0x2:
        print_rtype("slt", instruction);
      break;
      case 0x4:
        print_rtype("xor", instruction);
      break;
      case 0x5:
        print_rtype("slr", instruction);
      break;
      case 0x6:
        print_rtype("or", instruction);
      break;
      case 0x7:
        print_rtype("and", instruction);
      break;
      }
    break;
    case 0x01:
      switch (instruction.rtype.funct3) {
      case 0x00:
        print_rtype("mul", instruction);  
      break;
      case 0x1:
        print_rtype("mulh", instruction);  
      break;
      case 0x4:
        print_rtype("div", instruction);  
      break;
      case 0x6:
        print_rtype("rem", instruction);  
      break;
      }
    break;
    case 0x20:
      switch (instruction.rtype.funct3) {
      case 0x00:
        print_rtype("sub", instruction);  
      break;
      case 0x5:
        print_rtype("sra", instruction);  
      break;
      }
    break;
    default:
      handle_invalid_instruction(instruction);
      break;
  }
}


void write_itype_except_load(Instruction instruction) {
  switch(0) { // What do we switch on?
    /* YOUR CODE HERE */
    default:
      handle_invalid_instruction(instruction);
      break;
  }
}


void write_load(Instruction instruction) {
  switch(0) { // What do we switch on?
    /* YOUR CODE HERE */
    default:
      handle_invalid_instruction(instruction);
      break;
  }
}


void write_store(Instruction instruction) {
  switch(0) { // What do we switch on?
    /* YOUR CODE HERE */
    default:
      handle_invalid_instruction(instruction);
      break;
  }
}


void write_branch(Instruction instruction) {
  switch(0) { // What do we switch on?
    /* YOUR CODE HERE */
    default:
      handle_invalid_instruction(instruction);
      break;
  }
}


/* For the writes, probably a good idea to take a look at utils.h */

void write_auipc(Instruction instruction) {
  /* YOUR CODE HERE */
}


void write_lui(Instruction instruction) {
  /* YOUR CODE HERE */
}


void write_jalr(Instruction instruction) {
  /* YOUR CODE HERE */
}


void write_jal(Instruction instruction) {
  /* YOUR CODE HERE */
}


void write_ecall(Instruction instruction) {
  /* YOUR CODE HERE */
}


void print_rtype(char *name, Instruction instruction) {
  /* YOUR CODE HERE */
  printf(RTYPE_FORMAT, name, instruction.rtype.rd, instruction.rtype.rs1, instruction.rtype.rs2);
}


void print_itype_except_load(char *name, Instruction instruction, int imm) {
  /* YOUR CODE HERE */
}


void print_load(char *name, Instruction instruction) {
  /* YOUR CODE HERE */
}


void print_store(char *name, Instruction instruction) {
  /* YOUR CODE HERE */
}


void print_branch(char *name, Instruction instruction) {
  /* YOUR CODE HERE */
}
