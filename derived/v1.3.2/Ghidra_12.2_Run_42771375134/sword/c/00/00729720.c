/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00729720; name: FUN_00729720
 */


void FUN_00729720(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_0199c0f0(&local_60);
  uVar2 = uStack_58;
  piVar3 = *(int **)(param_3 + 0x40);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) ||
     (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6], uVar6 == 0)) {
    uVar4 = local_60._4_2_ & 0xfffe;
  }
  else {
    uVar4 = local_60._4_2_ & 0xfffe;
    if (*(char *)((long)piVar3 + uVar6) != '\0') {
      uVar4 = local_60._4_2_ | 1;
    }
  }
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) ||
     (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar6 == 0)) {
    uVar5 = uVar4 & 0xfffd;
  }
  else {
    uVar5 = uVar4 & 0xfffd;
    if (*(char *)((long)piVar3 + uVar6) != '\0') {
      uVar5 = uVar4 | 2;
    }
  }
  local_60._0_6_ = CONCAT24(uVar5,(undefined4)local_60);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x2b) ||
     (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x15], uVar6 == 0)) {
    local_60 = CONCAT71(local_60._1_7_,1);
    cVar1 = *(char *)(param_3 + 0x4a4);
    uVar6 = local_60;
  }
  else {
    local_60 = CONCAT71(local_60._1_7_,(char)*(undefined4 *)((long)piVar3 + uVar6));
    cVar1 = *(char *)(param_3 + 0x4a4);
    uVar6 = local_60;
  }
  local_60 = uVar6;
  if (cVar1 != '\0') {
    local_60._6_2_ = (undefined2)(uVar6 >> 0x30);
    local_60._0_4_ = (undefined4)uVar6;
    local_60 = CONCAT26(local_60._6_2_,CONCAT24(uVar5,(undefined4)local_60)) | 0x400000000;
    uStack_58._5_3_ = SUB83(uVar2,5);
    uStack_58._0_5_ = CONCAT14(cVar1,CONCAT22(0x702,(undefined2)uStack_58));
  }
  FUN_0072ac30(param_2,&local_60);
  return;
}


