/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f6b70; name: FUN_004f6b70
 */


void FUN_004f6b70(undefined8 *param_1,long *param_2,long *param_3,long param_4,long param_5,
                 int *param_6,uint param_7)

{
  uint uVar1;
  void *__src;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *__src_00;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar4 = *(ushort *)((long)param_2 + 0x12);
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)(param_1 + 4);
  __src_00 = (undefined8 *)*param_2;
  uVar20 = (uint)uVar4;
  if (uVar4 != 0) {
    fVar33 = *(float *)(param_4 + 4);
    fVar35 = *(float *)(param_4 + 8);
    fVar38 = 1.0 / (float)uVar4;
    fVar36 = *(float *)(param_4 + 0x10);
    fVar37 = *(float *)(param_4 + 0x14);
    fVar39 = (*(float *)(param_5 + 0x10) - fVar36) * fVar38;
    fVar45 = (*(float *)(param_5 + 8) - fVar35) * fVar38;
    fVar54 = (*(float *)(param_5 + 0x14) - fVar37) * fVar38;
    fVar38 = (*(float *)(param_5 + 4) - fVar33) * fVar38;
    fVar40 = fVar38 + fVar33;
    fVar41 = fVar40 + fVar38;
    fVar65 = fVar45 + fVar35;
    fVar57 = fVar38 * 4.0;
    fVar38 = fVar41 + fVar38;
    fVar62 = fVar45 * 4.0;
    fVar58 = fVar65 + fVar45;
    fVar45 = fVar58 + fVar45;
    fVar42 = fVar39 + fVar36;
    fVar46 = fVar54 + fVar37;
    fVar43 = fVar42 + fVar39;
    fVar59 = fVar46 + fVar54;
    fVar44 = fVar43 + fVar39;
    fVar47 = fVar59 + fVar54;
    puVar18 = (undefined8 *)((long)__src_00 + (ulong)*(ushort *)(param_2 + 2) * 4);
    fVar39 = fVar39 * 4.0;
    fVar54 = fVar54 * 4.0;
    uVar10 = (ulong)*(uint *)((long)param_1 + 0x24);
    uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
    puVar11 = (undefined8 *)*param_3;
    uVar19 = uVar2 - *(uint *)((long)param_1 + 0xc);
    uVar5 = uVar3 - *(uint *)((long)param_1 + 0x24);
    puVar14 = (undefined8 *)((long)puVar11 + (ulong)*(ushort *)(param_3 + 2) * 4);
    puVar16 = (undefined8 *)(*(long *)param_1[3] + uVar10 * 4);
    puVar17 = (undefined8 *)(*(long *)*param_1 + uVar9 * 4);
    if (uVar5 <= uVar19) {
      uVar19 = uVar5;
    }
    uVar5 = uVar20;
    do {
      uVar6 = uVar5;
      if (uVar19 <= uVar5) {
        uVar6 = uVar19;
      }
      uVar19 = uVar6 >> 2;
      if (uVar19 != 0) {
        uVar8 = (ulong)(uVar19 - 1);
        puVar12 = puVar11;
        puVar13 = puVar14;
        puVar15 = puVar16;
        puVar22 = puVar17;
        puVar23 = __src_00;
        puVar24 = puVar18;
        do {
          uVar52 = puVar22[1];
          uVar49 = *puVar22;
          uVar19 = uVar19 - 1;
          uVar56 = puVar15[1];
          uVar55 = *puVar15;
          uVar61 = puVar23[1];
          uVar60 = *puVar23;
          uVar64 = puVar24[1];
          uVar63 = *puVar24;
          fVar66 = (float)uVar49 * fVar33;
          fVar50 = (float)((ulong)uVar49 >> 0x20);
          fVar67 = fVar50 * fVar40;
          fVar68 = (float)uVar52 * fVar41;
          fVar53 = (float)((ulong)uVar52 >> 0x20);
          fVar69 = fVar53 * fVar38;
          fVar25 = (float)uVar55 * fVar37;
          fVar28 = (float)((ulong)uVar55 >> 0x20);
          fVar27 = fVar28 * fVar46;
          fVar29 = (float)uVar56 * fVar59;
          fVar32 = (float)((ulong)uVar56 >> 0x20);
          fVar31 = fVar32 * fVar47;
          puVar12[1] = uVar52;
          *puVar12 = uVar49;
          fVar48 = (float)uVar49 * fVar35;
          fVar50 = fVar50 * fVar65;
          fVar51 = (float)uVar52 * fVar58;
          fVar53 = fVar53 * fVar45;
          fVar26 = (float)uVar55 * fVar36;
          fVar28 = fVar28 * fVar42;
          fVar30 = (float)uVar56 * fVar43;
          fVar32 = fVar32 * fVar44;
          fVar33 = fVar33 + fVar57;
          fVar40 = fVar40 + fVar57;
          fVar41 = fVar41 + fVar57;
          fVar38 = fVar38 + fVar57;
          fVar35 = fVar35 + fVar62;
          fVar65 = fVar65 + fVar62;
          fVar58 = fVar58 + fVar62;
          fVar45 = fVar45 + fVar62;
          fVar36 = fVar36 + fVar39;
          fVar42 = fVar42 + fVar39;
          fVar43 = fVar43 + fVar39;
          fVar44 = fVar44 + fVar39;
          fVar37 = fVar37 + fVar54;
          fVar46 = fVar46 + fVar54;
          fVar59 = fVar59 + fVar54;
          fVar47 = fVar47 + fVar54;
          puVar13[1] = uVar56;
          *puVar13 = uVar55;
          puVar23[1] = CONCAT44(fVar69 + fVar31 + (float)((ulong)uVar61 >> 0x20),
                                fVar68 + fVar29 + (float)uVar61);
          *puVar23 = CONCAT44(fVar67 + fVar27 + (float)((ulong)uVar60 >> 0x20),
                              fVar66 + fVar25 + (float)uVar60);
          puVar24[1] = CONCAT44(fVar53 + fVar32 + (float)((ulong)uVar64 >> 0x20),
                                fVar51 + fVar30 + (float)uVar64);
          *puVar24 = CONCAT44(fVar50 + fVar28 + (float)((ulong)uVar63 >> 0x20),
                              fVar48 + fVar26 + (float)uVar63);
          puVar12 = puVar12 + 2;
          puVar13 = puVar13 + 2;
          puVar15 = puVar15 + 2;
          puVar22 = puVar22 + 2;
          puVar23 = puVar23 + 2;
          puVar24 = puVar24 + 2;
        } while (uVar19 != 0);
        puVar16 = puVar16 + uVar8 * 2 + 2;
        puVar11 = puVar11 + uVar8 * 2 + 2;
        puVar17 = puVar17 + uVar8 * 2 + 2;
        puVar14 = puVar14 + uVar8 * 2 + 2;
        __src_00 = __src_00 + uVar8 * 2 + 2;
        puVar18 = puVar18 + uVar8 * 2 + 2;
      }
      uVar19 = (int)uVar9 + uVar6;
      uVar9 = (ulong)uVar19;
      uVar1 = uVar6 + (int)uVar10;
      uVar10 = (ulong)uVar1;
      if (uVar19 == uVar2) {
        puVar17 = *(undefined8 **)*param_1;
        uVar9 = 0;
      }
      if (uVar1 == uVar3) {
        puVar16 = *(undefined8 **)param_1[3];
        uVar10 = 0;
      }
      uVar5 = uVar5 - uVar6;
      uVar19 = uVar2 - (int)uVar9;
      uVar6 = uVar3 - (int)uVar10;
      if (uVar6 <= uVar19) {
        uVar19 = uVar6;
      }
    } while (uVar5 != 0);
    __src_00 = (undefined8 *)*param_2;
  }
  __src = (void *)((long)__src_00 + (ulong)*(ushort *)(param_2 + 2) * 4);
  if (*param_6 != 0) {
    puVar17 = param_1 + 6;
    if ((param_7 & 1) != 0) {
      uVar34 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x32));
      FUN_004f6f00(uVar34,param_6[2],param_6[1],param_6[3],puVar17,*param_6 + -1);
      memcpy(param_1 + 0x1c,puVar17,0xa0);
    }
    FUN_004f7480(puVar17,__src_00,uVar20,0,auStack_68);
    FUN_004f7480(param_1 + 0x1c,__src,uVar20,0,auStack_70);
  }
  uVar19 = *(uint *)((long)param_1 + 0xc);
  uVar1 = uVar2 - uVar19;
  uVar6 = *(uint *)((long)param_1 + 0x24);
  uVar7 = uVar3 - uVar6;
  uVar21 = (uint)uVar4;
  uVar5 = uVar21;
  if (uVar1 < uVar20 || uVar1 == uVar21) {
    uVar5 = uVar1;
  }
  memcpy((void *)(*(long *)*param_1 + (ulong)uVar19 * 4),__src_00,(ulong)(uVar5 << 2));
  if (uVar1 < uVar21) {
    memcpy(*(void **)*param_1,(void *)((long)__src_00 + (ulong)uVar1 * 4),
           (ulong)((uVar21 - uVar1) * 4));
  }
  uVar5 = uVar21;
  if (uVar7 <= uVar21) {
    uVar5 = uVar7;
  }
  memcpy((void *)(*(long *)param_1[3] + (ulong)uVar6 * 4),__src,(ulong)(uVar5 << 2));
  if (uVar7 < uVar21) {
    memcpy(*(void **)param_1[3],(void *)((long)__src + (ulong)uVar7 * 4),
           (ulong)((uVar4 - uVar7) * 4));
  }
  uVar19 = uVar19 + uVar4;
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar19 / uVar2;
  }
  *(uint *)((long)param_1 + 0xc) = uVar19 - uVar5 * uVar2;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = (uVar6 + uVar20) / uVar3;
  }
  *(uint *)((long)param_1 + 0x24) = (uVar6 + uVar20) - uVar2 * uVar3;
  return;
}


