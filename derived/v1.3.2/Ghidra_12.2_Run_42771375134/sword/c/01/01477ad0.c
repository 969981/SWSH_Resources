/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01477ad0; name: FUN_01477ad0
 */


void FUN_01477ad0(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 == (undefined8 *)0x0)) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x90) + 0x730);
  }
  else {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_0146e370();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x90) + 0x730);
        goto joined_r0x01477ea4;
      }
    }
    uVar1 = *(uint *)(*(long *)(param_1 + 0x90) + 0x730);
  }
joined_r0x01477ea4:
  if (uVar1 < 7) {
                    /* WARNING: Could not recover jumptable at 0x01477b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0216edfc + *(int *)(&DAT_0216edfc + (ulong)uVar1 * 4)))();
    return;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x730) = 0;
  return;
}


