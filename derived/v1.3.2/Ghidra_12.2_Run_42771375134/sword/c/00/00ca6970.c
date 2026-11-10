/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca6970; name: FUN_00ca6970
 */


void FUN_00ca6970(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long local_38;
  
  if ((*(long *)(param_1 + 0x78) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + 0x54) != 0)) {
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar2 == 0) {
      local_38 = 0;
      FUN_00ca9590(param_2,0,&local_38,8);
      lVar2 = *(long *)(param_1 + 0x80);
      goto joined_r0x00ca6a08;
    }
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    local_38 = lVar2;
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_00ca9590(param_2,0,&local_38,8);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x80);
joined_r0x00ca6a08:
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x54) != 0)) {
    lVar2 = *(long *)(param_1 + 0x80);
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      local_38 = lVar2;
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_00ca9590(param_2,0,&local_38,8);
      (**(code **)(*plVar1 + 0x18))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00ca6a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1);
      return;
    }
    local_38 = 0;
    FUN_00ca9590(param_2,0,&local_38,8);
  }
  return;
}


