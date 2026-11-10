/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f9c50; name: FUN_003f9c50
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003f9c50(long param_1,ushort param_2,ushort param_3,uint param_4,int param_5,uint param_6,
                 long param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  undefined8 uVar10;
  ushort *puVar11;
  ushort *puVar12;
  long *plVar13;
  short sVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  ushort uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ushort *puVar29;
  ushort *puVar30;
  uint *puVar31;
  uint uVar32;
  char *pcVar33;
  char *pcVar34;
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
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar25 = param_2 | 0x20;
  if (param_5 == 0) {
    uVar25 = param_2;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    Hint_Prefetch(*(long *)(param_1 + 0x58),0,0,0);
  }
  puVar29 = *(ushort **)(param_1 + 0x48);
  if (puVar29 == (ushort *)0x0) {
    return;
  }
  lVar24 = *(long *)(puVar29 + 4);
  uVar23 = *(uint *)(param_1 + 0x40);
  lVar28 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  lVar21 = *(long *)(param_1 + 0x28);
  lVar22 = *(long *)(lVar21 + 0x10);
  lVar27 = *(long *)(lVar28 + 0x1048);
  lVar26 = *(long *)(param_1 + 0x30);
  if (lVar24 != lVar22) {
    lVar26 = lVar21;
    lVar21 = *(long *)(param_1 + 0x30);
  }
  if ((*puVar29 >> 1 & 1) == 0) {
    *puVar29 = *puVar29 | 2;
    uVar32 = *(uint *)(lVar27 + 0x10);
    local_80 = puVar29;
    if (uVar32 < (*(uint *)(lVar27 + 0x14) & 0x7fffffff)) {
      *(ushort **)(*(long *)(lVar27 + 8) + (ulong)uVar32 * 8) = puVar29;
      *(uint *)(lVar27 + 0x10) = uVar32 + 1;
    }
    else {
      FUN_003fbd10(lVar27 + 8,&local_80);
    }
    puVar29[2] = puVar29[2] + 1;
  }
  uVar32 = *(uint *)(lVar28 + 0x7c0);
  iVar5 = *(int *)(lVar28 + 0x7c4);
  puVar31 = *(uint **)(puVar29 + 0xc);
  if (puVar31 == (uint *)0x0) {
    lVar9 = FUN_003d0960();
    *(long *)(puVar29 + 0xc) = lVar9;
    puVar31 = (uint *)0x0;
    if (lVar9 != 0) {
      lVar19 = *(long *)(puVar29 + 4);
      *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar19 + 0x58);
      *(undefined4 *)(lVar9 + 0x14) = *(undefined4 *)(*(long *)(puVar29 + 8) + 0x58);
      uVar10 = FUN_003d9790(*(undefined8 *)(lVar19 + 0x50));
      *(undefined8 *)(lVar9 + 0x18) = uVar10;
      uVar10 = FUN_003d9790(*(undefined8 *)(*(long *)(puVar29 + 8) + 0x50));
      *(undefined8 *)(lVar9 + 0x20) = uVar10;
      lVar19 = *(long *)(*(long *)(puVar29 + 4) + 0x50);
      lVar20 = *(long *)(*(long *)(puVar29 + 8) + 0x50);
      *(undefined1 *)(lVar9 + 0x28) = *(undefined1 *)(lVar19 + 0xb);
      *(undefined1 *)(lVar9 + 0x29) = *(undefined1 *)(lVar20 + 0xb);
      *(undefined1 *)(lVar9 + 0x2a) = *(undefined1 *)(lVar19 + 0xe);
      *(undefined1 *)(lVar9 + 0x2b) = *(undefined1 *)(lVar20 + 0xe);
      puVar31 = *(uint **)(puVar29 + 0xc);
    }
  }
  uVar18 = puVar31[3];
  puVar31[3] = uVar32;
  if (uVar18 == uVar32) {
    uVar7 = *(ushort *)((long)puVar31 + 6);
    if (uVar7 == 0) goto LAB_003f9fe8;
    puVar11 = (ushort *)(*(long *)(lVar27 + 0x40) + (ulong)*puVar31);
    if (((uVar23 & 0x7000) == 0) || ((param_4 & 1) != 0)) goto joined_r0x003f9fd4;
    uVar8 = (ushort)puVar31[2];
    if (uVar8 == 0) {
      if (-1 < param_5) goto LAB_003fa098;
      goto joined_r0x003f9fd4;
    }
    if (param_5 <= (int)(uint)*puVar11) goto joined_r0x003f9fd4;
LAB_003fa098:
    iVar16 = 4;
    if ((uVar23 & 0x1000) != 0) {
      iVar16 = 0x38;
    }
    if ((uVar23 & 0x2000) != 0) {
      iVar16 = iVar16 + 0x34;
    }
    if ((uVar23 & 0x4000) != 0) {
      iVar16 = iVar16 + 0x3c;
    }
    iVar3 = iVar16 + 4;
    if (uVar8 != 0) {
      iVar3 = iVar16;
    }
    uVar18 = (uint)uVar8;
    uVar32 = iVar3 + uVar18 & 0xffff;
    puVar30 = (ushort *)((long)puVar31 + 10);
    puVar12 = puVar11;
    if ((*puVar30 >> 1 & 0x7ff0) < uVar32) {
      uVar17 = (uint)(ushort)puVar31[1];
      if (uVar17 <= uVar7) {
        uVar17 = (ushort)puVar31[1] + 1;
      }
      puVar12 = (ushort *)FUN_003d0700(lVar27,uVar17,uVar32,puVar31);
    }
    if (puVar12 == (ushort *)0x0) {
      *puVar30 = *puVar30 | 4;
      goto joined_r0x003f9fd4;
    }
    if (uVar18 == 0) {
      uVar18 = 4;
    }
    lVar9 = *(long *)(puVar29 + 4);
    lVar19 = *(long *)(puVar29 + 8);
    puVar1 = (undefined1 *)((long)puVar12 + (ulong)uVar18);
    *puVar12 = (ushort)param_5;
    *puVar1 = 3;
    pcVar34 = puVar1 + 4;
    *(ushort *)(puVar1 + 2) = uVar7;
    if ((uVar23 >> 0xd & 1) != 0) {
      pcVar33 = puVar1 + 0x38;
      *pcVar34 = '\x01';
      pcVar34 = pcVar33;
      if (param_5 == 0) {
        *puVar30 = *puVar30 | 8;
      }
      else {
        lVar20 = *(long *)(lVar9 + 0x50);
        if (*(char *)(lVar20 + 0xd) == '\0') {
          *(undefined8 *)(puVar1 + 8) = 0;
          *(undefined4 *)(puVar1 + 0x10) = 0;
          *(undefined8 *)(puVar1 + 0x20) = 0;
          *(undefined4 *)(puVar1 + 0x28) = 0;
          lVar20 = *(long *)(lVar19 + 0x50);
          cVar6 = *(char *)(lVar20 + 0xd);
        }
        else {
          *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(lVar20 + 0x50);
          *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(lVar20 + 0x54);
          *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(lVar20 + 0x58);
          *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(lVar20 + 0x60);
          *(undefined4 *)(puVar1 + 0x24) = *(undefined4 *)(lVar20 + 100);
          *(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)(lVar20 + 0x68);
          lVar20 = *(long *)(lVar19 + 0x50);
          cVar6 = *(char *)(lVar20 + 0xd);
        }
        if (cVar6 == '\0') {
          *(undefined8 *)(puVar1 + 0x14) = 0;
          *(undefined4 *)(puVar1 + 0x1c) = 0;
          *(undefined8 *)(puVar1 + 0x2c) = 0;
          *(undefined4 *)(puVar1 + 0x34) = 0;
        }
        else {
          *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(lVar20 + 0x50);
          *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(lVar20 + 0x54);
          *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(lVar20 + 0x58);
          *(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(lVar20 + 0x60);
          *(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)(lVar20 + 100);
          *(undefined4 *)(puVar1 + 0x34) = *(undefined4 *)(lVar20 + 0x68);
        }
      }
    }
    if ((uVar23 >> 0xc & 1) != 0) {
      *pcVar34 = '\0';
      lVar20 = *(long *)(lVar9 + 0x50);
      if (*(char *)(lVar20 + 0xd) == '\0') {
        pcVar34[4] = '\0';
        pcVar34[5] = '\0';
        pcVar34[6] = '\0';
        pcVar34[7] = '\0';
        pcVar34[8] = '\0';
        pcVar34[9] = '\0';
        pcVar34[10] = '\0';
        pcVar34[0xb] = '\0';
        pcVar34[0xc] = '\0';
        pcVar34[0xd] = '\0';
        pcVar34[0xe] = '\0';
        pcVar34[0xf] = '\0';
        pcVar34[0x1c] = '\0';
        pcVar34[0x1d] = '\0';
        pcVar34[0x1e] = '\0';
        pcVar34[0x1f] = '\0';
        pcVar34[0x20] = '\0';
        pcVar34[0x21] = '\0';
        pcVar34[0x22] = '\0';
        pcVar34[0x23] = '\0';
        pcVar34[0x24] = '\0';
        pcVar34[0x25] = '\0';
        pcVar34[0x26] = '\0';
        pcVar34[0x27] = '\0';
        lVar20 = *(long *)(lVar19 + 0x50);
        cVar6 = *(char *)(lVar20 + 0xd);
joined_r0x003fab7c:
        if (cVar6 != '\0') goto LAB_003fab80;
LAB_003fab50:
        pcVar34[0x10] = '\0';
        pcVar34[0x11] = '\0';
        pcVar34[0x12] = '\0';
        pcVar34[0x13] = '\0';
        pcVar34[0x14] = '\0';
        pcVar34[0x15] = '\0';
        pcVar34[0x16] = '\0';
        pcVar34[0x17] = '\0';
        pcVar34[0x18] = '\0';
        pcVar34[0x19] = '\0';
        pcVar34[0x1a] = '\0';
        pcVar34[0x1b] = '\0';
        pcVar34[0x28] = '\0';
        pcVar34[0x29] = '\0';
        pcVar34[0x2a] = '\0';
        pcVar34[0x2b] = '\0';
        pcVar34[0x2c] = '\0';
        pcVar34[0x2d] = '\0';
        pcVar34[0x2e] = '\0';
        pcVar34[0x2f] = '\0';
        pcVar34[0x30] = '\0';
        pcVar34[0x31] = '\0';
        pcVar34[0x32] = '\0';
        pcVar34[0x33] = '\0';
      }
      else {
        if (param_5 == 0) {
          *(undefined4 *)(pcVar34 + 4) = *(undefined4 *)(lVar20 + 0x50);
          *(undefined4 *)(pcVar34 + 8) = *(undefined4 *)(lVar20 + 0x54);
          *(undefined4 *)(pcVar34 + 0xc) = *(undefined4 *)(lVar20 + 0x58);
          *(undefined4 *)(pcVar34 + 0x1c) = *(undefined4 *)(lVar20 + 0x60);
          *(undefined4 *)(pcVar34 + 0x20) = *(undefined4 *)(lVar20 + 100);
          *(undefined4 *)(pcVar34 + 0x24) = *(undefined4 *)(lVar20 + 0x68);
          lVar20 = *(long *)(lVar19 + 0x50);
          cVar6 = *(char *)(lVar20 + 0xd);
          goto joined_r0x003fab7c;
        }
        FUN_00125840(&local_80,lVar9 + 0x60);
        *(undefined4 *)(pcVar34 + 4) = (undefined4)local_80;
        *(undefined4 *)(pcVar34 + 8) = local_80._4_4_;
        *(undefined4 *)(pcVar34 + 0xc) = local_78;
        *(undefined4 *)(pcVar34 + 0x1c) = local_70;
        *(undefined4 *)(pcVar34 + 0x20) = local_6c;
        *(undefined4 *)(pcVar34 + 0x24) = local_68;
        lVar20 = *(long *)(lVar19 + 0x50);
        if (*(char *)(lVar20 + 0xd) == '\0') goto LAB_003fab50;
LAB_003fab80:
        if ((param_5 == 0) || (*pcVar34 == '\x01')) {
          *(undefined4 *)(pcVar34 + 0x10) = *(undefined4 *)(lVar20 + 0x50);
          *(undefined4 *)(pcVar34 + 0x14) = *(undefined4 *)(lVar20 + 0x54);
          *(undefined4 *)(pcVar34 + 0x18) = *(undefined4 *)(lVar20 + 0x58);
          *(undefined4 *)(pcVar34 + 0x28) = *(undefined4 *)(lVar20 + 0x60);
          *(undefined4 *)(pcVar34 + 0x2c) = *(undefined4 *)(lVar20 + 100);
          local_68 = *(undefined4 *)(lVar20 + 0x68);
        }
        else {
          FUN_00125840(&local_80,lVar19 + 0x60);
          *(undefined4 *)(pcVar34 + 0x10) = (undefined4)local_80;
          *(undefined4 *)(pcVar34 + 0x14) = local_80._4_4_;
          *(undefined4 *)(pcVar34 + 0x18) = local_78;
          *(undefined4 *)(pcVar34 + 0x28) = local_70;
          *(undefined4 *)(pcVar34 + 0x2c) = local_6c;
        }
        *(undefined4 *)(pcVar34 + 0x30) = local_68;
      }
      pcVar34 = pcVar34 + 0x34;
    }
    if ((uVar23 >> 0xe & 1) != 0) {
      *pcVar34 = '\x02';
      lVar20 = *(long *)(lVar9 + 0x50);
      if (*(char *)(lVar20 + 0xd) == '\0') {
        *(undefined4 *)(pcVar34 + 4) = *(undefined4 *)(lVar20 + 0x10);
        *(undefined4 *)(pcVar34 + 8) = *(undefined4 *)(lVar20 + 0x14);
        *(undefined4 *)(pcVar34 + 0xc) = *(undefined4 *)(lVar20 + 0x18);
        *(undefined4 *)(pcVar34 + 0x10) = *(undefined4 *)(lVar20 + 0x1c);
        *(undefined4 *)(pcVar34 + 0x14) = *(undefined4 *)(lVar20 + 0x20);
        *(undefined4 *)(pcVar34 + 0x18) = *(undefined4 *)(lVar20 + 0x24);
        *(undefined4 *)(pcVar34 + 0x1c) = *(undefined4 *)(lVar20 + 0x28);
        lVar9 = *(long *)(lVar19 + 0x50);
        if (*(char *)(lVar9 + 0xd) != '\0') goto LAB_003fae70;
LAB_003fb09c:
        *(undefined4 *)(pcVar34 + 0x20) = *(undefined4 *)(lVar9 + 0x10);
        *(undefined4 *)(pcVar34 + 0x24) = *(undefined4 *)(lVar9 + 0x14);
        *(undefined4 *)(pcVar34 + 0x28) = *(undefined4 *)(lVar9 + 0x18);
        *(undefined4 *)(pcVar34 + 0x2c) = *(undefined4 *)(lVar9 + 0x1c);
        *(undefined4 *)(pcVar34 + 0x30) = *(undefined4 *)(lVar9 + 0x20);
        *(undefined4 *)(pcVar34 + 0x34) = *(undefined4 *)(lVar9 + 0x24);
        *(undefined4 *)(pcVar34 + 0x38) = *(undefined4 *)(lVar9 + 0x28);
      }
      else {
        fVar35 = *(float *)(lVar20 + 0x38);
        fVar37 = *(float *)(lVar20 + 0x3c);
        fVar44 = *(float *)(lVar20 + 0x40) * -2.0;
        fVar40 = *(float *)(lVar20 + 0x48) * -2.0;
        fVar46 = *(float *)(lVar20 + 0x44) * -2.0;
        fVar38 = *(float *)(lVar20 + 0x30);
        fVar36 = *(float *)(lVar20 + 0x34);
        pfVar4 = (float *)(lVar9 + 0x60);
        if (param_5 == 0 && ((param_6 ^ 0xffffffff) & 1) == 0) {
          pfVar4 = (float *)(lVar20 + 0x10);
        }
        fVar51 = fVar37 * fVar37 + -0.5;
        fVar43 = pfVar4[2];
        fVar49 = pfVar4[3];
        fVar48 = *pfVar4;
        fVar47 = pfVar4[1];
        fVar50 = fVar49 * fVar49 + -0.5;
        fVar41 = fVar44 * fVar38 + fVar46 * fVar36 + fVar40 * fVar35;
        fVar42 = (fVar40 * fVar51 - fVar37 * (fVar46 * fVar38 - fVar44 * fVar36)) + fVar35 * fVar41;
        fVar39 = pfVar4[6];
        fVar45 = fVar38 * fVar41 + (fVar44 * fVar51 - fVar37 * (fVar40 * fVar36 - fVar46 * fVar35));
        fVar40 = fVar36 * fVar41 + (fVar46 * fVar51 - fVar37 * (fVar44 * fVar35 - fVar40 * fVar38));
        fVar40 = fVar40 + fVar40;
        fVar44 = pfVar4[4];
        fVar46 = pfVar4[5];
        *(float *)(pcVar34 + 4) =
             ((fVar37 * fVar48 - fVar49 * fVar38) - fVar47 * fVar35) + fVar43 * fVar36;
        fVar45 = fVar45 + fVar45;
        fVar42 = fVar42 + fVar42;
        *(float *)(pcVar34 + 0xc) =
             ((fVar37 * fVar43 - fVar49 * fVar35) - fVar48 * fVar36) + fVar47 * fVar38;
        *(float *)(pcVar34 + 0x10) =
             fVar37 * fVar49 + fVar48 * fVar38 + fVar47 * fVar36 + fVar43 * fVar35;
        *(float *)(pcVar34 + 8) =
             ((fVar37 * fVar47 - fVar49 * fVar36) - fVar43 * fVar38) + fVar48 * fVar35;
        fVar35 = fVar43 * fVar42 + fVar48 * fVar45 + fVar47 * fVar40;
        *(float *)(pcVar34 + 0x14) =
             fVar44 + fVar48 * fVar35 +
                      fVar50 * fVar45 + fVar49 * (fVar47 * fVar42 - fVar43 * fVar40);
        *(float *)(pcVar34 + 0x18) =
             fVar46 + fVar47 * fVar35 +
                      fVar50 * fVar40 + fVar49 * (fVar43 * fVar45 - fVar48 * fVar42);
        *(float *)(pcVar34 + 0x1c) =
             fVar39 + fVar50 * fVar42 + fVar49 * (fVar48 * fVar40 - fVar47 * fVar45) +
                      fVar43 * fVar35;
        lVar9 = *(long *)(lVar19 + 0x50);
        if (*(char *)(lVar9 + 0xd) == '\0') goto LAB_003fb09c;
LAB_003fae70:
        fVar35 = *(float *)(lVar9 + 0x38);
        fVar36 = *(float *)(lVar9 + 0x3c);
        fVar38 = *(float *)(lVar9 + 0x30);
        fVar37 = *(float *)(lVar9 + 0x34);
        fVar44 = *(float *)(lVar9 + 0x44) * -2.0;
        fVar46 = *(float *)(lVar9 + 0x40) * -2.0;
        fVar40 = *(float *)(lVar9 + 0x48) * -2.0;
        pfVar4 = (float *)(lVar19 + 0x60);
        if (param_5 == 0 && ((param_6 ^ 0xffffffff) & 1) == 0) {
          pfVar4 = (float *)(lVar9 + 0x10);
        }
        fVar47 = fVar36 * fVar36 + -0.5;
        fVar49 = pfVar4[2];
        fVar50 = pfVar4[3];
        fVar45 = *pfVar4;
        fVar42 = pfVar4[1];
        fVar48 = fVar46 * fVar38 + fVar44 * fVar37 + fVar40 * fVar35;
        fVar39 = fVar50 * fVar50 + -0.5;
        fVar43 = fVar38 * fVar48 + (fVar46 * fVar47 - fVar36 * (fVar40 * fVar37 - fVar44 * fVar35));
        fVar41 = fVar37 * fVar48 + (fVar44 * fVar47 - fVar36 * (fVar46 * fVar35 - fVar40 * fVar38));
        fVar40 = (fVar40 * fVar47 - fVar36 * (fVar44 * fVar38 - fVar46 * fVar37)) + fVar35 * fVar48;
        fVar43 = fVar43 + fVar43;
        fVar40 = fVar40 + fVar40;
        fVar41 = fVar41 + fVar41;
        fVar44 = fVar49 * fVar40 + fVar45 * fVar43 + fVar42 * fVar41;
        fVar47 = pfVar4[4];
        fVar48 = pfVar4[5];
        fVar46 = pfVar4[6];
        *(float *)(pcVar34 + 0x20) =
             ((fVar36 * fVar45 - fVar50 * fVar38) - fVar42 * fVar35) + fVar49 * fVar37;
        *(float *)(pcVar34 + 0x24) =
             ((fVar36 * fVar42 - fVar50 * fVar37) - fVar49 * fVar38) + fVar45 * fVar35;
        *(float *)(pcVar34 + 0x30) =
             fVar47 + fVar45 * fVar44 +
                      fVar39 * fVar43 + fVar50 * (fVar42 * fVar40 - fVar49 * fVar41);
        *(float *)(pcVar34 + 0x34) =
             fVar48 + fVar42 * fVar44 +
                      fVar39 * fVar41 + fVar50 * (fVar49 * fVar43 - fVar45 * fVar40);
        *(float *)(pcVar34 + 0x28) =
             ((fVar36 * fVar49 - fVar50 * fVar35) - fVar45 * fVar37) + fVar42 * fVar38;
        *(float *)(pcVar34 + 0x2c) =
             fVar36 * fVar50 + fVar45 * fVar38 + fVar42 * fVar37 + fVar49 * fVar35;
        *(float *)(pcVar34 + 0x38) =
             fVar46 + fVar39 * fVar40 + fVar50 * (fVar45 * fVar41 - fVar42 * fVar43) +
                      fVar49 * fVar44;
      }
      pcVar34 = pcVar34 + 0x3c;
    }
    *(short *)(puVar31 + 2) = (short)uVar18 + ((short)pcVar34 - (short)puVar1);
    puVar11 = puVar12;
  }
  else {
    sVar14 = (short)puVar31[1];
    if (sVar14 == 0) {
      sVar14 = 2;
      *(undefined2 *)(puVar31 + 1) = 2;
    }
    puVar12 = (ushort *)((long)puVar31 + 10);
    uVar7 = *puVar12;
    if (((uVar23 & 0x7000) == 0) || ((param_4 & 1) != 0)) {
      uVar32 = 0;
      uVar7 = uVar7 & 0x1f;
LAB_003f9ec8:
      *puVar12 = uVar7;
    }
    else {
      uVar32 = uVar7 >> 1 & 0x7ff0;
      iVar16 = 4;
      if ((uVar23 & 0x1000) != 0) {
        iVar16 = 0x38;
      }
      if ((uVar23 & 0x2000) != 0) {
        iVar16 = iVar16 + 0x34;
      }
      if ((uVar23 & 0x4000) != 0) {
        iVar16 = iVar16 + 0x3c;
      }
      uVar18 = iVar16 + 4;
      if (uVar32 < uVar18) {
        uVar32 = uVar18 >> 4;
        if ((uVar18 & 0xf) != 0) {
          uVar32 = uVar32 + 1;
        }
        uVar7 = uVar7 & 0x1f | (ushort)(uVar32 << 5);
        uVar32 = uVar18;
        goto LAB_003f9ec8;
      }
    }
    puVar11 = (ushort *)FUN_003d05d0(lVar27,sVar14,uVar32,puVar31);
    if (uVar32 == 0) {
      *(undefined4 *)((long)puVar31 + 6) = 0;
      *(ushort *)((long)puVar31 + 10) = *(ushort *)((long)puVar31 + 10) & 0xffe0;
joined_r0x003f9fd4:
      if (puVar11 == (ushort *)0x0) {
LAB_003f9fe8:
        *(ushort *)((long)puVar31 + 10) = *(ushort *)((long)puVar31 + 10) | 2;
        return;
      }
      goto LAB_003fa7f8;
    }
    if (puVar11 == (ushort *)0x0) goto LAB_003f9fe8;
    uVar7 = *(ushort *)((long)puVar31 + 10) & 0xffe0;
    *(undefined4 *)((long)puVar31 + 6) = 0;
    *(ushort *)((long)puVar31 + 10) = uVar7;
    lVar9 = *(long *)(puVar29 + 4);
    lVar19 = *(long *)(puVar29 + 8);
    *puVar11 = (ushort)param_5;
    *(undefined1 *)(puVar11 + 2) = 3;
    puVar11[3] = 0;
    if ((uVar23 >> 0xd & 1) == 0) {
      puVar29 = puVar11 + 4;
    }
    else {
      puVar29 = puVar11 + 0x1e;
      *(undefined1 *)(puVar11 + 4) = 1;
      if (param_5 == 0) {
        *puVar12 = uVar7 | 8;
      }
      else {
        lVar20 = *(long *)(lVar9 + 0x50);
        if (*(char *)(lVar20 + 0xd) == '\0') {
          puVar11[6] = 0;
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          puVar11[10] = 0;
          puVar11[0xb] = 0;
          puVar11[0x12] = 0;
          puVar11[0x13] = 0;
          puVar11[0x14] = 0;
          puVar11[0x15] = 0;
          puVar11[0x16] = 0;
          puVar11[0x17] = 0;
          lVar20 = *(long *)(lVar19 + 0x50);
          cVar6 = *(char *)(lVar20 + 0xd);
        }
        else {
          *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(lVar20 + 0x50);
          *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(lVar20 + 0x54);
          *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(lVar20 + 0x58);
          *(undefined4 *)(puVar11 + 0x12) = *(undefined4 *)(lVar20 + 0x60);
          *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(lVar20 + 100);
          *(undefined4 *)(puVar11 + 0x16) = *(undefined4 *)(lVar20 + 0x68);
          lVar20 = *(long *)(lVar19 + 0x50);
          cVar6 = *(char *)(lVar20 + 0xd);
        }
        if (cVar6 == '\0') {
          puVar11[0xc] = 0;
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          puVar11[0xf] = 0;
          puVar11[0x10] = 0;
          puVar11[0x11] = 0;
          puVar11[0x18] = 0;
          puVar11[0x19] = 0;
          puVar11[0x1a] = 0;
          puVar11[0x1b] = 0;
          puVar11[0x1c] = 0;
          puVar11[0x1d] = 0;
        }
        else {
          *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)(lVar20 + 0x50);
          *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(lVar20 + 0x54);
          *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(lVar20 + 0x58);
          *(undefined4 *)(puVar11 + 0x18) = *(undefined4 *)(lVar20 + 0x60);
          *(undefined4 *)(puVar11 + 0x1a) = *(undefined4 *)(lVar20 + 100);
          *(undefined4 *)(puVar11 + 0x1c) = *(undefined4 *)(lVar20 + 0x68);
        }
      }
    }
    if ((uVar23 >> 0xc & 1) != 0) {
      *(char *)puVar29 = '\0';
      lVar20 = *(long *)(lVar9 + 0x50);
      if (*(char *)(lVar20 + 0xd) == '\0') {
        puVar29[2] = 0;
        puVar29[3] = 0;
        puVar29[4] = 0;
        puVar29[5] = 0;
        puVar29[6] = 0;
        puVar29[7] = 0;
        puVar29[0xe] = 0;
        puVar29[0xf] = 0;
        puVar29[0x10] = 0;
        puVar29[0x11] = 0;
        puVar29[0x12] = 0;
        puVar29[0x13] = 0;
        lVar20 = *(long *)(lVar19 + 0x50);
        cVar6 = *(char *)(lVar20 + 0xd);
joined_r0x003fa180:
        if (cVar6 != '\0') goto LAB_003fa184;
LAB_003f9fa8:
        puVar29[8] = 0;
        puVar29[9] = 0;
        puVar29[10] = 0;
        puVar29[0xb] = 0;
        puVar29[0xc] = 0;
        puVar29[0xd] = 0;
        puVar29[0x14] = 0;
        puVar29[0x15] = 0;
        puVar29[0x16] = 0;
        puVar29[0x17] = 0;
        puVar29[0x18] = 0;
        puVar29[0x19] = 0;
      }
      else {
        if (param_5 == 0) {
          *(undefined4 *)(puVar29 + 2) = *(undefined4 *)(lVar20 + 0x50);
          *(undefined4 *)(puVar29 + 4) = *(undefined4 *)(lVar20 + 0x54);
          *(undefined4 *)(puVar29 + 6) = *(undefined4 *)(lVar20 + 0x58);
          *(undefined4 *)(puVar29 + 0xe) = *(undefined4 *)(lVar20 + 0x60);
          *(undefined4 *)(puVar29 + 0x10) = *(undefined4 *)(lVar20 + 100);
          *(undefined4 *)(puVar29 + 0x12) = *(undefined4 *)(lVar20 + 0x68);
          lVar20 = *(long *)(lVar19 + 0x50);
          cVar6 = *(char *)(lVar20 + 0xd);
          goto joined_r0x003fa180;
        }
        FUN_00125840(&local_80,lVar9 + 0x60);
        *(undefined4 *)(puVar29 + 2) = (undefined4)local_80;
        *(undefined4 *)(puVar29 + 4) = local_80._4_4_;
        *(undefined4 *)(puVar29 + 6) = local_78;
        *(undefined4 *)(puVar29 + 0xe) = local_70;
        *(undefined4 *)(puVar29 + 0x10) = local_6c;
        *(undefined4 *)(puVar29 + 0x12) = local_68;
        lVar20 = *(long *)(lVar19 + 0x50);
        if (*(char *)(lVar20 + 0xd) == '\0') goto LAB_003f9fa8;
LAB_003fa184:
        if ((param_5 == 0) || ((char)*puVar29 == '\x01')) {
          *(undefined4 *)(puVar29 + 8) = *(undefined4 *)(lVar20 + 0x50);
          *(undefined4 *)(puVar29 + 10) = *(undefined4 *)(lVar20 + 0x54);
          *(undefined4 *)(puVar29 + 0xc) = *(undefined4 *)(lVar20 + 0x58);
          *(undefined4 *)(puVar29 + 0x14) = *(undefined4 *)(lVar20 + 0x60);
          *(undefined4 *)(puVar29 + 0x16) = *(undefined4 *)(lVar20 + 100);
          local_68 = *(undefined4 *)(lVar20 + 0x68);
        }
        else {
          FUN_00125840(&local_80,lVar19 + 0x60);
          *(undefined4 *)(puVar29 + 8) = (undefined4)local_80;
          *(undefined4 *)(puVar29 + 10) = local_80._4_4_;
          *(undefined4 *)(puVar29 + 0xc) = local_78;
          *(undefined4 *)(puVar29 + 0x14) = local_70;
          *(undefined4 *)(puVar29 + 0x16) = local_6c;
        }
        *(undefined4 *)(puVar29 + 0x18) = local_68;
      }
      puVar29 = puVar29 + 0x1a;
    }
    if ((uVar23 >> 0xe & 1) != 0) {
      *(char *)puVar29 = '\x02';
      lVar20 = *(long *)(lVar9 + 0x50);
      if (*(char *)(lVar20 + 0xd) == '\0') {
        *(undefined4 *)(puVar29 + 2) = *(undefined4 *)(lVar20 + 0x10);
        *(undefined4 *)(puVar29 + 4) = *(undefined4 *)(lVar20 + 0x14);
        *(undefined4 *)(puVar29 + 6) = *(undefined4 *)(lVar20 + 0x18);
        *(undefined4 *)(puVar29 + 8) = *(undefined4 *)(lVar20 + 0x1c);
        *(undefined4 *)(puVar29 + 10) = *(undefined4 *)(lVar20 + 0x20);
        *(undefined4 *)(puVar29 + 0xc) = *(undefined4 *)(lVar20 + 0x24);
        *(undefined4 *)(puVar29 + 0xe) = *(undefined4 *)(lVar20 + 0x28);
        lVar9 = *(long *)(lVar19 + 0x50);
        if (*(char *)(lVar9 + 0xd) != '\0') goto LAB_003fa56c;
LAB_003fa798:
        *(undefined4 *)(puVar29 + 0x10) = *(undefined4 *)(lVar9 + 0x10);
        *(undefined4 *)(puVar29 + 0x12) = *(undefined4 *)(lVar9 + 0x14);
        *(undefined4 *)(puVar29 + 0x14) = *(undefined4 *)(lVar9 + 0x18);
        *(undefined4 *)(puVar29 + 0x16) = *(undefined4 *)(lVar9 + 0x1c);
        *(undefined4 *)(puVar29 + 0x18) = *(undefined4 *)(lVar9 + 0x20);
        *(undefined4 *)(puVar29 + 0x1a) = *(undefined4 *)(lVar9 + 0x24);
        *(undefined4 *)(puVar29 + 0x1c) = *(undefined4 *)(lVar9 + 0x28);
      }
      else {
        fVar35 = *(float *)(lVar20 + 0x38);
        fVar37 = *(float *)(lVar20 + 0x3c);
        fVar44 = *(float *)(lVar20 + 0x40) * -2.0;
        fVar40 = *(float *)(lVar20 + 0x48) * -2.0;
        fVar46 = *(float *)(lVar20 + 0x44) * -2.0;
        fVar38 = *(float *)(lVar20 + 0x30);
        fVar36 = *(float *)(lVar20 + 0x34);
        pfVar4 = (float *)(lVar9 + 0x60);
        if (param_5 == 0 && ((param_6 ^ 0xffffffff) & 1) == 0) {
          pfVar4 = (float *)(lVar20 + 0x10);
        }
        fVar51 = fVar37 * fVar37 + -0.5;
        fVar43 = pfVar4[2];
        fVar49 = pfVar4[3];
        fVar48 = *pfVar4;
        fVar47 = pfVar4[1];
        fVar50 = fVar49 * fVar49 + -0.5;
        fVar41 = fVar44 * fVar38 + fVar46 * fVar36 + fVar40 * fVar35;
        fVar45 = fVar38 * fVar41 + (fVar44 * fVar51 - fVar37 * (fVar40 * fVar36 - fVar46 * fVar35));
        fVar39 = pfVar4[6];
        fVar42 = (fVar40 * fVar51 - fVar37 * (fVar46 * fVar38 - fVar44 * fVar36)) + fVar35 * fVar41;
        fVar40 = fVar36 * fVar41 + (fVar46 * fVar51 - fVar37 * (fVar44 * fVar35 - fVar40 * fVar38));
        fVar44 = pfVar4[4];
        fVar46 = pfVar4[5];
        fVar42 = fVar42 + fVar42;
        *(float *)(puVar29 + 6) =
             ((fVar37 * fVar43 - fVar49 * fVar35) - fVar48 * fVar36) + fVar47 * fVar38;
        *(float *)(puVar29 + 8) =
             fVar37 * fVar49 + fVar48 * fVar38 + fVar47 * fVar36 + fVar43 * fVar35;
        fVar40 = fVar40 + fVar40;
        *(float *)(puVar29 + 2) =
             ((fVar37 * fVar48 - fVar49 * fVar38) - fVar47 * fVar35) + fVar43 * fVar36;
        fVar45 = fVar45 + fVar45;
        *(float *)(puVar29 + 4) =
             ((fVar37 * fVar47 - fVar49 * fVar36) - fVar43 * fVar38) + fVar48 * fVar35;
        fVar35 = fVar43 * fVar42 + fVar48 * fVar45 + fVar47 * fVar40;
        *(float *)(puVar29 + 10) =
             fVar44 + fVar48 * fVar35 +
                      fVar50 * fVar45 + fVar49 * (fVar47 * fVar42 - fVar43 * fVar40);
        *(float *)(puVar29 + 0xc) =
             fVar46 + fVar47 * fVar35 +
                      fVar50 * fVar40 + fVar49 * (fVar43 * fVar45 - fVar48 * fVar42);
        *(float *)(puVar29 + 0xe) =
             fVar39 + fVar50 * fVar42 + fVar49 * (fVar48 * fVar40 - fVar47 * fVar45) +
                      fVar43 * fVar35;
        lVar9 = *(long *)(lVar19 + 0x50);
        if (*(char *)(lVar9 + 0xd) == '\0') goto LAB_003fa798;
LAB_003fa56c:
        fVar35 = *(float *)(lVar9 + 0x38);
        fVar36 = *(float *)(lVar9 + 0x3c);
        fVar38 = *(float *)(lVar9 + 0x30);
        fVar37 = *(float *)(lVar9 + 0x34);
        fVar46 = *(float *)(lVar9 + 0x40) * -2.0;
        fVar44 = *(float *)(lVar9 + 0x44) * -2.0;
        fVar40 = *(float *)(lVar9 + 0x48) * -2.0;
        pfVar4 = (float *)(lVar19 + 0x60);
        if (param_5 == 0 && ((param_6 ^ 0xffffffff) & 1) == 0) {
          pfVar4 = (float *)(lVar9 + 0x10);
        }
        fVar47 = fVar36 * fVar36 + -0.5;
        fVar45 = *pfVar4;
        fVar42 = pfVar4[1];
        fVar49 = pfVar4[2];
        fVar50 = pfVar4[3];
        fVar48 = fVar46 * fVar38 + fVar44 * fVar37 + fVar40 * fVar35;
        fVar39 = fVar50 * fVar50 + -0.5;
        fVar43 = fVar38 * fVar48 + (fVar46 * fVar47 - fVar36 * (fVar40 * fVar37 - fVar44 * fVar35));
        fVar41 = fVar37 * fVar48 + (fVar44 * fVar47 - fVar36 * (fVar46 * fVar35 - fVar40 * fVar38));
        fVar40 = (fVar40 * fVar47 - fVar36 * (fVar44 * fVar38 - fVar46 * fVar37)) + fVar35 * fVar48;
        fVar43 = fVar43 + fVar43;
        fVar41 = fVar41 + fVar41;
        fVar40 = fVar40 + fVar40;
        fVar44 = fVar49 * fVar40 + fVar45 * fVar43 + fVar42 * fVar41;
        fVar47 = pfVar4[4];
        fVar48 = pfVar4[5];
        fVar46 = pfVar4[6];
        *(float *)(puVar29 + 0x10) =
             ((fVar36 * fVar45 - fVar50 * fVar38) - fVar42 * fVar35) + fVar49 * fVar37;
        *(float *)(puVar29 + 0x12) =
             ((fVar36 * fVar42 - fVar50 * fVar37) - fVar49 * fVar38) + fVar45 * fVar35;
        *(float *)(puVar29 + 0x18) =
             fVar47 + fVar45 * fVar44 +
                      fVar39 * fVar43 + fVar50 * (fVar42 * fVar40 - fVar49 * fVar41);
        *(float *)(puVar29 + 0x1a) =
             fVar48 + fVar42 * fVar44 +
                      fVar39 * fVar41 + fVar50 * (fVar49 * fVar43 - fVar45 * fVar40);
        *(float *)(puVar29 + 0x14) =
             ((fVar36 * fVar49 - fVar50 * fVar35) - fVar45 * fVar37) + fVar42 * fVar38;
        *(float *)(puVar29 + 0x16) =
             fVar36 * fVar50 + fVar45 * fVar38 + fVar42 * fVar37 + fVar49 * fVar35;
        *(float *)(puVar29 + 0x1c) =
             fVar46 + fVar39 * fVar40 + fVar50 * (fVar45 * fVar41 - fVar42 * fVar43) +
                      fVar49 * fVar44;
      }
      puVar29 = puVar29 + 0x1e;
    }
    *(short *)(puVar31 + 2) = ((short)puVar29 - (short)(puVar11 + 2)) + 4;
  }
  if (((uVar23 ^ 0xffffffff) & 0x2800) == 0) {
    *(undefined1 *)(lVar28 + 0x1ed8) = 1;
  }
