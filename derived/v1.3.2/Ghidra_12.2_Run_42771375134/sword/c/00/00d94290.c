/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d94290; name: FUN_00d94290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d94290(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = param_2;
  if ((DAT_02a58a28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_02a58a28);
    uVar3 = param_2 & 0xffffffff;
    if (iVar1 != 0) {
      DAT_02a58a50 = 0;
      DAT_02a58a58 = 0;
      __cxa_guard_release(&DAT_02a58a28);
      uVar3 = param_2 & 0xffffffff;
    }
  }
  if ((DAT_02a58a30 & 1) == 0) {
    uVar3 = uVar3 & 0xffffffff;
    iVar1 = __cxa_guard_acquire(&DAT_02a58a30);
    if (iVar1 != 0) {
      uRam0000000002a58a68 = _UNK_01d4b6c8;
      _DAT_02a58a60 = _DAT_01d4b6c0;
      __cxa_guard_release(&DAT_02a58a30);
      plVar4 = (long *)(param_1 + uVar3 * 8 + 0x50);
      plVar2 = (long *)*plVar4;
      goto joined_r0x00d943b8;
    }
  }
  plVar4 = (long *)(param_1 + (uVar3 & 0xffffffff) * 8 + 0x50);
  plVar2 = (long *)*plVar4;
joined_r0x00d943b8:
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x30))(), (uVar3 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d9431c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar4 + 0x50))
            ((long *)*plVar4,0,&DAT_02a58a50,&DAT_02a58a60,2,param_3 & 1,1);
  return;
}


