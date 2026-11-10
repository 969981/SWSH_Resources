/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cae620; name: FUN_00cae620
 */


void FUN_00cae620(undefined8 param_1,long param_2,char *param_3,long param_4,char *param_5,
                 long *param_6,long *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  char cVar8;
  long *plVar9;
  long local_68;
  long local_58;
  
  local_58 = *param_6;
  if (local_58 == 0) {
    uVar4 = FUN_00cae840(param_1,&local_58);
    uVar3 = uVar4 & 0xffffffff;
    lVar7 = *param_7;
    if (lVar7 != 0) goto LAB_00cae698;
LAB_00cae748:
    uVar1 = 1;
    cVar8 = *param_3;
  }
  else {
    plVar9 = (long *)(local_58 + 0x48);
    uVar2 = (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar3 = FUN_00cae840(uVar2,&local_58);
    uVar3 = uVar3 & 0xffffffff;
    uVar4 = (**(code **)(*plVar9 + 0x18))(plVar9);
    local_58 = 0;
    lVar7 = *param_7;
    if (lVar7 == 0) goto LAB_00cae748;
LAB_00cae698:
    if (*(int *)(lVar7 + 0x54) == 0) goto LAB_00cae748;
    local_68 = *param_7;
    if (local_68 == 0) {
      uVar1 = FUN_00cae840(uVar4,&local_68);
      uVar1 = uVar1 & 1;
      cVar8 = *param_3;
    }
    else {
      plVar9 = (long *)(local_68 + 0x48);
      uVar2 = (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar1 = FUN_00cae840(uVar2,&local_68);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      local_68 = 0;
      uVar1 = uVar1 & 1;
      cVar8 = *param_3;
    }
  }
  if (cVar8 != '\0') {
    if ((uVar3 & 1) == 0) {
      lVar7 = *param_6;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_2 + 0x40);
      *(long *)(param_2 + 0x40) = lVar7;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      bVar6 = true;
      cVar8 = *param_5;
    }
    else {
      bVar6 = false;
      cVar8 = *param_5;
    }
    if ((uVar1 == 0) && (cVar8 == '\0')) {
      lVar7 = *param_7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_2 + 0x48);
      *(long *)(param_2 + 0x48) = lVar7;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
    }
    else {
      if (bVar6) goto LAB_00cae7bc;
      *param_3 = '\0';
    }
  }
  cVar8 = *param_5;
LAB_00cae7bc:
  if (cVar8 != '\0') {
    if (uVar1 == 0) {
      lVar7 = *param_7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_4 + 0x48);
      *(long *)(param_4 + 0x48) = lVar7;
      if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00cae830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
        return;
      }
    }
    else {
      *param_5 = '\0';
    }
  }
  return;
}


