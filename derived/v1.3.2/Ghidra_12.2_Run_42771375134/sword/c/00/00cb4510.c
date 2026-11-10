/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb4510; name: FUN_00cb4510
 */


void FUN_00cb4510(long param_1)

{
  long *plVar1;
  long lVar2;
  long local_28;
  
  if ((*(long *)(param_1 + 0xc0) != 0) && (*(int *)(*(long *)(param_1 + 0xc0) + 0x54) != 0)) {
    lVar2 = *(long *)(param_1 + 0xc0);
    if (lVar2 == 0) {
      local_28 = 0;
      FUN_00ca9590(param_1,0,&local_28,8);
      lVar2 = *(long *)(param_1 + 200);
      goto joined_r0x00cb463c;
    }
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    local_28 = lVar2;
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_00ca9590(param_1,0,&local_28,8);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 200);
joined_r0x00cb463c:
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x54) == 0)) {
    return;
  }
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 == 0) {
    local_28 = 0;
    FUN_00ca9590(param_1,0,&local_28,8);
    return;
  }
  plVar1 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  local_28 = lVar2;
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_00ca9590(param_1,0,&local_28,8);
  (**(code **)(*plVar1 + 0x18))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00cb461c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


