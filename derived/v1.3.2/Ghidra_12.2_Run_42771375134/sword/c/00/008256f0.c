/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008256f0; name: FUN_008256f0
 */


undefined8 FUN_008256f0(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar1;
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar1;
    do {
      if (param_2 <= (int)plVar4[4]) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar1) && ((int)plVar3[4] <= param_2)) {
      uVar2 = FUN_00825740(plVar3 + 5);
      return uVar2;
    }
  }
  return 0;
}


