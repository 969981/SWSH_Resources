/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004988f0; name: FUN_004988f0
 */


void FUN_004988f0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    for (plVar3 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8)
        ; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3[1] == param_2) {
        FUN_00498930(param_1,plVar3[2]);
        return;
      }
    }
  }
  return;
}


