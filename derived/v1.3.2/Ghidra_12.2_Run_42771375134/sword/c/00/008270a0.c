/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008270a0; name: FUN_008270a0
 */


undefined4 FUN_008270a0(undefined4 param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar3 = (long *)*plVar1;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar1;
    do {
      if (param_3 <= (int)plVar3[4]) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < param_3];
    } while (plVar3 != (long *)0x0);
    if (((plVar2 != plVar1) && ((int)plVar2[4] <= param_3)) &&
       ((*(byte *)((long)plVar2 + 0x32) & 1) == 0)) {
      param_1 = (undefined4)plVar2[5];
    }
  }
  return param_1;
}