LAB_003fa7f8:
  uVar7 = *(ushort *)((long)puVar31 + 10);
  lVar28 = (long)puVar11 + ((ulong)(uVar7 >> 1) & 0x7ff0);
  if (*(int *)(param_1 + 0x3c) == iVar5) {
    puVar2 = (undefined8 *)(lVar28 + (ulong)*(ushort *)(param_1 + 100) * 0x40);
    uVar7 = uVar25 | *(ushort *)((long)puVar2 + 0x32);
    if ((uVar7 & 8) != 0 && ((param_4 ^ 0xffffffff) & 1) == 0) {
      uVar7 = uVar7 & 0xfff7;
    }
    *(ushort *)((long)puVar2 + 0x32) = uVar7;
    *(ushort *)(puVar2 + 6) = *(ushort *)(puVar2 + 6) | param_3;
    bVar15 = *(byte *)(param_1 + 0x41);
  }
  else {
    uVar8 = *(ushort *)((long)puVar31 + 6);
    if ((ushort)puVar31[1] <= uVar8) {
      lVar28 = FUN_003d0700(lVar27,(uint)uVar8 + (uint)(uVar8 >> 1) + 1,uVar7 >> 1 & 0x7ff0,puVar31)
      ;
      if (lVar28 == 0) {
        *(ushort *)((long)puVar31 + 10) = *(ushort *)((long)puVar31 + 10) | 4;
        return;
      }
      uVar8 = *(ushort *)((long)puVar31 + 6);
      lVar28 = lVar28 + ((ulong)(*(ushort *)((long)puVar31 + 10) >> 1) & 0x7ff0);
    }
    *(ushort *)(param_1 + 100) = uVar8;
    puVar2 = (undefined8 *)(lVar28 + (ulong)uVar8 * 0x40);
    uVar10 = FUN_003f8c90(*(undefined8 *)(lVar21 + 0x40));
    *puVar2 = uVar10;
    uVar10 = FUN_003f8c90(*(undefined8 *)(lVar26 + 0x40));
    puVar2[1] = uVar10;
    puVar2[2] = 0;
    puVar2[5] = 0;
    *(ushort *)(puVar2 + 6) = param_3;
    *(ushort *)((long)puVar2 + 0x32) = uVar25;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)((long)puVar2 + 0x34) = *(undefined4 *)(lVar21 + 0x48);
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(lVar26 + 0x48);
    *(short *)((long)puVar31 + 6) = *(short *)((long)puVar31 + 6) + 1;
    *(int *)(param_1 + 0x3c) = iVar5;
    bVar15 = *(byte *)(param_1 + 0x41);
  }
  if ((bVar15 >> 1 & 1) == 0) {
    return;
  }
  lVar26 = *(long *)(param_1 + 0x58);
  if (lVar26 == 0) {
    return;
  }
  if ((uVar25 & 0x110) != 0) {
    return;
  }
  if (puVar2[2] != 0) {
    return;
  }
  uVar23 = *(uint *)(lVar26 + 0x6c);
  if ((int)uVar23 < 0) {
    plVar13 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x48) +
                                                        0x720) + 0x6e8) + 0xa0))();
    lVar26 = *(long *)(lVar26 + 0x40);
    bVar15 = *(byte *)((long)plVar13 + 0x19);
  }
  else {
    plVar13 = (long *)(*(long *)(param_7 + 0x20) +
                      (ulong)(*(int *)(param_7 + (ulong)(uVar23 & 7) * 4) + (uVar23 >> 3)) * 0x20);
    lVar26 = *(long *)(lVar26 + 0x40);
    bVar15 = *(byte *)((long)plVar13 + 0x19);
  }
  if ((param_5 != 0) || (bVar15 == 0)) {
    if (lVar26 == 0) {
      return;
    }
    if (*(short *)(lVar26 + 10) != 0) {
      return;
    }
    if (param_5 == 0) {
      return;
    }
  }
  if (param_5 == 0) {
    uVar18 = (uint)*(byte *)(plVar13 + 3);
    lVar21 = *plVar13;
    lVar27 = plVar13[1];
    lVar26 = plVar13[2];
    uVar23 = (uint)bVar15 * 0x30 + (uint)*(byte *)(plVar13 + 3) * 0x10;
    uVar32 = uVar23;
  }
  else {
    lVar21 = lVar26 + 0x10;
    lVar27 = lVar26 + 0x40;
    uVar23 = *(ushort *)(lVar26 + 8) - 0x10;
    uVar32 = (*(ushort *)(lVar26 + 8) + 0xf & 0x1fff0) - 0x10;
    bVar15 = 1;
    lVar26 = lVar21 + (ulong)uVar32;
    uVar18 = 1;
  }
  *(byte *)((long)puVar2 + 0x2d) = bVar15;
  puVar2[2] = lVar21;
  puVar2[3] = lVar27;
  *(char *)((long)puVar2 + 0x2c) = (char)uVar18;
  uVar25 = 0;
  if (lVar24 != lVar22) {
    uVar25 = 0x20;
  }
  iVar5 = 0;
  if (lVar26 != 0) {
    iVar5 = uVar18 << 2;
  }
  *(uint *)(puVar2 + 5) = iVar5 + uVar32;
  uVar7 = uVar25 | *(ushort *)(puVar2 + 6);
  if (iVar5 != 0) {
    uVar7 = uVar25 | *(ushort *)(puVar2 + 6) | 0x10;
  }
  *(short *)((long)puVar2 + 0x2e) = (short)uVar23;
  puVar2[4] = lVar26;
  *(ushort *)(puVar2 + 6) = uVar7;
  return;
}


