/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a79740; name: FUN_00a79740
 */


undefined8 FUN_00a79740(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x16fc) == 0xff) {
    lVar3 = 0;
    uVar1 = *(uint *)(param_1 + 0x16f0);
  }
  else {
    lVar3 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x16fc) * 8 + 0x548);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar1 = *(uint *)(param_1 + 0x16f0);
  }
  if (uVar1 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00a797b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_02156cf0 + *(int *)(&DAT_02156cf0 + (ulong)uVar1 * 4)))();
    return uVar2;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return 0;
}


