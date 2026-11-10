/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b5610; name: FUN_013b5610
 */


undefined8 FUN_013b5610(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar6)(puVar6);
    lVar2 = FUN_0132d9a0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        uVar5 = *(ulong *)(param_1 + 0x98);
        uVar4 = (uint)uVar5;
        goto joined_r0x013b5d30;
      }
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x98);
  uVar4 = (uint)uVar5;
joined_r0x013b5d30:
  if (uVar4 < 5) {
                    /* WARNING: Could not recover jumptable at 0x013b5690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&DAT_0216c6fc + *(int *)(&DAT_0216c6fc + (uVar5 & 0xffffffff) * 4)))(1);
    return uVar3;
  }
  *(ulong *)(param_1 + 0x98) = uVar5 + 1;
  return 0;
}


