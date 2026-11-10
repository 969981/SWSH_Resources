/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d941d0; name: FUN_00d941d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d941d0(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((DAT_02a58a20 & 1) == 0) {
    param_2 = param_2 & 0xffffffff;
    iVar1 = __cxa_guard_acquire(&DAT_02a58a20);
    if (iVar1 != 0) {
      uRam0000000002a58a48 = _UNK_01d4b6c8;
      _DAT_02a58a40 = _DAT_01d4b6c0;
      __cxa_guard_release(&DAT_02a58a20);
      plVar4 = (long *)(param_1 + param_2 * 8 + 0x50);
      plVar2 = (long *)*plVar4;
      goto joined_r0x00d9427c;
    }
  }
  plVar4 = (long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  plVar2 = (long *)*plVar4;
joined_r0x00d9427c:
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x30))(), (uVar3 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d9422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar4 + 0x70))((long *)*plVar4,&DAT_02a58a40);
  return;
}


