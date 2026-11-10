/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b6530; name: FUN_013b6530
 */


undefined8 FUN_013b6530(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    uVar5 = *(ulong *)(param_1 + 0xa0);
    uVar4 = (uint)uVar5;
  }
  else {
    plVar1 = (long *)(**(code **)*puVar6)(puVar6);
    lVar2 = FUN_0132d9a0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        uVar5 = *(ulong *)(param_1 + 0xa0);
        uVar4 = (uint)uVar5;
        goto joined_r0x013b6748;
      }
    }
    uVar5 = *(ulong *)(param_1 + 0xa0);
    uVar4 = (uint)uVar5;
  }
joined_r0x013b6748:
  if (uVar4 < 5) {
                    /* WARNING: Could not recover jumptable at 0x013b65cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&DAT_0216c720 + *(int *)(&DAT_0216c720 + (uVar5 & 0xffffffff) * 4)))(1);
    return uVar3;
  }
  *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0xb0) + DAT_01d4bfc8;
  return 0;
}


