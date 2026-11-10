/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041c420; name: FUN_0041c420
 */


long FUN_0041c420(long *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  long local_60;
  
  *param_2 = 0;
  if (((*(byte *)((long)param_1 + 0x5a) & 0xe) == 0) && ((char)param_1[0x18] != '\0')) {
    uVar1 = (undefined4)param_1[0x17];
    uVar2 = *(undefined4 *)((long)param_1 + 0xbc);
    FUN_00416ff0(param_1 + 0x13);
    lVar6 = param_1[0xf];
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x78) + 0x10);
    }
    lVar3 = FUN_00415a00(param_1[0x12],uVar4,uVar1);
    if (*(long *)(lVar3 + 0x50) == 0) {
      *param_2 = *(byte *)(lVar3 + 0x48) >> 3 & 1;
      lVar6 = FUN_0041c960(param_1,lVar3,lVar6,uVar1,uVar2);
      return lVar6;
    }
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_80 = *(byte *)(lVar3 + 0x30);
    local_88 = *(undefined8 *)(lVar3 + 0x28);
    local_90 = *(undefined8 *)(lVar3 + 0x20);
    local_60 = 0;
    lVar5 = *(long *)(lVar3 + 0x50);
    local_74 = *(undefined4 *)(lVar5 + 0xc);
    local_7c = *(undefined8 *)(lVar5 + 4);
    uStack_70 = 0;
    cStack_68 = (*(byte *)(lVar5 + 0x1c) & 1) << 3;
    *param_2 = *(byte *)(lVar5 + 0x1c) & 1;
    lVar6 = FUN_0041c960(param_1,&local_b0,lVar6,**(undefined4 **)(lVar3 + 0x50),0);
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x18) == 0) {
        lVar6 = (**(code **)(*param_1 + 0x100))(param_1);
      }
      else {
        lVar5 = *(long *)(lVar3 + 0x50);
        local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar5 + 0x18));
        local_90 = *(undefined8 *)(lVar5 + 0x10);
        local_80 = (*(byte *)(lVar5 + 0x1c) & 2) << 4 | local_80 & 0xc0 | 7;
        uStack_6c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x41) >> 0x18);
        cStack_68 = (char)((ulong)*(undefined8 *)(lVar3 + 0x41) >> 0x38);
        local_74 = (undefined4)*(undefined8 *)(lVar3 + 0x3c);
        uStack_70 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x3c) >> 0x20);
        local_7c = *(undefined8 *)(lVar3 + 0x34);
        FUN_0041c960(param_1,&local_b0,lVar6,uVar1,uVar2);
      }
    }
    if (local_60 != 0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    }
    if (local_b0 != 0) {
      local_a8 = local_a8 & 0xffffffff00000000;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      local_b0 = 0;
      local_a8 = local_a8 & 0xffffffff;
    }
    if (local_a0 != 0) {
      local_98 = local_98 & 0xffffffff00000000;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    }
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}


