/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052e030; name: FUN_0052e030
 */


undefined8
FUN_0052e030(long param_1,int *param_2,float *param_3,float *param_4,undefined4 *param_5,
            long param_6,float *param_7,undefined8 *param_8,undefined8 *param_9,byte param_10,
            byte param_11)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  
  uVar1 = *(uint *)(param_1 + 0x8c8);
  iVar8 = *(int *)(param_1 + 0x6a4);
  if ((((*(char *)(param_1 + 0x106c) != '\0') && (*(char *)(param_1 + 0x59c) != '\0')) &&
      (*(char *)(param_1 + 0x599) != '\0')) &&
     ((uVar4 = iVar8 - 2, uVar4 < 0xd && ((0x1155U >> (ulong)(uVar4 & 0x1f) & 1) != 0)))) {
    iVar8 = *(int *)(&DAT_01d6af20 + (long)(int)uVar4 * 4);
  }
  if (((*(char *)(param_1 + 0x106b) != '\0') && (uVar4 = iVar8 - 2, uVar4 < 0xd)) &&
     ((0x1155U >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
    iVar8 = *(int *)(&DAT_01d6af20 + (long)(int)uVar4 * 4);
  }
  fVar14 = *(float *)(param_1 + 0x8c4);
  uVar7 = FUN_00534620(param_1);
  uVar12 = 0x3f800000;
  if ((uVar7 & 1) == 0) {
    uVar12 = 0;
  }
  fVar11 = *(float *)(param_1 + 0x8d0);
  fVar13 = *(float *)(param_1 + 0x8cc);
  if ((*(char *)(param_1 + 0x59d) != '\0') && (*(char *)(param_1 + 0x106b) == '\0')) {
    if (((uVar1 & 0xffff0000) == 0x70000) && (*(char *)(param_1 + 0x106c) != '\0')) {
      iVar8 = 0xf;
    }
    fVar13 = fVar13 / fVar11;
    fVar11 = 1.0;
  }
  cVar2 = *(char *)(param_1 + 0xb34);
  cVar3 = *(char *)(param_1 + 0xb35);
  puVar10 = (undefined8 *)0x0;
  if (cVar2 != '\0') {
    puVar10 = (undefined8 *)(param_1 + 0x9b4);
  }
  puVar9 = (undefined8 *)(param_1 + 0x9f4);
  if (cVar3 == '\0') {
    puVar9 = (undefined8 *)0x0;
  }
  if (((DAT_0275cd08 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0275cd08), iVar6 != 0)) {
    __cxa_guard_release(&DAT_0275cd08);
  }
  FUN_00529d00(&local_d8,param_1,1);
  if (((((((local_d8 != 1.0) || (fStack_d4 != 0.0)) || (local_d0 != 0.0)) ||
        (((local_cc != 0.0 || (local_c8 != 0.0)) ||
         ((fStack_c4 != 1.0 || ((local_c0 != 0.0 || (local_bc != 0.0)))))))) || (local_b8 != 0.0))
      || (((fStack_b4 != 0.0 || (local_b0 != 1.0)) || (local_ac != 0.0)))) ||
     (((local_a8 != 0.0 || (fStack_a4 != 0.0)) || ((local_a0 != 0.0 || (local_9c != 1.0)))))) {
    DAT_0275ceb8 = CONCAT44(fStack_c4,local_c8);
    DAT_0275cec0 = CONCAT44(local_bc,local_c0);
    DAT_0275cea8 = CONCAT44(fStack_d4,local_d8);
    DAT_0275ceb0 = CONCAT44(local_cc,local_d0);
    DAT_0275ced8 = CONCAT44(fStack_a4,local_a8);
    DAT_0275cee0 = CONCAT44(local_9c,local_a0);
    DAT_0275cec8 = CONCAT44(fStack_b4,local_b8);
    DAT_0275ced0 = CONCAT44(local_ac,local_b0);
    if (cVar3 != '\0') {
      FUN_00515cb0(&local_118,puVar9,&DAT_0275cea8);
      DAT_0275ceb8 = local_108;
      DAT_0275cec0 = uStack_100;
      DAT_0275cea8 = local_118;
      DAT_0275ceb0 = uStack_110;
      DAT_0275ced8 = local_e8;
      DAT_0275cee0 = uStack_e0;
      DAT_0275cec8 = local_f8;
      DAT_0275ced0 = uStack_f0;
    }
    puVar9 = &DAT_0275cea8;
  }
  if (((DAT_0275cd10 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0275cd10), iVar6 != 0)) {
    __cxa_guard_release(&DAT_0275cd10);
  }
  puVar5 = PTR_DAT_02713a80;
  fVar16 = fVar11;
  if (((*(char *)(param_1 + 0x96c) == '\0') && (*(int *)PTR_DAT_02713a80 == 0)) ||
     ((param_10 & 1) != 0)) {
    cVar2 = *(char *)(param_1 + 0x59c);
    fVar15 = fVar14;
    goto joined_r0x0052e2f0;
  }
  if (*(char *)(param_1 + 0x96c) == '\0') {
    iVar6 = 1;
    if ((param_11 & 1) != 0) goto LAB_0052e35c;
LAB_0052e388:
    fVar16 = 1.0;
    fVar15 = 1.0;
    if (iVar6 != 1) {
      if (*(float *)(param_1 + 0x8c4) <= 0.0) {
        fVar15 = 1.0;
      }
      else {
        fVar15 = fVar14 / DAT_01d4c570;
      }
    }
    iVar8 = 0;
    fVar13 = fVar13 / fVar11;
    fVar11 = 1.0;
    if (*(float *)(param_1 + 0xb84) != *(float *)(param_1 + 0xba4)) goto LAB_0052e460;
LAB_0052e3cc:
    fVar16 = fVar11;
    if (((*(float *)(param_1 + 0xb88) != *(float *)(param_1 + 0xba8)) ||
        (*(float *)(param_1 + 0xb8c) != *(float *)(param_1 + 0xbac))) ||
       ((*(float *)(param_1 + 0xb90) != *(float *)(param_1 + 0xbb0) ||
        ((((*(float *)(param_1 + 0xb94) != *(float *)(param_1 + 0xbb4) ||
           (*(float *)(param_1 + 0xb98) != *(float *)(param_1 + 3000))) ||
          (*(float *)(param_1 + 0xb9c) != *(float *)(param_1 + 0xbbc))) ||
         (*(float *)(param_1 + 0xba0) != *(float *)(param_1 + 0xbc0))))))) goto LAB_0052e460;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x97c);
    if (iVar6 == -1) {
      iVar6 = 1;
    }
    if ((param_11 & 1) == 0) goto LAB_0052e388;
LAB_0052e35c:
    if ((iVar6 != 1) || (*(float *)(param_1 + 0x8c4) <= 0.0)) {
      fVar15 = 1.0;
    }
    else {
      fVar15 = fVar14 / DAT_01d4c570;
    }
    if (*(float *)(param_1 + 0xb84) == *(float *)(param_1 + 0xba4)) goto LAB_0052e3cc;
LAB_0052e460:
    if (cVar2 == '\0') {
      DAT_0275cef0._4_4_ = 0;
      DAT_0275cef8._0_4_ = 0;
      DAT_0275cee8._4_4_ = 0;
      DAT_0275cef0._0_4_ = 0;
      DAT_0275cf00 = 0;
      DAT_0275cf08 = 0;
      DAT_0275cf18._4_4_ = 0;
      DAT_0275cf20._0_4_ = 0;
      DAT_0275cf10._4_4_ = 0;
      DAT_0275cf18._0_4_ = 0;
      DAT_0275cf20._4_4_ = 0x3f800000;
      DAT_0275cf10._0_4_ = 0x3f800000;
      DAT_0275cef8._4_4_ = 0x3f800000;
      DAT_0275cee8._0_4_ = 0x3f800000;
    }
    else if (puVar10 != &DAT_0275cee8) {
      DAT_0275cf00 = puVar10[3];
      DAT_0275cef8._0_4_ = (undefined4)puVar10[2];
      DAT_0275cef8._4_4_ = (undefined4)((ulong)puVar10[2] >> 0x20);
      DAT_0275cee8._0_4_ = (undefined4)*puVar10;
      DAT_0275cee8._4_4_ = (undefined4)((ulong)*puVar10 >> 0x20);
      DAT_0275cef0._0_4_ = (undefined4)puVar10[1];
      DAT_0275cef0._4_4_ = (undefined4)((ulong)puVar10[1] >> 0x20);
      DAT_0275cf08 = puVar10[4];
      DAT_0275cf18._0_4_ = (undefined4)puVar10[6];
      DAT_0275cf18._4_4_ = (undefined4)((ulong)puVar10[6] >> 0x20);
      DAT_0275cf20._0_4_ = (undefined4)puVar10[7];
      DAT_0275cf20._4_4_ = (undefined4)((ulong)puVar10[7] >> 0x20);
      DAT_0275cf10._0_4_ = (undefined4)puVar10[5];
      DAT_0275cf10._4_4_ = (undefined4)((ulong)puVar10[5] >> 0x20);
    }
    local_158 = *(undefined8 *)(param_1 + 0x1094);
    uStack_150 = *(undefined8 *)(param_1 + 0x109c);
    local_148 = *(undefined8 *)(param_1 + 0x10a4);
    uStack_140 = *(undefined8 *)(param_1 + 0x10ac);
    local_138 = *(undefined8 *)(param_1 + 0x10b4);
    uStack_130 = *(undefined8 *)(param_1 + 0x10bc);
    local_128 = *(undefined8 *)(param_1 + 0x10c4);
    uStack_120 = *(undefined8 *)(param_1 + 0x10cc);
    FUN_005156a0(&local_118,&local_158);
    puVar10 = &DAT_0275cee8;
    FUN_00515cb0(&DAT_0275cee8,&DAT_0275cee8,&local_118);
  }
  cVar2 = *(char *)(param_1 + 0x59c);
joined_r0x0052e2f0:
  fVar14 = fVar15;
  if (((cVar2 == '\0') && (*(char *)(param_1 + 0x96c) == '\0')) &&
     (((*(int *)puVar5 == 0 && (((param_10 & 1) == 0 && (*(int *)(param_1 + 0x9ac) == 1)))) &&
      (fVar14 = 1.0, fVar15 != 0.0)))) {
    fVar14 = fVar15 / DAT_01d4c570;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar8;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar13;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar16;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar12;
  }
  if (param_6 != 0) {
    *(bool *)param_6 = fVar14 != 1.0;
  }
  if (param_7 != (float *)0x0) {
    *param_7 = fVar14;
  }
  if (param_8 != (undefined8 *)0x0) {
    *param_8 = puVar10;
  }
  if (param_9 != (undefined8 *)0x0) {
    *param_9 = puVar9;
  }
  return 0;
}


