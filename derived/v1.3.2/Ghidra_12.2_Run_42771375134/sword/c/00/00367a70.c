/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00367a70; name: FUN_00367a70
 */


void FUN_00367a70(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 uVar6;
  undefined4 extraout_w11;
  undefined4 extraout_w11_00;
  undefined4 uVar7;
  undefined8 local_48;
  uint local_40;
  uint uStack_3c;
  undefined8 local_38;
  uint local_30;
  uint uStack_2c;
  undefined1 auStack_28 [8];
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar4 = 0x38;
  }
  else {
    iVar4 = *(int *)param_1[0xc] + 0x38;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar4;
  piVar5 = (int *)param_1[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  local_38 = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar4 = *(int *)(*param_1 + 0x10);
    if (iVar4 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_38);
      uVar6 = extraout_w10_00;
      uVar7 = extraout_w11_00;
      local_48 = local_38;
      uVar1 = local_30;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar4 - 1) * 0x10)
                         ,&local_38);
      uVar6 = extraout_w10;
      uVar7 = extraout_w11;
      local_48 = local_38;
      uVar1 = local_30;
    }
    if ((((uVar3 & 1) != 0) && (local_48 != (byte *)0x0)) &&
       (local_30 = (uint)*local_48, *local_48 != 0)) {
      uStack_3c = (uint)*local_48;
      local_38 = local_48;
      if (*local_48 != 0) {
        local_30 = uVar1;
        FUN_00323450(auStack_28,&local_38,&local_48);
        uVar6 = local_38._4_4_;
        uVar7 = (undefined4)local_38;
        uStack_3c = uStack_2c;
      }
      local_48 = (byte *)CONCAT44(uVar6,uVar7);
      local_40 = local_30;
      (**(code **)(param_2 + 0x20))(param_1[6],&local_48);
      return;
    }
  }
  return;
}


