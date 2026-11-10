/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00348e70; name: FUN_00348e70
 */


void FUN_00348e70(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",&local_38);
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,&local_38);
    }
    if ((((uVar3 & 1) != 0) && (local_38 != (char *)0x0)) && (*local_38 != '\0')) {
      if (*local_38 == '\0') {
        local_30 = 0;
        uVar4 = 0;
        uVar5 = 0;
        uStack_2c = 0;
      }
      else {
        FUN_00348f60(auStack_28,&local_48,&local_38);
        uVar5 = (undefined4)local_48;
        uVar4 = local_48._4_4_;
        local_30 = (undefined4)local_40;
        uStack_2c = local_40._4_4_;
      }
      local_38 = (char *)CONCAT44(uVar4,uVar5);
      (**(code **)(param_3 + 0x20))(param_1[6],&local_38);
      return;
    }
  }
  return;
}


