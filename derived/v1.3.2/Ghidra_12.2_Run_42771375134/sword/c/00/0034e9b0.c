/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0034e9b0; name: FUN_0034e9b0
 */


void FUN_0034e9b0(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 uVar6;
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  uint local_30;
  undefined1 auStack_28 [8];
  
  if ((int *)param_1[0xc] == (int *)0x0) {
    iVar3 = 0x2c;
  }
  else {
    iVar3 = *(int *)param_1[0xc] + 0x2c;
  }
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar3;
  piVar4 = (int *)param_1[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  local_38 = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar1 = (long *)param_1[5];
    iVar3 = *(int *)(*param_1 + 0x10);
    if (iVar3 == 0) {
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,"bad__repx__name",&local_38);
      uVar6 = extraout_w10_00;
      local_48 = local_38;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x10))
                        (plVar1,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10)
                         ,&local_38);
      uVar6 = extraout_w10;
      local_48 = local_38;
    }
    if ((((uVar2 & 1) != 0) && (local_48 != (byte *)0x0)) && (*local_48 != 0)) {
      local_40 = (uint)*local_48;
      uVar5 = (uint)*local_48;
      local_38 = local_48;
      if (*local_48 != 0) {
        FUN_003222d0(auStack_28,&local_38,&local_48);
        uVar5 = local_38._4_4_;
        uVar6 = (undefined4)local_38;
        local_40 = local_30;
      }
      local_48 = (byte *)CONCAT44(uVar5,uVar6);
      (**(code **)(param_2 + 0x20))(param_1[6],&local_48);
      return;
    }
  }
  return;
}


