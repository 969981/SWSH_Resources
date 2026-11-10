/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c2c80; name: FUN_013c2c80
 */


void FUN_013c2c80(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_60 [20];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 == (long *)0x0) {
    return;
  }
  switch(*(undefined4 *)(param_2 + 0x14)) {
  case 0:
    FUN_013c2ff0(param_1,param_2);
    if (*(int *)(param_1 + 0x140) == 0) {
      plVar4 = *(long **)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x140) = 2;
      UNRECOVERED_JUMPTABLE_00 = *(code **)*plVar4;
    }
    else {
      plVar4 = *(long **)(param_1 + 0x70);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 8);
    }
    goto LAB_013c2e08;
  case 1:
    if (*(int *)(param_1 + 0x140) == 0) {
      if (*(char *)(param_2 + 0x18) != '\0') {
        return;
      }
      FUN_01302c30(auStack_60);
      local_4c = 5;
      local_48 = 1;
      local_44 = *(undefined4 *)(param_1 + 0x11c);
      local_40 = *(undefined4 *)(param_1 + 0x120);
      local_3c = *(undefined4 *)(param_1 + 0x124);
      local_38 = *(undefined4 *)(param_1 + 0x128);
      if (*(long *)(param_1 + 0x70) != 0) {
        FUN_013c2110(*(undefined8 *)(param_1 + 0x68),auStack_60,param_3);
      }
      FUN_01302cd0(auStack_60);
      return;
    }
    if (*(int *)(param_1 + 0x140) != 1) {
      return;
    }
    cVar3 = FUN_0120e630(*(undefined8 *)PTR_DAT_027185f8,param_3);
    uVar5 = 1;
    if (*(char *)(param_2 + 0x18) == '\0') {
      uVar5 = 2;
    }
    if (cVar3 == '\x03') {
      *(undefined4 *)(param_1 + 0x128) = uVar5;
    }
    else if (cVar3 == '\x02') {
      *(undefined4 *)(param_1 + 0x124) = uVar5;
    }
    else if (cVar3 == '\x01') {
      *(undefined4 *)(param_1 + 0x120) = uVar5;
    }
    FUN_013c2ff0(param_1,param_1 + 0x100);
    FUN_01302c30(auStack_60);
    local_4c = 5;
    local_48 = 1;
    local_44 = *(undefined4 *)(param_1 + 0x11c);
    local_40 = *(undefined4 *)(param_1 + 0x120);
    local_3c = *(undefined4 *)(param_1 + 0x124);
    local_38 = *(undefined4 *)(param_1 + 0x128);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_013c2110(*(undefined8 *)(param_1 + 0x68),auStack_60,param_3);
    }
    FUN_01302cd0(auStack_60);
    (**(code **)(**(long **)(param_1 + 0x70) + 0x10))
              (*(long **)(param_1 + 0x70),*(undefined1 *)(param_2 + 0x18),param_3);
    return;
  case 2:
    if (*(uint *)(param_1 + 0x140) < 8) {
      uVar2 = 1 << (ulong)(*(uint *)(param_1 + 0x140) & 0x1f);
      if ((uVar2 & 0xac) == 0) {
        if ((uVar2 & 0x50) == 0) goto LAB_013c2e50;
        (**(code **)(*plVar4 + 8))(plVar4,param_2);
        (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
        uVar5 = 8;
      }
      else {
        (**(code **)(*plVar4 + 8))(plVar4,param_2);
        (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
        uVar5 = 0;
      }
      *(undefined4 *)(param_1 + 0x140) = uVar5;
    }
LAB_013c2e50:
    FUN_013c2ff0(param_1,param_2);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x1b8);
    break;
  case 3:
    if (*(int *)(param_1 + 0x140) != 0) {
      (**(code **)(*plVar4 + 0x28))();
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x1b8);
    break;
  case 4:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x30);
    param_2 = param_3;
LAB_013c2e08:
                    /* WARNING: Could not recover jumptable at 0x013c2e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar4,param_2);
    return;
  case 5:
    iVar1 = *(int *)(param_1 + 0x140);
    if (iVar1 == 5) {
      uVar5 = 7;
LAB_013c2ee8:
      *(undefined4 *)(param_1 + 0x140) = uVar5;
    }
    else {
      if (iVar1 == 4) {
        cVar3 = *(char *)(param_2 + 0x18);
        uVar6 = 7;
        uVar5 = 4;
LAB_013c2ee4:
        if (cVar3 != '\0') {
          uVar5 = uVar6;
        }
        goto LAB_013c2ee8;
      }
      if (iVar1 == 3) {
        cVar3 = *(char *)(param_2 + 0x18);
        uVar6 = 6;
        uVar5 = 3;
        goto LAB_013c2ee4;
      }
    }
    FUN_013c2ff0(param_1,param_2);
    (**(code **)(**(long **)(param_1 + 0x70) + 8))(*(long **)(param_1 + 0x70),param_2);
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),*(undefined1 *)(param_2 + 0x18));
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x1b8);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      return;
    }
    goto LAB_013c2f28;
  default:
    goto switchD_013c2cc4_default;
  }
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
switchD_013c2cc4_default:
    return;
  }
LAB_013c2f28:
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
                    /* WARNING: Could not recover jumptable at 0x013c2f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1 + 0x1d0);
  return;
}


