/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9fd0; name: FUN_003a9fd0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003a9fd0(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a0 [4];
  undefined4 local_9c;
  int iStack_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  byte local_48 [8];
  
  (**(code **)*param_2)(local_48,param_2);
  local_80 = 0xc;
  local_70 = 0xc;
  local_88 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 4;
  local_58 = 0;
  local_50 = 4;
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[2];
  }
  else {
    plVar3 = (long *)FUN_003aa860();
  }
  bVar2 = local_48[0] >> 2 & 1;
  (**(code **)(*plVar3 + 0x28))(plVar3,auStack_a0,0,bVar2);
  *(undefined4 *)(param_2 + 1) = local_9c;
  *(int *)((long)param_2 + 0xc) = iStack_98;
  uVar5 = 0;
  if (local_90 != (undefined8 *)0x0) {
    uVar5 = *local_90;
  }
  param_2[3] = 0;
  param_2[2] = uVar5;
  *(undefined4 *)(param_2 + 4) = 0xc;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xc;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 4;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 2;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0xc;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0xc;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 4;
  if (iStack_98 == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x11);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_2 + 4) = local_80;
    param_2[3] = local_88;
    uVar1 = *(ushort *)(param_1 + 0x11);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(undefined4 *)(param_2 + 6) = local_70;
    param_2[5] = local_78;
    uVar1 = *(ushort *)(param_1 + 0x11);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    *(undefined4 *)(param_2 + 8) = local_50;
    param_2[7] = local_58;
    uVar1 = *(ushort *)(param_1 + 0x11);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    lVar4 = *param_1;
  }
  else {
    param_2[9] = local_68;
    *(undefined4 *)(param_2 + 10) = local_60;
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    local_e8 = 4;
    local_d8 = 0xc;
    local_c8 = 0xc;
    local_b8 = 0xc;
    local_f0 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_a8 = 8;
    FUN_003aa840(lVar4,&local_f0,bVar2);
    uVar1 = *(ushort *)(param_1 + 0x11);
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_2 + 0xc) = local_d8;
      param_2[0xb] = local_e0;
      uVar1 = *(ushort *)(param_1 + 0x11);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_2 + 0xe) = local_c8;
      param_2[0xd] = local_d0;
      uVar1 = *(ushort *)(param_1 + 0x11);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x10) = local_e8;
      param_2[0xf] = local_f0;
    }
  }
  return;
}


