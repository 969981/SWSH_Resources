/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d837d0; name: FUN_00d837d0
 */


void FUN_00d837d0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long local_40;
  long local_38;
  
  switch(*(undefined4 *)((long)param_1 + 0x54)) {
  case 0:
    if ((char)param_1[0x1d] == '\0') {
      return;
    }
    *(undefined2 *)(param_1 + 0x1d) = 0;
    (**(code **)(*param_1 + 0x40))(param_1);
    *(undefined4 *)((long)param_1 + 0x54) = 1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
    goto LAB_00d83a10;
  case 1:
    uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    if ((uVar2 & 1) != 0) {
      FUN_00d85f20(&local_38,param_1,1);
      FUN_00d85f20(&local_40,param_1,2);
      if (local_38 != 0) {
        FUN_0069d2e0(local_38);
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        FUN_0069d2e0(local_40);
      }
      FUN_00d83bf0(param_1,1,*(undefined1 *)((long)param_1 + 0x119));
      FUN_00d83bf0(param_1,2,0);
      *(undefined4 *)((long)param_1 + 0x54) = 2;
      (**(code **)(*param_1 + 0x88))(param_1);
      if (lVar1 != 0) {
        plVar3 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar3 + 0x18))(plVar3);
        local_40 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
      }
    }
    break;
  case 2:
    if (*(char *)((long)param_1 + 0xe9) == '\0') {
      if (*(char *)((long)param_1 + 0xea) != '\0') {
        *(undefined1 *)((long)param_1 + 0xea) = 0;
        (**(code **)(*param_1 + 0xd8))(param_1);
        *(undefined4 *)((long)param_1 + 0x54) = 5;
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 0xe9) = 0;
      if (*(char *)((long)param_1 + 0x119) != '\0') {
        FUN_00d83bf0(param_1,1,0);
        FUN_00d83bf0(param_1,2,1);
      }
      FUN_00d862c0(param_1,1);
      *(undefined4 *)((long)param_1 + 0x54) = 3;
    }
    break;
  case 3:
    if ((char)param_1[0x23] == '\0') {
      uVar2 = FUN_00d86450(param_1,1);
      if ((uVar2 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x23) = 1;
        return;
      }
      if ((char)param_1[0x23] == '\0') {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x23) = 0;
    FUN_00d84920(param_1,1);
    FUN_00d84bf0(param_1,1);
    if (*(char *)((long)param_1 + 0x119) != '\0') {
      FUN_00d83bf0(param_1,1,1);
      FUN_00d83bf0(param_1,2,0);
    }
    FUN_00d862c0(param_1,2);
    *(undefined4 *)((long)param_1 + 0x54) = 4;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x90);
    goto LAB_00d83a10;
  case 4:
    if ((char)param_1[0x23] == '\0') {
      uVar2 = FUN_00d86450(param_1,2);
      if ((uVar2 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x23) = 1;
        return;
      }
      if ((char)param_1[0x23] == '\0') {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x23) = 0;
    FUN_00d84920(param_1,2);
    FUN_00d84bf0(param_1,2);
    FUN_00d83bf0(param_1,2,0);
    *(undefined4 *)((long)param_1 + 0x54) = 2;
    break;
  case 5:
    uVar2 = (**(code **)(*param_1 + 0x110))(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
LAB_00d83a10:
                    /* WARNING: Could not recover jumptable at 0x00d83a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}


