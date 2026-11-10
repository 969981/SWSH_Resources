/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099bc20; name: FUN_0099bc20
 */


void FUN_0099bc20(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 unaff_x23;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined2 local_6e;
  undefined1 auStack_6c [32];
  uint5 local_4c;
  undefined3 uStack_47;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38 [2];
  
  iVar4 = FUN_00942620();
  if (iVar4 != 2) {
    return;
  }
  uVar7 = FUN_009423b0(param_1);
  FUN_00936040(uVar7,399,*param_3);
  uVar7 = FUN_009423b0(param_1);
  FUN_009372a0(uVar7,*param_3,0x8b);
  iVar4 = FUN_008ec900(0x14);
  if (iVar4 == 0) {
    uVar7 = 5;
    uStack_3c = 5;
    _local_4c = 0x200000001;
    uStack_44 = 3;
    local_40 = 4;
    FUN_009424b0(param_1,4);
    FUN_008e0b60();
    FUN_008e5ed0();
    uVar8 = FUN_0093db60();
    if ((uVar8 & 1) != 0) {
      uVar7 = 6;
      local_38[0] = 6;
    }
    uVar5 = FUN_008ebfa0(uVar7);
    uVar9 = local_38[(ulong)(uVar5 & 0xff) - 5];
  }
  else {
    uVar9 = 0;
  }
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_40 = (undefined4)unaff_x23;
  uStack_3c = (undefined4)((ulong)unaff_x23 >> 0x20);
  uVar7 = FUN_009423a0(param_1,uVar1,uVar2);
  uVar6 = FUN_00917fb0(uVar7,0xba);
  switch(uVar9) {
  case 1:
    uVar8 = FUN_0099bf70(param_1,uVar1);
    uVar7 = FUN_009423a0(param_1);
    break;
  case 2:
    uVar8 = FUN_0099c0e0(param_1,uVar1);
    uVar7 = FUN_009423a0(param_1);
    break;
  case 3:
    uVar8 = FUN_0099c1f0(param_1,uVar1,uVar2);
    uVar7 = FUN_009423a0(param_1);
    break;
  case 4:
    local_7c = 0x18;
    local_70 = 2;
    local_80[0] = 0x1f;
    local_78 = 0;
    local_6e = 0xf9;
    FUN_00943e60(auStack_6c);
    local_4c = (uint5)(uint)local_4c;
    local_80[0] = 0x1f;
    local_7c = 0;
    uVar7 = FUN_00942380(param_1);
    local_70 = FUN_008f8ca0(uVar7,uVar1);
    local_78 = FUN_008ed0b0(0x1f,5);
    uVar7 = 0x8d;
    goto LAB_0099bea4;
  case 5:
    local_7c = 0x18;
    local_70 = 2;
    local_80[0] = 0x1f;
    local_78 = 0;
    local_6e = 0xf9;
    FUN_00943e60(auStack_6c);
    local_4c = (uint5)(uint)local_4c;
    local_80[0] = 0x1f;
    local_7c = 1;
    uVar7 = FUN_00942380(param_1);
    local_70 = FUN_008f8ca0(uVar7,uVar1);
    local_78 = FUN_008ed0b0(0x1f,5);
    uVar7 = 0x91;
LAB_0099bea4:
    FUN_00943f20(auStack_6c,1,uVar7);
    FUN_00942450(param_1);
    uVar7 = FUN_00925850();
    FUN_0094a5a0(uVar7,local_38,local_80);
    cVar3 = (char)local_38[0];
    uVar7 = FUN_009423a0(param_1);
    if (cVar3 == '\0') goto LAB_0099bf3c;
    goto LAB_0099bf18;
  case 6:
    FUN_009424b0(param_1,4);
    FUN_008e0b60();
    FUN_008e5ed0();
    uVar8 = FUN_0093db60();
    if ((uVar8 & 1) == 0) goto switchD_0099bd64_default;
    FUN_00942450(param_1);
    uVar7 = FUN_00925aa0();
    FUN_0095f390(uVar7,local_80,local_38);
    uVar7 = FUN_009423a0(param_1);
    goto LAB_0099bf18;
  default:
switchD_0099bd64_default:
    uVar7 = FUN_009423a0(param_1);
    goto LAB_0099bf3c;
  }
  if ((uVar8 & 1) == 0) {
LAB_0099bf3c:
    FUN_009181d0(uVar7,uVar6,0xba,0x191,0xffff0000);
  }
  else {
LAB_0099bf18:
    FUN_009181d0(uVar7,uVar6,0xba,400,uVar1,0xffff0000);
  }
  return;
}


