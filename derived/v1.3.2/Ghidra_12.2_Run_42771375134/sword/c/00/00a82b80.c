/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a82b80; name: FUN_00a82b80
 */


void FUN_00a82b80(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar4 = (ulong)param_2;
  lVar2 = param_1 + uVar4 * 0x460;
  uVar1 = (**(code **)(**(long **)(lVar2 + 0xc08) + 400))();
  if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(*(long *)(lVar2 + 0xc08) + 0x4b8), lVar2 != 0)) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00794700(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  lVar2 = param_1 + uVar4 * 0x460;
  uVar1 = (**(code **)(**(long **)(lVar2 + 0xc10) + 400))();
  if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(*(long *)(lVar2 + 0xc10) + 0x4b8), lVar2 != 0)) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00794700(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  param_1 = param_1 + uVar4 * 0x460;
  uVar1 = (**(code **)(**(long **)(param_1 + 0xc18) + 400))();
  if (((uVar1 & 1) == 0) || (lVar2 = *(long *)(*(long *)(param_1 + 0xc18) + 0x4b8), lVar2 == 0)) {
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_00794700(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00a82cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


