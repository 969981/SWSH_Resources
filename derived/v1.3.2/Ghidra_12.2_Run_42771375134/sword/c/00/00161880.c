/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00161880; name: FUN_00161880
 */


uint FUN_00161880(float param_1,long param_2,undefined2 param_3,undefined8 *param_4,long param_5,
                 long param_6,long param_7,int *param_8,undefined8 param_9)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  float *pfVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  *param_8 = 0;
  uVar20 = (ulong)*(ushort *)(param_2 + 8);
  local_104 = 0;
  if (1 < uVar20) {
    fVar31 = 1.0 / param_1;
    local_104 = 0;
    uVar23 = 1;
    do {
      while( true ) {
        lVar22 = *(long *)(param_6 + uVar23 * 0x30 + 0x20);
        uVar2 = uVar23 + 1;
        if (uVar2 < uVar20) {
          uVar9 = *(ulong *)(param_6 + uVar2 * 0x30 + 0x20);
          uVar14 = uVar9 + 0xab >> 6;
          uVar12 = uVar9 >> 6;
          uVar16 = ((int)uVar14 + 1) - (int)uVar12;
          lVar11 = (1 - uVar12) + uVar14;
          if ((uVar16 & 7) != 0) {
            lVar15 = -((ulong)uVar16 & 7);
            do {
              Hint_Prefetch(uVar9,0,0,0);
              uVar9 = uVar9 + 0x40;
              lVar11 = lVar11 + -1;
              lVar15 = lVar15 + 1;
            } while (lVar15 != 0);
          }
          if (6 < uVar14 - uVar12) {
            do {
              Hint_Prefetch(uVar9,0,0,0);
              Hint_Prefetch(uVar9 + 0x40,0,0,0);
              lVar11 = lVar11 + -8;
              Hint_Prefetch(uVar9 + 0x80,0,0,0);
              Hint_Prefetch(uVar9 + 0xc0,0,0,0);
              Hint_Prefetch(uVar9 + 0x100,0,0,0);
              Hint_Prefetch(uVar9 + 0x140,0,0,0);
              Hint_Prefetch(uVar9 + 0x180,0,0,0);
              Hint_Prefetch(uVar9 + 0x1c0,0,0,0);
              uVar9 = uVar9 + 0x200;
            } while (lVar11 != 0);
          }
          uVar9 = param_7 + uVar2 * 0x54;
          uVar14 = uVar9 + 0x53 >> 6;
          uVar12 = uVar9 >> 6;
          uVar16 = ((int)uVar14 + 1) - (int)uVar12;
          lVar11 = (1 - uVar12) + uVar14;
          if ((uVar16 & 7) != 0) {
            lVar15 = -((ulong)uVar16 & 7);
            do {
              Hint_Prefetch(uVar9,0,0,0);
              uVar9 = uVar9 + 0x40;
              lVar11 = lVar11 + -1;
              lVar15 = lVar15 + 1;
            } while (lVar15 != 0);
          }
          if (6 < uVar14 - uVar12) {
            do {
              Hint_Prefetch(uVar9,0,0,0);
              Hint_Prefetch(uVar9 + 0x40,0,0,0);
              lVar11 = lVar11 + -8;
              Hint_Prefetch(uVar9 + 0x80,0,0,0);
              Hint_Prefetch(uVar9 + 0xc0,0,0,0);
              Hint_Prefetch(uVar9 + 0x100,0,0,0);
              Hint_Prefetch(uVar9 + 0x140,0,0,0);
              Hint_Prefetch(uVar9 + 0x180,0,0,0);
              Hint_Prefetch(uVar9 + 0x1c0,0,0,0);
              uVar9 = uVar9 + 0x200;
            } while (lVar11 != 0);
          }
        }
        if ((*(char *)(lVar22 + 0x90) != '\0') || (*(char *)(lVar22 + 0x78) != '\0')) break;
LAB_00161c28:
        uVar23 = uVar2;
        if (uVar2 == uVar20) {
          return local_104;
        }
      }
      lVar11 = param_7 + uVar23 * 0x54;
      pfVar19 = (float *)(lVar11 + 0x38);
      fVar32 = *pfVar19;
      pfVar10 = (float *)(lVar11 + 0x44);
      if (fVar32 == 0.0) {
        fVar33 = 0.0;
        fVar30 = 1.0;
        fVar25 = 0.0;
      }
      else {
        fVar30 = *pfVar10;
        fVar24 = sqrtf(fVar32 * fVar32 + 0.0 + fVar30 * fVar30);
        fVar24 = 1.0 / fVar24;
        fVar33 = fVar32 * fVar24;
        fVar25 = fVar24 * 0.0;
        fVar30 = fVar30 * fVar24;
        fVar32 = *pfVar19;
      }
      fVar24 = *pfVar10;
      lVar11 = param_7 + uVar23 * 0x54;
      fVar25 = -fVar25;
      fVar26 = *(float *)(lVar11 + 0x3c);
      fVar27 = *(float *)(lVar11 + 0x40);
      local_b0 = ((fVar30 * fVar32 - fVar24 * fVar33) + fVar26 * fVar25) - fVar27 * fVar25;
      fStack_ac = ((fVar24 * fVar25 + fVar30 * fVar26) - fVar27 * fVar33) - fVar32 * fVar25;
      local_a8 = fVar32 * fVar25 + fVar24 * fVar25 + fVar30 * fVar27 + fVar26 * fVar33;
      fStack_a4 = ((fVar30 * fVar24 + fVar32 * fVar33) - fVar26 * fVar25) - fVar27 * fVar25;
      local_c0 = *(undefined8 *)(lVar22 + 0x94);
      local_b8 = *(undefined4 *)(lVar22 + 0x9c);
      local_d4 = 0;
      if ((*(char *)(lVar22 + 0x78) == '\0') ||
         (uVar9 = FUN_00163250(&local_c0,&local_b0,&local_d0,&local_d4), (uVar9 & 1) == 0)) {
        iVar18 = 0;
        uVar16 = 0;
      }
      else if (*(float *)(lVar22 + 0x7c) <= 0.0) {
        uVar16 = (uint)(0.0 < *(float *)(lVar22 + 0x80));
        iVar18 = 1;
      }
      else {
        iVar18 = 1;
        uVar16 = 1;
      }
      lVar11 = param_7 + uVar23 * 0x54;
      fVar32 = *(float *)(lVar11 + 0x24);
      fVar25 = *(float *)(lVar11 + 0x28);
      fVar26 = *(float *)(lVar11 + 0x1c);
      fVar27 = *(float *)(lVar11 + 0x20);
      fVar24 = fVar25 * fVar25 + -0.5;
      fVar28 = fVar26 + fVar26 + fVar27 * 0.0 + fVar32 * 0.0;
      local_e0 = fVar26 * fVar28 + fVar24 + fVar24 + fVar25 * (fVar27 * 0.0 - fVar32 * 0.0);
      local_d8 = fVar24 * 0.0 + fVar25 * (fVar26 * 0.0 - (fVar27 + fVar27)) + fVar32 * fVar28;
      fVar33 = fVar33 / (fVar30 + 1.0);
      local_dc = fVar27 * fVar28 + fVar24 * 0.0 + fVar25 * ((fVar32 + fVar32) - fVar26 * 0.0);
      if (*(char *)(lVar22 + 0x90) == '\0') {
        bVar7 = false;
        bVar1 = false;
        iVar13 = uVar16 + iVar18;
        if (iVar13 != 0) goto LAB_00161c50;
        goto LAB_00161c28;
      }
      fVar32 = *(float *)(lVar22 + 0xa8);
      bVar7 = fVar33 < (*(float *)(lVar22 + 0xa4) + fVar32) /
                       (1.0 - *(float *)(lVar22 + 0xa4) * fVar32);
      bVar1 = (*(float *)(lVar22 + 0xa0) - fVar32) / (*(float *)(lVar22 + 0xa0) * fVar32 + 1.0) <
              fVar33;
      iVar13 = uVar16 + iVar18 + (uint)bVar7 + (uint)bVar1;
      if (iVar13 == 0) goto LAB_00161c28;
LAB_00161c50:
      plVar21 = (long *)(param_5 + (ulong)local_104 * 0x30);
      *plVar21 = param_2;
      uVar6 = *(undefined4 *)(param_6 + uVar23 * 0x30 + 0x28);
      *(ushort *)((long)plVar21 + 0x1e) = (ushort)(iVar13 * 0xa0 + 0x30U >> 4);
      *(short *)((long)plVar21 + 0x12) = (short)uVar23;
      *(short *)(plVar21 + 2) = (short)uVar6;
      uVar5 = iVar13 * 0xa0 + 0x40;
      *(undefined2 *)((long)plVar21 + 0x14) = param_3;
      plVar21[1] = param_2;
      *(undefined2 *)(plVar21 + 3) = param_3;
      if (uVar5 < 0x4001) {
        if (param_4[1] != 0) {
          uVar4 = *(uint *)(param_4 + 2) + uVar5;
          if (uVar4 < 0x4001) {
            puVar8 = (undefined1 *)(param_4[1] + (ulong)*(uint *)(param_4 + 2));
            *(uint *)(param_4 + 2) = uVar4;
            goto LAB_00161d40;
          }
        }
        puVar8 = (undefined1 *)FUN_00112210(*param_4,param_9);
        param_4[1] = puVar8;
        *(uint *)(param_4 + 2) = uVar5;
      }
      else {
        puVar8 = (undefined1 *)FUN_00112050(*param_4,uVar5);
      }
LAB_00161d40:
      lVar11 = param_5 + (ulong)local_104 * 0x30;
      uVar9 = 0;
      puVar3 = puVar8 + 0x30;
      plVar17 = (long *)(lVar11 + 0x20);
      *plVar17 = (long)puVar8;
      *(undefined8 *)(lVar11 + 0x28) = 0;
      *puVar8 = 4;
      puVar8[1] = (char)iVar13;
      *(undefined8 *)(puVar8 + 0x20) = 0x3f8000003f800000;
      puVar8[2] = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0xbf800000bf800000;
      if (iVar18 != 0) {
        pfVar10 = (float *)(param_7 + uVar23 * 0x54);
        fVar32 = local_d0 + local_d0;
        fVar25 = fStack_cc + fStack_cc;
        fVar27 = *pfVar10;
        fVar28 = pfVar10[1];
        fVar30 = local_c8 + local_c8;
        fVar24 = pfVar10[2];
        fVar26 = pfVar10[3];
        fVar29 = fVar26 * fVar26 + -0.5;
        fVar34 = fVar32 * fVar27 + fVar25 * fVar28 + fVar30 * fVar24;
        local_f0 = fVar27 * fVar34 + fVar32 * fVar29 + fVar26 * (fVar30 * fVar28 - fVar25 * fVar24);
        local_ec = fVar28 * fVar34 + fVar25 * fVar29 + fVar26 * (fVar32 * fVar24 - fVar30 * fVar27);
        local_e8 = fVar30 * fVar29 + fVar26 * (fVar25 * fVar27 - fVar32 * fVar28) + fVar24 * fVar34;
        FUN_00162ee0(local_d4,fVar31,param_2,param_6,uVar23 & 0xffffffff,puVar3,&local_f0);
        if (uVar16 == 0) {
          uVar9 = 1;
        }
        else {
          fVar27 = local_dc * local_e8 - local_d8 * local_ec;
          fVar28 = local_d8 * local_f0 - local_e8 * local_e0;
          fVar26 = local_ec * local_e0 - local_dc * local_f0;
          fVar25 = fVar26 * fVar26 + fVar27 * fVar27 + fVar28 * fVar28;
          fVar30 = 0.0;
          fVar24 = 0.0;
          fVar32 = 0.0;
          if (0.0 < fVar25) {
            fVar32 = sqrtf(fVar25);
            fVar32 = 1.0 / fVar32;
            fVar24 = fVar27 * fVar32;
            fVar30 = fVar28 * fVar32;
            fVar32 = fVar26 * fVar32;
          }
          local_f8 = fVar32;
          local_100 = fVar24;
          fStack_fc = fVar30;
          FUN_00163090(*(undefined4 *)(lVar22 + 0x7c),*(undefined4 *)(lVar22 + 0x80),param_1,param_2
                       ,param_6,uVar23 & 0xffffffff,puVar8 + 0xd0,&local_100);
          uVar9 = 2;
        }
      }
      if (bVar1) {
        FUN_00162ee0((*(float *)(lVar22 + 0xa0) - fVar33) * 4.0,fVar31,param_2,param_6,
                     uVar23 & 0xffffffff,puVar3 + uVar9 * 0xa0,&local_e0);
        uVar9 = (ulong)((int)uVar9 + 1);
      }
      local_104 = local_104 + 1;
      if (bVar7) {
        local_f0 = -local_e0;
        local_ec = -local_dc;
        local_e8 = -local_d8;
        FUN_00162ee0((*(float *)(lVar22 + 0xa4) - fVar33) * -4.0,fVar31,param_2,param_6,
                     uVar23 & 0xffffffff,puVar3 + uVar9 * 0xa0,&local_f0);
      }
      *(undefined1 *)(*plVar17 + (ulong)*(ushort *)((long)plVar21 + 0x1e) * 0x10) = 0;
      *param_8 = *param_8 + iVar13;
      uVar23 = uVar2;
    } while (uVar2 != uVar20);
  }
  return local_104;
}


