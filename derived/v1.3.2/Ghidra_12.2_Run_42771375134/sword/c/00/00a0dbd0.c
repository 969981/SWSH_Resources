/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0dbd0; name: FUN_00a0dbd0
 */


void FUN_00a0dbd0(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long local_d0 [12];
  undefined1 auStack_70 [16];
  
  if (0xd < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar19 = *(long *)(param_1 + 0x5d0);
  plVar1 = (long *)(param_1 + 0x5d0);
  uVar17 = FUN_00a0f4b0(lVar19);
  if ((uVar17 & 1) == 0) {
    uVar21 = 0;
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x78);
  }
  else {
    uVar21 = *(byte *)(lVar19 + 0x18) ^ 1;
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x78);
  }
  if ((uVar17 & 1) != 0) {
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x90) ^ 1);
  }
  lVar19 = *plVar1;
  uVar17 = FUN_00a0f4b0(lVar19 + 0xf0);
  if ((uVar17 & 1) == 0) {
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x168);
    if ((uVar17 & 1) != 0) goto LAB_00a0df08;
LAB_00a0dc70:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x1e0);
    if ((uVar17 & 1) != 0) goto LAB_00a0df24;
LAB_00a0dc80:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 600);
    if ((uVar17 & 1) != 0) goto LAB_00a0df40;
LAB_00a0dc90:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x2d0);
    if ((uVar17 & 1) != 0) goto LAB_00a0df5c;
LAB_00a0dca0:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x348);
    if ((uVar17 & 1) != 0) goto LAB_00a0df78;
LAB_00a0dcb0:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x3c0);
    if ((uVar17 & 1) != 0) goto LAB_00a0df94;
LAB_00a0dcc0:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x438);
    if ((uVar17 & 1) != 0) goto LAB_00a0dfb0;
LAB_00a0dcd0:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x4b0);
    if ((uVar17 & 1) != 0) goto LAB_00a0dfcc;
LAB_00a0dce0:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x528);
    if ((uVar17 & 1) != 0) goto LAB_00a0dfe8;
LAB_00a0dcf0:
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x5a0);
  }
  else {
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x108) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x168);
    if ((uVar17 & 1) == 0) goto LAB_00a0dc70;
LAB_00a0df08:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x180) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x1e0);
    if ((uVar17 & 1) == 0) goto LAB_00a0dc80;
LAB_00a0df24:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x1f8) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 600);
    if ((uVar17 & 1) == 0) goto LAB_00a0dc90;
LAB_00a0df40:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x270) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x2d0);
    if ((uVar17 & 1) == 0) goto LAB_00a0dca0;
LAB_00a0df5c:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x2e8) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x348);
    if ((uVar17 & 1) == 0) goto LAB_00a0dcb0;
LAB_00a0df78:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x360) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x3c0);
    if ((uVar17 & 1) == 0) goto LAB_00a0dcc0;
LAB_00a0df94:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x3d8) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x438);
    if ((uVar17 & 1) == 0) goto LAB_00a0dcd0;
LAB_00a0dfb0:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x450) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x4b0);
    if ((uVar17 & 1) == 0) goto LAB_00a0dce0;
LAB_00a0dfcc:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x4c8) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x528);
    if ((uVar17 & 1) == 0) goto LAB_00a0dcf0;
