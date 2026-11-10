/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4e280; name: FUN_00a4e280
 */


void FUN_00a4e280(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined *local_98;
  long local_90;
  long local_88;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar2 = *(uint *)(param_2 + 6);
  uVar3 = *(uint *)((long)param_2 + 0x34);
  lVar15 = param_2[3];
  bVar4 = (uVar3 | 2) == 3;
  bVar6 = !bVar4;
  bVar5 = uVar2 == uVar3;
  if (lVar15 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_016b2d70(*(long *)(param_1 + 0x18),0);
      FUN_016b2da0(*(undefined8 *)(param_1 + 0x18),0);
    }
    *(undefined1 *)((long)param_2 + 0x49) = 0;
    *(undefined4 *)((long)param_2 + 0x45) = 0;
    return;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = FUN_00a0a290(uVar2);
  uVar11 = FUN_00a0a290(uVar3);
  lVar16 = lVar15;
  if (((uVar10 ^ uVar11) & 1) != 0) {
    lVar16 = param_2[4];
  }
  lVar12 = FUN_008e1680(lVar16);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  bVar7 = FUN_008e1600(lVar16);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_016b2d70(*(long *)(param_1 + 0x18),1);
    FUN_016b2da0(*(undefined8 *)(param_1 + 0x18),1);
  }
  FUN_00a10e20(uVar14,param_1 + 0xb8,*(undefined8 *)(param_1 + 400),0,lVar12);
  if (*(long *)(param_1 + 0x170) != 0) {
    local_78._3_5_ = (uint5)(local_78 >> 0x18) & 0xff;
    local_98 = PTR_DAT_02718ea0 + 0x10;
    local_78 = (ulong)local_78._3_5_ << 0x18;
    local_88 = lVar15;
    if (lVar16 != 0) {
      local_88 = lVar16;
    }
    local_90 = lVar15;
    local_80 = lVar15;
    uVar8 = FUN_008e0a10(lVar15);
    local_78 = CONCAT62(local_78._2_6_,CONCAT11(uVar8,(undefined1)local_78)) & 0xffffffffffff01ff;
    FUN_00a127a0(*(undefined8 *)(param_1 + 0x170),&local_98);
  }
  uVar13 = FUN_008e1670(lVar16);
  FUN_00ffd710(uVar14,param_1 + 200,uVar13);
  local_98 = (undefined *)*param_2;
  local_90 = CONCAT71(local_90._1_7_,*(undefined1 *)(param_2 + 1));
  local_88 = *(undefined8 *)(param_1 + 0x10);
  local_80 = *(undefined8 *)(param_1 + 0xc0);
  local_78 = *(undefined8 *)(param_1 + 0x88);
  local_70 = *(undefined8 *)(param_1 + 0x98);
  local_68 = 0;
  uVar10 = FUN_00a0a600(&local_98);
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_00ffd510((float)(~uVar10 & 1),*(undefined8 *)(param_1 + 0x10),param_1 + 0x140);
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    uVar17 = 0x3f800000;
    if (uVar2 != uVar3) {
      uVar17 = 0;
    }
    FUN_00ffd510(uVar17,*(undefined8 *)(param_1 + 0x10),param_1 + 0x130);
  }
  plVar1 = (long *)(param_1 + 0x138);
  if (*(char *)((long)param_2 + 0x44) == '\0') {
    uVar17 = 0x40800000;
    lVar15 = *plVar1;
  }
  else if (*(uint *)(param_2 + 8) < 4) {
    uVar17 = *(undefined4 *)(&DAT_01d49e00 + (long)(int)*(uint *)(param_2 + 8) * 4);
    lVar15 = *plVar1;
  }
  else {
    uVar17 = 0;
    lVar15 = *plVar1;
  }
  if (lVar15 != 0) {
    FUN_00ffd510(uVar17,*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00ffd510((float)(bVar7 & 1),uVar14,param_1 + 0x158);
  *(byte *)(*(long *)(param_1 + 0xa8) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0xa8) + 0x58) & 0xfe | *(byte *)((long)param_2 + 0x3c);
  if (*(int *)(param_2 + 7) == 0) {
    bVar5 = (bool)(~bVar7 & 1);
LAB_00a4e528:
    *(undefined1 *)((long)param_2 + 0x45) = 1;
    *(bool *)((long)param_2 + 0x46) = bVar5;
    *(undefined1 *)((long)param_2 + 0x47) = 1;
    bVar6 = *(int *)((long)param_2 + 0x34) == *(int *)(param_2 + 6);
    goto LAB_00a4e53c;
  }
  uVar17 = FUN_00880f80();
  switch(uVar17) {
  case 0:
    bVar6 = uVar2 != uVar3;
    goto LAB_00a4e770;
  case 1:
    *(undefined1 *)((long)param_2 + 0x45) = 1;
    *(undefined1 *)((long)param_2 + 0x47) = 1;
    *(bool *)((long)param_2 + 0x46) = bVar6;
    bVar6 = *(int *)((long)param_2 + 0x34) == 0;
    goto LAB_00a4e53c;
  case 2:
    *(bool *)((long)param_2 + 0x46) = (uVar3 | 2) != 3 && uVar2 != uVar3;
    *(undefined1 *)((long)param_2 + 0x45) = 1;
    *(undefined1 *)((long)param_2 + 0x47) = 1;
    bVar6 = *(int *)((long)param_2 + 0x34) == (uint)(*(int *)(param_2 + 6) == 0) * 2;
    goto LAB_00a4e53c;
  case 3:
    bVar7 = FUN_00a0a290(*(undefined4 *)((long)param_2 + 0x34));
    bVar9 = FUN_00a0a290(*(undefined4 *)(param_2 + 6));
    bVar6 = (bool)((bVar7 ^ bVar9) & 1);
LAB_00a4e770:
    *(bool *)((long)param_2 + 0x46) = bVar6;
    *(undefined1 *)((long)param_2 + 0x45) = 1;
    *(undefined1 *)((long)param_2 + 0x47) = 1;
    bVar6 = *(int *)((long)param_2 + 0x34) == 3;
LAB_00a4e53c:
    *(bool *)(param_2 + 9) = bVar6;
    *(undefined1 *)((long)param_2 + 0x49) = 0;
LAB_00a4e548:
    lVar15 = *(long *)(param_1 + 0x18);
    break;
  case 4:
    *(undefined1 *)((long)param_2 + 0x45) = 1;
    *(bool *)((long)param_2 + 0x46) = uVar2 != uVar3;
    *(undefined1 *)((long)param_2 + 0x47) = 0;
    *(bool *)((long)param_2 + 0x49) = uVar2 != uVar3;
    *(bool *)(param_2 + 9) = *(int *)((long)param_2 + 0x34) == 0xff;
    lVar15 = *(long *)(param_1 + 0x18);
    break;
  case 5:
  case 0xb:
    *(undefined1 *)((long)param_2 + 0x45) = 1;
    *(bool *)((long)param_2 + 0x46) = bVar4;
    *(bool *)((long)param_2 + 0x49) = bVar4;
    *(undefined1 *)((long)param_2 + 0x47) = 0;
    *(bool *)(param_2 + 9) = *(int *)((long)param_2 + 0x34) == 0xff;
    lVar15 = *(long *)(param_1 + 0x18);
    break;
  case 6:
  case 0xc:
    *(undefined1 *)((long)param_2 + 0x45) = 1;
    *(bool *)((long)param_2 + 0x46) = bVar6;
    *(undefined1 *)((long)param_2 + 0x47) = 0;
    *(bool *)((long)param_2 + 0x49) = bVar6;
    *(bool *)(param_2 + 9) = *(int *)((long)param_2 + 0x34) == 0xff;
    if ((*(int *)(param_2 + 7) == 0x32b) && (uVar2 == uVar3)) {
      *(undefined1 *)((long)param_2 + 0x46) = 0;
      *(undefined1 *)((long)param_2 + 0x49) = 0;
      lVar15 = *(long *)(param_1 + 0x18);
      break;
    }
    goto LAB_00a4e548;
  case 7:
  case 9:
  case 0xd:
    goto LAB_00a4e528;
  case 8:
  case 10:
    *(undefined2 *)((long)param_2 + 0x45) = 0x101;
    *(bool *)(param_2 + 9) = *(int *)((long)param_2 + 0x34) == 0xff;
    *(undefined1 *)((long)param_2 + 0x47) = 0;
    *(undefined1 *)((long)param_2 + 0x49) = 1;
    lVar15 = *(long *)(param_1 + 0x18);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (lVar15 == 0) goto LAB_00a4e5f4;
  FUN_016b2da0(lVar15,1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)((long)param_2 + 0x46));
  lVar15 = *(long *)(param_1 + 0xb0);
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | *(byte *)((long)param_2 + 0x49);
    FUN_00ffd430(uVar14,param_1 + 0x148);
    FUN_00ffd010(uVar14,param_1 + 0x148);
  }
  if (*(char *)((long)param_2 + 0x47) == '\0') {
    if (*(char *)((long)param_2 + 0x49) == '\0') goto LAB_00a4e5dc;
    FUN_00ffd430(uVar14,param_1 + 0x168);
    param_1 = param_1 + 0x160;
  }
  else {
    if (*(char *)(param_2 + 9) != '\0') goto LAB_00a4e5f4;
LAB_00a4e5dc:
    FUN_00ffd430(uVar14,param_1 + 0x160);
    param_1 = param_1 + 0x168;
  }
  FUN_00ffd010(uVar14,param_1);
LAB_00a4e5f4:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


