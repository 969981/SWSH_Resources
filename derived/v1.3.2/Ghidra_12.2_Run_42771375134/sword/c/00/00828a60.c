/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00828a60; name: FUN_00828a60
 */


long FUN_00828a60(long param_1,int param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar1;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar1;
    do {
      if (param_2 <= (int)plVar3[4]) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < param_2];
    } while (plVar3 != (long *)0x0);
    if (((plVar2 != plVar1) && ((int)plVar2[4] <= param_2)) &&
       ((*(byte *)((long)plVar2 + 0x32) & 1) == 0)) {
      param_3 = plVar2[5];
    }
  }
  return param_3;
}


