/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e40a60; name: FUN_00e40a60
 */


void FUN_00e40a60(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  uVar1 = FUN_015114c0(lVar2,0xa904e8fef64719d9);
  if (uVar1 < 0x41) {
    uVar1 = 0x40;
  }
  *(uint *)(param_1 + 0x4d8) = uVar1;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e40b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