LAB_00a0dfe8:
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x540) ^ 1);
    lVar19 = *plVar1;
    uVar17 = FUN_00a0f4b0(lVar19 + 0x5a0);
  }
  if ((uVar17 & 1) != 0) {
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x5b8) ^ 1);
  }
  lVar19 = *plVar1;
  uVar17 = FUN_00a0f4b0(lVar19 + 0x618);
  if ((uVar17 & 1) != 0) {
    uVar21 = uVar21 + (*(byte *)(lVar19 + 0x630) ^ 1);
  }
  uVar3 = FUN_00a0f4b0(*plVar1);
  uVar4 = FUN_00a0f4b0(*plVar1 + 0x78);
  uVar5 = FUN_00a0f4b0(*plVar1 + 0xf0);
  uVar6 = FUN_00a0f4b0(*plVar1 + 0x168);
  uVar7 = FUN_00a0f4b0(*plVar1 + 0x1e0);
  uVar8 = FUN_00a0f4b0(*plVar1 + 600);
  uVar9 = FUN_00a0f4b0(*plVar1 + 0x2d0);
  uVar10 = FUN_00a0f4b0(*plVar1 + 0x348);
  uVar11 = FUN_00a0f4b0(*plVar1 + 0x3c0);
  uVar12 = FUN_00a0f4b0(*plVar1 + 0x438);
  uVar13 = FUN_00a0f4b0(*plVar1 + 0x4b0);
  uVar14 = FUN_00a0f4b0(*plVar1 + 0x528);
  uVar15 = FUN_00a0f4b0(*plVar1 + 0x5a0);
  uVar16 = FUN_00a0f4b0(*plVar1 + 0x618);
  if ((uVar21 == param_3) &&
     ((uVar4 & 1) + (uVar3 & 1) + (uVar5 & 1) + (uVar6 & 1) + (uVar7 & 1) + (uVar8 & 1) +
      (uVar9 & 1) + (uVar10 & 1) + (uVar11 & 1) + (uVar12 & 1) + (uVar13 & 1) + (uVar14 & 1) +
      (uVar15 & 1) + (uVar16 & 1) == param_2)) {
    return;
  }
  uVar3 = param_3;
  if (param_3 <= uVar21) {
    uVar3 = uVar21;
  }
  uVar4 = param_3;
  if (uVar21 <= param_3) {
    uVar4 = uVar21;
  }
  local_e0 = (code *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_100 = 0;
  local_f8 = 0x100000000;
  local_f0 = (undefined1 *)0x0;
  local_e8 = (code *)0x0;
  lVar19 = FUN_00a0e910(auStack_70,*(undefined8 *)(param_1 + 0x5f0));
  if (lVar19 == 0) {
    pcVar18 = (code *)0x0;
  }
  else {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    pcVar18 = local_e8;
  }
  local_100 = CONCAT44(uVar21,param_2);
  local_f8 = CONCAT44((uVar3 - uVar4) * 2,param_3);
  if (pcVar18 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar18)(local_d0);
  }
  local_f0 = &LAB_00a0f1c0;
  local_e8 = FUN_00a0f1d0;
  local_e0 = FUN_00a0f1e0;
  local_d8 = &LAB_00a0f1f0;
  *(undefined8 *)(lVar19 + 0x88) = local_f8;
  *(undefined8 *)(lVar19 + 0x80) = local_100;
  pcVar18 = *(code **)(lVar19 + 0x98);
  local_d0[0] = param_1;
  if (pcVar18 != (code *)0x0) {
    *(undefined8 *)(lVar19 + 0xa0) = 0;
    *(undefined8 *)(lVar19 + 0xa8) = 0;
    *(undefined8 *)(lVar19 + 0x90) = 0;
    *(undefined8 *)(lVar19 + 0x98) = 0;
    (*pcVar18)(lVar19 + 0xb0);
    if (local_e0 == (code *)0x0) goto LAB_00a0e0dc;
  }
  (*local_e0)(local_d0,lVar19 + 0xb0);
  *(undefined1 **)(lVar19 + 0xa8) = local_d8;
  *(code **)(lVar19 + 0x98) = local_e8;
  *(code **)(lVar19 + 0xa0) = local_e0;
  *(undefined8 *)(lVar19 + 0x90) = local_f0;
LAB_00a0e0dc:
  iVar2 = *(int *)(lVar19 + 0x8c);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(lVar19 + 0x8c) = iVar2;
  *(undefined4 *)(lVar19 + 0x110) = 0;
  uVar20 = *(undefined8 *)(param_1 + 0x5f8);
  local_108 = lVar19;
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  FUN_015f6330(uVar20,&local_108,0);
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
    local_108 = 0;
  }
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  pcVar18 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar18)(local_d0);
  }
  return;
}


