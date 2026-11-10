/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00341b20; name: FUN_00341b20
 */


void FUN_00341b20(long *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  int *piVar7;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 local_48;
  uint uStack_44;
  uint local_40;
  undefined8 local_38;
  uint local_30;
  undefined1 auStack_28 [8];
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar6 = 0xa0;
  }
  else {
    iVar6 = *(int *)param_1[0xc] + 0xa0;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar6;
  piVar7 = (int *)param_1[0xb];
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  local_38 = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar4 = (long *)param_1[5];
    iVar6 = *(int *)(*param_1 + 0x10);
    if (iVar6 == 0) {
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,"bad__repx__name",&local_38);
      uVar3 = extraout_w10_00;
      uVar1 = local_48;
      uVar2 = uStack_44;
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x10))
                        (plVar4,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar6 - 1) * 0x10)
                         ,&local_38);
      uVar3 = extraout_w10;
      uVar1 = local_48;
      uVar2 = uStack_44;
    }
    local_48 = uVar3;
    if ((((uVar5 & 1) != 0) && (local_38 != (byte *)0x0)) &&
       (uStack_44 = (uint)*local_38, *local_38 != 0)) {
      local_30 = (uint)*local_38;
      if (*local_38 != 0) {
        local_48 = uVar1;
        uStack_44 = uVar2;
        FUN_003222d0(auStack_28,&local_48,&local_38);
        local_30 = local_40;
      }
      local_38 = (byte *)CONCAT44(uStack_44,local_48);
      (**(code **)(param_2 + 0x20))(param_1[6],&local_38);
      return;
    }
  }
  return;
}


