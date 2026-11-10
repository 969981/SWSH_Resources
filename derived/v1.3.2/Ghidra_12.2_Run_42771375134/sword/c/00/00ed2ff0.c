/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed2ff0; name: FUN_00ed2ff0
 */


void FUN_00ed2ff0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long local_28;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  switch(*(undefined4 *)(param_1 + 0x1a0)) {
  case 0:
    break;
  case 1:
    goto switchD_00ed3044_caseD_1;
  case 2:
    goto switchD_00ed3044_caseD_2;
  case 3:
switchD_00ed3044_caseD_3:
    uVar3 = FUN_00d93eb0(*(undefined8 *)PTR_DAT_02710868,3);
    if ((uVar3 & 1) != 0) {
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
    }
  default:
    goto switchD_00ed3044_default;
  }
  uVar3 = FUN_00d93fb0(*(undefined8 *)PTR_DAT_02710868,0);
  if ((uVar3 & 1) == 0) goto switchD_00ed3044_default;
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
switchD_00ed3044_caseD_1:
  FUN_00d94090(&local_28,*(undefined8 *)PTR_DAT_02710868,3);
  lVar2 = FUN_00d8b330(local_28 + 0x58);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x4d8) = *(undefined8 *)(param_1 + 0x198);
    iVar1 = FUN_015114c0(lVar5,0xd2d952e26816dfdb);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x180) != '\0') goto LAB_00ed30f4;
      if (*(int *)(lVar2 + 0x4b8) != 1) {
        *(undefined4 *)(lVar2 + 0x4b8) = 0;
      }
    }
    else {
      if (iVar1 == 2) {
LAB_00ed30f4:
        uVar4 = 2;
      }
      else {
        if (iVar1 != 1) goto LAB_00ed30fc;
        uVar4 = 1;
      }
      *(undefined4 *)(lVar2 + 0x4b8) = uVar4;
    }
  }
LAB_00ed30fc:
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
switchD_00ed3044_caseD_2:
  FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,3,1,0,0,2,0,1);
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
  goto switchD_00ed3044_caseD_3;
switchD_00ed3044_default:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


