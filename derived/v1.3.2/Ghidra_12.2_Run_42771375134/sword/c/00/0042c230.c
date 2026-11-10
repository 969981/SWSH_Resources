/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c230; name: FUN_0042c230
 */


/* WARNING: Removing unreachable block (ram,0x0042c2c4) */
/* WARNING: Removing unreachable block (ram,0x0042c288) */
/* WARNING: Removing unreachable block (ram,0x0042c274) */

long FUN_0042c230(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = *(uint *)(*(long *)PTR_DAT_02712d20 + 0x38);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)param_1 / uVar2;
  }
  plVar4 = *(long **)(*(long *)(*(long *)PTR_DAT_02712d20 + 0x30) +
                     (ulong)((uint)param_1 - uVar3 * uVar2) * 8);
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    if (plVar4[1] == param_1) break;
    plVar4 = (long *)*plVar4;
  }
  if (*(uint *)(plVar4[2] + 0x40) < 3) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(plVar4[2] + 0x38) + 0x10);
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar5 + 0x3c;
  }
  return lVar1;
}


