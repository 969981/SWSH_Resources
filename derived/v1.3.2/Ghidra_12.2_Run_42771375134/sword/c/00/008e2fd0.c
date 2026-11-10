/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2fd0; name: FUN_008e2fd0
 */


int FUN_008e2fd0(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    return 0xc - *(char *)(param_1 + 0x2b4);
  case 2:
    return 0xc - *(char *)(param_1 + 0x2b5);
  case 3:
    return 0xc - *(char *)(param_1 + 0x2b6);
  case 4:
    return 0xc - *(char *)(param_1 + 0x2b7);
  case 5:
    return 0xc - *(char *)(param_1 + 0x2b8);
  case 6:
    return 0xc - *(char *)(param_1 + 0x2b9);
  case 7:
    return 0xc - *(char *)(param_1 + 0x2ba);
  default:
    return 0xc;
  }
}


