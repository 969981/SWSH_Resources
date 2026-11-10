/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00831780; name: FUN_00831780
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00831780(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_d8 [8];
  byte local_d0;
  undefined7 uStack_cf;
  undefined8 local_c8;
  undefined1 *local_c0;
  ulong local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar2 = (int)((ulong)(param_4 - *(long *)(*(long *)(param_4 + 0x10) + 0x40)) >> 4) * -0x55555555;
  uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  iVar1 = *(int *)(param_2 + *(int *)((long)param_1 + 0x2c) + uVar15);
  iVar10 = *(int *)(param_3 + *(int *)((long)param_1 + 0x2c) + uVar15);
  local_98 = 0;
  local_90 = (undefined1 *)0x0;
  local_a0 = 0;
  if (iVar1 == 0) {
    lVar4 = 0;
joined_r0x00831888:
    uVar6 = 0;
    goto joined_r0x00831978;
  }
  lVar4 = FUN_007e3b90(param_1[1],iVar1);
  puVar3 = PTR_DAT_02716e20;
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)(lVar4 + 0x3c) * 4)) {
  case 1:
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      iVar9 = (int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39;
LAB_00832678:
      piVar14 = (int *)(param_1[4] + (long)iVar9 * 4);
      lVar5 = param_2;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar15 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar4 + 0x38)) {
        iVar9 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_00832678;
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    local_54 = *(undefined4 *)(lVar5 + *piVar14);
    break;
  case 2:
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      iVar9 = (int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39;
LAB_008326a8:
      piVar14 = (int *)(param_1[4] + (long)iVar9 * 4);
      lVar5 = param_2;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar15 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar4 + 0x38)) {
        iVar9 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_008326a8;
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    local_68 = *(undefined8 *)(lVar5 + *piVar14);
    break;
  case 3:
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      iVar9 = (int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39;
LAB_008326d8:
      piVar14 = (int *)(param_1[4] + (long)iVar9 * 4);
      lVar5 = param_2;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar15 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar4 + 0x38)) {
        iVar9 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_008326d8;
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    local_58 = *(undefined4 *)(lVar5 + *piVar14);
    break;
  case 4:
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      iVar9 = (int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39;
LAB_00832708:
      piVar14 = (int *)(param_1[4] + (long)iVar9 * 4);
      lVar5 = param_2;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar15 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar4 + 0x38)) {
        iVar9 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_00832708;
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    local_70 = *(undefined8 *)(lVar5 + *piVar14);
    break;
  case 5:
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      iVar9 = (int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39;
LAB_00832738:
      piVar14 = (int *)(param_1[4] + (long)iVar9 * 4);
      lVar5 = param_2;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar15 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar4 + 0x38)) {
        iVar9 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_00832738;
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    local_80 = *(undefined8 *)(lVar5 + *piVar14);
    goto joined_r0x00832af0;
  case 6:
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      iVar9 = (int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39;
LAB_00832768:
      piVar14 = (int *)(param_1[4] + (long)iVar9 * 4);
      lVar5 = param_2;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar15 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar4 + 0x38)) {
        iVar9 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_00832768;
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    local_74 = *(undefined4 *)(lVar5 + *piVar14);
    goto joined_r0x00832af0;
  case 7:
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      iVar9 = (int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39;
LAB_00832798:
      piVar14 = (int *)(param_1[4] + (long)iVar9 * 4);
      lVar5 = param_2;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar15 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar4 + 0x38)) {
        iVar9 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_00832798;
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    local_84[0] = *(undefined1 *)(lVar5 + *piVar14);
    goto joined_r0x00832af0;
  case 8:
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 == 0) {
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      iVar9 = (int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39;
LAB_008327c8:
      piVar14 = (int *)(param_1[4] + (long)iVar9 * 4);
      lVar5 = param_2;
    }
    else {
      lVar5 = lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40) >> 4;
      uVar15 = lVar5 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar5 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar4 + 0x38)) {
        iVar9 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_008327c8;
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar4 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    local_88 = *(undefined4 *)(lVar5 + *piVar14);
joined_r0x00832af0:
    uVar6 = 0;
    goto joined_r0x00831978;
  case 9:
    (**(code **)(*param_1 + 0xc0))(&local_d0,param_1,param_2,lVar4);
    if ((local_a0 & 1) != 0) {
      *local_90 = 0;
      local_98 = 0;
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    local_a0 = CONCAT71(uStack_cf,local_d0);
    local_98 = local_c8;
    local_90 = local_c0;
    goto joined_r0x00831888;
  case 10:
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1,param_2,lVar4,0);
    goto joined_r0x00831978;
  default:
    FUN_00801270(&local_d0,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
                 ,0x230);
    uVar6 = FUN_00800f30(&local_d0,"Unimplemented type: ");
    uVar6 = FUN_00801220(uVar6,*(undefined4 *)(puVar3 + (ulong)*(uint *)(lVar4 + 0x3c) * 4));
    FUN_00800fa0(&local_68,uVar6);
    FUN_00801290(&local_d0);
    uVar6 = 0;
    goto joined_r0x00831978;
  }
  uVar6 = 0;
