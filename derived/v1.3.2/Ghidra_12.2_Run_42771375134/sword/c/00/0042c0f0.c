/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c0f0; name: FUN_0042c0f0
 */


undefined8 FUN_0042c0f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(*(long *)PTR_DAT_02712d20 + 0x38);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_1 / uVar1;
  }
  plVar3 = *(long **)(*(long *)(*(long *)PTR_DAT_02712d20 + 0x30) +
                     (ulong)((uint)param_1 - uVar2 * uVar1) * 8);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  do {
    if (plVar3[1] == param_1) {
      if (*(uint *)(plVar3[2] + 0x40) < 3) {
        return 0;
      }
      return *(undefined8 *)(*(long *)(plVar3[2] + 0x38) + 0x10);
    }
    plVar3 = (long *)*plVar3;
  } while (plVar3 != (long *)0x0);
  return 0;
}


