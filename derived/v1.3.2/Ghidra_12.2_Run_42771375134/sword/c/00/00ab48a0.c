/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab48a0; name: FUN_00ab48a0
 */


void FUN_00ab48a0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x8c) == 0xff) {
    lVar2 = 0;
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(param_1 + 0x8c) * 8 + 0x548);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  if (uVar1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00ab490c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_02158544 + *(int *)(&DAT_02158544 + (ulong)uVar1 * 4)))();
    return;
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ab4988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


