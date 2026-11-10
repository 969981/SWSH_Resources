/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d46a0; name: FUN_004d46a0
 */


void FUN_004d46a0(long param_1,uint param_2)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    sVar3 = 0;
  }
  else {
    local_58 = *(long *)(param_1 + 0x70);
    local_50 = *(undefined8 *)(param_1 + 0x78);
    local_48 = 0;
    FUN_004ca560(&local_58);
    sVar3 = thunk_FUN_004841f0(local_58,local_48);
    FUN_004ca500(&local_58);
  }
  sVar1 = *(short *)(param_1 + 0x340);
  *(short *)(param_1 + 0x340) = sVar3;
  bVar2 = (sVar3 != 0) != (sVar1 != 0);
  *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfd | bVar2 << 1;
  if ((bVar2) && (*(long *)(param_1 + 0x20) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x120) = 0x42ca0000;
  }
  local_58._0_4_ = *(undefined4 *)PTR_DAT_02712b38;
  local_58._4_4_ = *(int *)(param_1 + 0x90);
  local_50 = CONCAT53(local_50._3_5_,0x50000);
  local_50 = CONCAT62(local_50._2_6_,(short)(local_58._4_4_ << 8)) | 0x20;
  if (((*(long *)(param_1 + 0x2c8) == 0) || (*(short *)(param_1 + 0x142) != 0)) ||
     (*(short *)(param_1 + 0x342) != 0)) {
    iVar5 = local_58._4_4_;
    if ((param_2 & 1) != 0) goto LAB_004d47c4;
LAB_004d4790:
    if (((*(long *)(param_1 + 0x2c8) == 0) || (*(short *)(param_1 + 0x140) != 0)) ||
       (*(short *)(param_1 + 0x340) != 0)) goto LAB_004d47d8;
    local_58._4_4_ = *(int *)(param_1 + 0x2d0);
    lVar4 = *(long *)(param_1 + 0x2e0);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2d0);
    if ((param_2 & 1) == 0) goto LAB_004d4790;
LAB_004d47c4:
    FUN_004d1cd0(param_1,0,&local_58);
LAB_004d47d8:
    lVar4 = *(long *)(param_1 + 0x2e0);
  }
  iVar6 = iVar5;
  if (((lVar4 != 0) && (*(short *)(param_1 + 0x1c2) == 0)) && (*(short *)(param_1 + 0x342) == 0)) {
    iVar6 = *(int *)(param_1 + 0x2e8);
  }
  if ((local_58._4_4_ == iVar5) && ((param_2 >> 1 & 1) == 0)) {
    if (((lVar4 != 0) && (*(short *)(param_1 + 0x1c0) == 0)) && (*(short *)(param_1 + 0x340) == 0))
    {
      iVar5 = *(int *)(param_1 + 0x2e8);
      lVar4 = *(long *)(param_1 + 0x2f8);
      local_58._4_4_ = iVar5;
      goto joined_r0x004d4854;
    }
  }
  else {
    FUN_004d1cd0(param_1,1,&local_58);
    iVar5 = local_58._4_4_;
  }
  lVar4 = *(long *)(param_1 + 0x2f8);
joined_r0x004d4854:
  iVar7 = iVar6;
  if (((lVar4 != 0) && (*(short *)(param_1 + 0x242) == 0)) && (*(short *)(param_1 + 0x342) == 0)) {
    iVar7 = *(int *)(param_1 + 0x300);
  }
  if ((iVar5 == iVar6) && ((param_2 >> 2 & 1) == 0)) {
    if (((lVar4 != 0) && (*(short *)(param_1 + 0x240) == 0)) && (*(short *)(param_1 + 0x340) == 0))
    {
      local_58._4_4_ = *(int *)(param_1 + 0x300);
      iVar6 = local_58._4_4_;
    }
  }
  else {
    FUN_004d1cd0(param_1,2,&local_58);
    iVar6 = local_58._4_4_;
  }
  if ((iVar6 == iVar7) && ((param_2 >> 3 & 1) == 0)) {
    if (((*(long *)(param_1 + 0x310) != 0) && (*(short *)(param_1 + 0x2c0) == 0)) &&
       (*(short *)(param_1 + 0x340) == 0)) {
      local_58._4_4_ = *(int *)(param_1 + 0x318);
    }
  }
  else {
    FUN_004d1cd0(param_1,3,&local_58);
  }
  *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfc | 1;
  FUN_004d2490(param_1);
  return;
}


