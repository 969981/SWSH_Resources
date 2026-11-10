/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c9150; name: FUN_012c9150
 */


long * FUN_012c9150(uint param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 <= param_2) {
    uVar5 = (ulong)(int)param_1;
    do {
      plVar1 = (long *)FUN_012c8f90(uVar5 & 0xffffffff);
      if (plVar1 != (long *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x50))();
        lVar3 = (**(code **)(*plVar1 + 0x40))(plVar1);
        lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1);
        if (lVar2 == lVar4 + lVar3) {
          return plVar1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= (ulong)(long)(int)param_2);
  }
  return (long *)0x0;
}


