/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd4900; name: FUN_00dd4900
 */


void FUN_00dd4900(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined4 *)FUN_00dd4980(param_2 + 400);
  *puVar1 = (int)param_1;
  if (*(long *)(param_2 + 0x108) != 0) {
    plVar2 = *(long **)(param_2 + 0x100);
    lVar3 = *(long *)(param_2 + 0x108) << 3;
    do {
      if (*(int *)(*plVar2 + 0x184) == 3) {
        FUN_00dcfae0(param_1,*plVar2,param_3);
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}


