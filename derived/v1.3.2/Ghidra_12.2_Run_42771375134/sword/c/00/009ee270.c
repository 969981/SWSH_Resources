/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ee270; name: FUN_009ee270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_009ee270(long param_1,uint param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long local_28;
  
  if (**(int **)(param_1 + 0x60) == 1) {
    bVar1 = false;
  }
  else {
    if (*(long *)(*(int **)(param_1 + 0x60) + 0x1a) == 0) {
      local_28 = 0;
      plVar3 = _DAT_00000098;
    }
    else {
      FUN_009efe60(&local_28);
      plVar3 = *(long **)(local_28 + 0x98);
    }
    if (plVar3 != (long *)0x0) {
      plVar2 = (long *)*plVar3;
      if (plVar2 != (long *)plVar3[1]) {
        do {
          if ((*plVar2 != 0) &&
             (*plVar2 ==
              *(long *)(*(long *)(param_1 + 0x60) + ((ulong)param_2 & 0xff) * 0x18 + 0x30))) {
            bVar1 = (int)plVar2[1] != 0;
            if (local_28 == 0) {
              return bVar1;
            }
            goto LAB_009ee310;
          }
          plVar2 = plVar2 + 5;
        } while ((long *)plVar3[1] != plVar2);
      }
    }
    bVar1 = false;
    if (local_28 != 0) {
LAB_009ee310:
      (**(code **)(*(long *)(local_28 + 0x50) + 0x18))();
    }
  }
  return bVar1;
}


