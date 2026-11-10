/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ac2a0; name: FUN_013ac2a0
 */


undefined8 FUN_013ac2a0(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_0132d9a0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        uVar1 = *(uint *)(param_1 + 0x80);
        goto joined_r0x013ac574;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x80);
joined_r0x013ac574:
  if (uVar1 < 6) {
                    /* WARNING: Could not recover jumptable at 0x013ac324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&DAT_0216c65c + *(int *)(&DAT_0216c65c + (ulong)uVar1 * 4)))();
    return uVar4;
  }
  return 0;
}


