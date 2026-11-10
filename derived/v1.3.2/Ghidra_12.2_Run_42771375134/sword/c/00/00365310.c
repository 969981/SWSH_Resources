/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00365310; name: FUN_00365310
 */


void FUN_00365310(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_w14;
  undefined4 extraout_w14_00;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_5c;
  uint local_58;
  undefined8 local_50;
  uint uStack_3c;
  uint local_38;
  byte *local_30;
  undefined1 auStack_28 [8];
  
  local_50 = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar3 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,"bad__repx__name",&local_50);
      uStack_6c = extraout_w13_00;
      local_70 = extraout_w14_00;
      uVar2 = uStack_3c;
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,&local_50);
      uStack_6c = extraout_w13;
      local_70 = extraout_w14;
      uVar2 = uStack_3c;
    }
    if ((((uVar4 & 1) != 0) && (local_50 != (byte *)0x0)) &&
       (uStack_3c = (uint)*local_50, *local_50 != 0)) {
      local_58 = (uint)*local_50;
      local_30 = local_50;
      if (*local_50 != 0) {
        uStack_3c = uVar2;
        FUN_00325ee0(auStack_28,&local_50,&local_30);
        uStack_6c = local_50._4_4_;
        local_70 = (undefined4)local_50;
        local_58 = local_38;
      }
      uStack_5c = uStack_3c;
      (**(code **)(param_3 + 0x20))(param_1[6],&local_70);
      return;
    }
  }
  return;
}