joined_r0x00831978:
  if (iVar10 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2,param_4);
    puVar3 = PTR_DAT_02716e20;
    goto joined_r0x00832c58;
  }
  lVar5 = FUN_007e3b90(param_1[1],iVar10);
  puVar3 = PTR_DAT_02716e20;
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)(lVar5 + 0x3c) * 4)) {
  case 1:
    lVar11 = *(long *)(lVar5 + 0x58);
    if (lVar11 == 0) {
      if (*(char *)(lVar5 + 0x44) == '\0') {
LAB_0083244c:
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else {
        lVar11 = *(long *)(lVar5 + 0x60);
        if (lVar11 != 0) goto LAB_008322a0;
LAB_0083214c:
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
LAB_00832454:
      iVar10 = (int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39;
      goto LAB_0083246c;
    }
    lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
    uVar15 = lVar11 * -0x5555555555555555;
    iVar10 = (int)uVar15;
    if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar5 + 0x38))
    goto LAB_00831e74;
    lVar11 = param_1[3];
    lVar13 = param_1[4];
    if (*(char *)(lVar5 + 0x44) == '\0') {
LAB_0083247c:
      plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
    }
    else {
      lVar16 = *(long *)(lVar5 + 0x60);
      if (lVar16 != 0) goto LAB_00832444;
LAB_00831920:
      plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
    }
LAB_00832484:
    piVar14 = (int *)(lVar13 + ((long)((ulong)(uint)((int)((ulong)(lVar5 - *plVar12) >> 4) *
                                                    0x38e38e39) << 0x20) >> 0x1e));
    goto LAB_008324a4;
  case 2:
    lVar11 = *(long *)(lVar5 + 0x58);
    if (lVar11 == 0) {
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      iVar10 = (int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39;
LAB_008327f8:
      piVar14 = (int *)(param_1[4] + (long)iVar10 * 4);
      lVar11 = param_3;
    }
    else {
      lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
      uVar15 = lVar11 * -0x5555555555555555;
      if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar5 + 0x38)) {
        iVar10 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_008327f8;
      }
      lVar11 = param_1[3];
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    FUN_00832e80(param_1,param_2,lVar5,lVar11 + *piVar14);
    puVar3 = PTR_DAT_02716e20;
    break;
  case 3:
    lVar11 = *(long *)(lVar5 + 0x58);
    if (lVar11 == 0) {
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      iVar10 = (int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39;
LAB_00832828:
      piVar14 = (int *)(param_1[4] + (long)iVar10 * 4);
      lVar11 = param_3;
    }
    else {
      lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
      uVar15 = lVar11 * -0x5555555555555555;
      if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar5 + 0x38)) {
        iVar10 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_00832828;
      }
      lVar11 = param_1[3];
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    FUN_00833050(param_1,param_2,lVar5,lVar11 + *piVar14);
    puVar3 = PTR_DAT_02716e20;
    break;
  case 4:
    lVar11 = *(long *)(lVar5 + 0x58);
    if (lVar11 == 0) {
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      iVar10 = (int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39;
LAB_00832858:
      piVar14 = (int *)(param_1[4] + (long)iVar10 * 4);
      lVar11 = param_3;
    }
    else {
      lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
      uVar15 = lVar11 * -0x5555555555555555;
      if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar5 + 0x38)) {
        iVar10 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_00832858;
      }
      lVar11 = param_1[3];
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    FUN_00833220(param_1,param_2,lVar5,lVar11 + *piVar14);
    puVar3 = PTR_DAT_02716e20;
    break;
  case 5:
    lVar11 = *(long *)(lVar5 + 0x58);
    if (lVar11 == 0) {
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      iVar10 = (int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39;
LAB_00832888:
      piVar14 = (int *)(param_1[4] + (long)iVar10 * 4);
      lVar11 = param_3;
    }
    else {
      lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
      uVar15 = lVar11 * -0x5555555555555555;
      if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar5 + 0x38)) {
        iVar10 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_00832888;
      }
      lVar11 = param_1[3];
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    FUN_008335c0(param_1,param_2,lVar5,lVar11 + *piVar14);
    puVar3 = PTR_DAT_02716e20;
    break;
  case 6:
    lVar11 = *(long *)(lVar5 + 0x58);
    if (lVar11 == 0) {
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      iVar10 = (int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39;
LAB_008328b8:
      piVar14 = (int *)(param_1[4] + (long)iVar10 * 4);
      lVar11 = param_3;
    }
    else {
      lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
      uVar15 = lVar11 * -0x5555555555555555;
      if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar5 + 0x38)) {
        iVar10 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_008328b8;
      }
      lVar11 = param_1[3];
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    FUN_008333f0(param_1,param_2,lVar5,lVar11 + *piVar14);
    puVar3 = PTR_DAT_02716e20;
    break;
  case 7:
    lVar11 = *(long *)(lVar5 + 0x58);
    if (lVar11 == 0) {
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      iVar10 = (int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39;
LAB_008328e8:
      piVar14 = (int *)(param_1[4] + (long)iVar10 * 4);
      lVar11 = param_3;
    }
    else {
      lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
      uVar15 = lVar11 * -0x5555555555555555;
      if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                  (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar11 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(lVar5 + 0x38)) {
        iVar10 = *(int *)(param_1[1] + 0x2c) + (int)uVar15;
        goto LAB_008328e8;
      }
      lVar11 = param_1[3];
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar12 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar12 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      piVar14 = (int *)(param_1[4] +
                       ((long)((ulong)(uint)((int)((ulong)(lVar5 - *plVar12) >> 4) * 0x38e38e39) <<
                              0x20) >> 0x1e));
    }
    FUN_00833790(param_1,param_2,lVar5,lVar11 + *piVar14);
    puVar3 = PTR_DAT_02716e20;
    break;
  case 8:
    lVar11 = *(long *)(lVar5 + 0x58);
    if (lVar11 == 0) {
      if (*(char *)(lVar5 + 0x44) == '\0') goto LAB_0083244c;
      lVar11 = *(long *)(lVar5 + 0x60);
      if (lVar11 == 0) goto LAB_0083214c;
LAB_008322a0:
      plVar12 = (long *)(lVar11 + 0x80);
      goto LAB_00832454;
    }
    lVar11 = lVar11 - *(long *)(*(long *)(lVar11 + 0x10) + 0x40) >> 4;
    uVar15 = lVar11 * -0x5555555555555555;
    iVar10 = (int)uVar15;
    if (*(int *)(param_3 + *(int *)((long)param_1 + 0x2c) +
                (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar11 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(lVar5 + 0x38)) {
      lVar11 = param_1[3];
      lVar13 = param_1[4];
      if (*(char *)(lVar5 + 0x44) == '\0') goto LAB_0083247c;
      lVar16 = *(long *)(lVar5 + 0x60);
      if (lVar16 == 0) goto LAB_00831920;
LAB_00832444:
      plVar12 = (long *)(lVar16 + 0x80);
      goto LAB_00832484;
    }
LAB_00831e74:
    iVar10 = *(int *)(param_1[1] + 0x2c) + iVar10;
LAB_0083246c:
    piVar14 = (int *)(param_1[4] + (long)iVar10 * 4);
    lVar11 = param_3;
LAB_008324a4:
    FUN_00832cb0(param_1,param_2,lVar5,lVar11 + *piVar14);
    puVar3 = PTR_DAT_02716e20;
    break;
  case 9:
    (**(code **)(*param_1 + 0xc0))(&local_d0,param_1,param_3,lVar5);
    (**(code **)(*param_1 + 0x120))(param_1,param_2,lVar5,&local_d0);
    puVar3 = PTR_DAT_02716e20;
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
      puVar3 = PTR_DAT_02716e20;
    }
    break;
  case 10:
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1,param_3,lVar5,0);
    (**(code **)(*param_1 + 0x140))(param_1,param_2,uVar7,lVar5);
    puVar3 = PTR_DAT_02716e20;
    break;
  default:
    FUN_00801270(&local_d0,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
                 ,0x252);
    uVar7 = FUN_00800f30(&local_d0,"Unimplemented type: ");
    uVar7 = FUN_00801220(uVar7,*(undefined4 *)(puVar3 + (ulong)*(uint *)(lVar5 + 0x3c) * 4));
    FUN_00800fa0(auStack_d8,uVar7);
    FUN_00801290(&local_d0);
    puVar3 = PTR_DAT_02716e20;
  }
joined_r0x00832c58:
  PTR_DAT_02716e20 = puVar3;
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_3,param_4);
    goto joined_r0x00831fec;
  }
  switch(*(undefined4 *)((long)puVar3 + (ulong)*(uint *)(lVar4 + 0x3c) * 4)) {
  case 1:
    puVar8 = &local_54;
    goto LAB_008320b8;
  case 2:
    FUN_00832e80(param_1,param_3,lVar4,&local_68);
    break;
  case 3:
    FUN_00833050(param_1,param_3,lVar4,&local_58);
    break;
  case 4:
    FUN_00833220(param_1,param_3,lVar4,&local_70);
    break;
  case 5:
    FUN_008335c0(param_1,param_3,lVar4,&local_80);
    break;
  case 6:
    FUN_008333f0(param_1,param_3,lVar4,&local_74);
    break;
  case 7:
    FUN_00833790(param_1,param_3,lVar4,local_84);
    break;
  case 8:
    puVar8 = &local_88;
LAB_008320b8:
    FUN_00832cb0(param_1,param_3,lVar4,puVar8);
joined_r0x008320f4:
    if ((local_a0 & 1) == 0) {
      return;
    }
    goto LAB_008324e0;
  case 9:
    (**(code **)(*param_1 + 0x120))(param_1,param_3,lVar4,&local_a0);
    goto joined_r0x008320f4;
  case 10:
    (**(code **)(*param_1 + 0x140))(param_1,param_3,uVar6,lVar4);
    break;
  default:
    FUN_00801270(&local_d0,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
                 ,0x272);
    uVar6 = FUN_00800f30(&local_d0,"Unimplemented type: ");
    uVar6 = FUN_00801220(uVar6,*(undefined4 *)((long)puVar3 + (ulong)*(uint *)(lVar4 + 0x3c) * 4));
    FUN_00800fa0(auStack_d8,uVar6);
    FUN_00801290(&local_d0);
  }
joined_r0x00831fec:
  if ((local_a0 & 1) != 0) {
LAB_008324e0:
    operator_delete(local_90);
  }
  return;
}


