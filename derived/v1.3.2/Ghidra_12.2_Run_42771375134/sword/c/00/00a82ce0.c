/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a82ce0; name: FUN_00a82ce0
 */


void FUN_00a82ce0(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_3 | 2) == 2) {
    uVar1 = (**(code **)(**(long **)(param_1 + (ulong)*(byte *)(param_1 + 0x14c0) * 0x460 + 0xc08) +
                        400))();
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x14c0) * 0x460 + 0xc08) +
                         0x4b8), lVar2 != 0)) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_007947b0(lVar2,param_2 & 1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (param_3 - 1 < 2) {
    uVar1 = (**(code **)(**(long **)(param_1 + (ulong)*(byte *)(param_1 + 0x14c0) * 0x460 + 0xc10) +
                        400))();
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x14c0) * 0x460 + 0xc10) +
                         0x4b8), lVar2 != 0)) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_007947b0(lVar2,param_2 & 1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (param_3 == 2) {
    uVar1 = (**(code **)(**(long **)(param_1 + (ulong)*(byte *)(param_1 + 0x14c0) * 0x460 + 0xc18) +
                        400))();
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x14c0) * 0x460 + 0xc18) +
                         0x4b8), lVar2 != 0)) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_007947b0(lVar2,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00a82e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


