/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01398910; name: FUN_01398910
 */


void FUN_01398910(long param_1,int param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_00794700();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00794700();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_00794700();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00794700();
  }
  plVar1 = (long *)(param_1 + (long)param_2 * 8 + 0x80);
  if (*plVar1 != 0) {
    FUN_00794740();
    FUN_007946a0(*plVar1,1);
  }
  if (param_2 - 1U < 2) {
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_00794740();
      FUN_007946a0(*(undefined8 *)(param_1 + 0xb0),1);
      return;
    }
  }
  else if (((param_2 == 0) || (param_2 == 3)) && (*(long *)(param_1 + 0xb0) != 0)) {
    FUN_00794740();
    return;
  }
  return;
}


