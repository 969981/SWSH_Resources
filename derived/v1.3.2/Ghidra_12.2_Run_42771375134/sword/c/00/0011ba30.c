/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011ba30; name: FUN_0011ba30
 */


undefined8
FUN_0011ba30(long param_1,long *param_2,float *param_3,float *param_4,code *param_5,
            undefined8 param_6,undefined8 param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  char cVar18;
  ushort uVar19;
  bool bVar20;
  float *pfVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  float *pfVar26;
  float *pfVar27;
  ulong uVar28;
  float *pfVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  char local_158;
  char local_f0;
  float *local_e0;
  float *local_d8;
  float *local_b0;
  float *local_a8;
  
  pfVar29 = (float *)*param_2;
  if (pfVar29 == (float *)0x0) {
    *(undefined4 *)(param_1 + 0x1230) = 0;
    *param_2 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    local_f0 = local_158;
  }
  else {
    Hint_Prefetch(pfVar29,0,0,0);
    if (0x80 < ((uint)pfVar29 & 0x7f) + (uint)*(ushort *)(param_2 + 1)) {
      Hint_Prefetch(pfVar29 + 0x20,0,0,0);
    }
    *(undefined4 *)(param_1 + 0x1230) = 0;
    fVar13 = pfVar29[0xd];
    fVar14 = *pfVar29;
    fVar15 = pfVar29[1];
    fVar16 = pfVar29[2];
    fVar3 = pfVar29[3];
    fVar8 = pfVar29[4];
    uVar19 = *(ushort *)(pfVar29 + 0xe);
    fVar4 = pfVar29[5];
    fVar9 = pfVar29[6];
    fVar5 = pfVar29[7];
    fVar10 = pfVar29[8];
    fVar6 = pfVar29[9];
    fVar11 = pfVar29[10];
    fVar7 = pfVar29[0xb];
    fVar12 = pfVar29[0xc];
    uVar22 = (uint)uVar19;
    cVar18 = *(char *)((long)pfVar29 + 0x3a);
    local_f0 = *(char *)((long)pfVar29 + 0x3b);
    fVar30 = pfVar29[0xf];
    *param_2 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    fVar31 = *param_4;
    fVar61 = param_4[1];
    fVar62 = param_4[2];
    fVar60 = param_4[3];
    fVar34 = (param_3[4] - param_4[4]) + (param_3[4] - param_4[4]);
    fVar39 = (param_3[5] - param_4[5]) + (param_3[5] - param_4[5]);
    fVar37 = (param_3[6] - param_4[6]) + (param_3[6] - param_4[6]);
    fVar42 = -fVar31;
    fVar45 = *param_3;
    fVar57 = (fVar8 - fVar7) + (fVar8 - fVar7);
    fVar58 = (fVar4 - fVar12) + (fVar4 - fVar12);
    fVar59 = (fVar9 - fVar13) + (fVar9 - fVar13);
    fVar63 = -fVar5;
    fVar40 = param_3[3];
    fVar46 = param_3[2];
    fVar49 = param_3[1];
    fVar50 = fVar60 * fVar60 + -0.5;
    fVar38 = (fVar34 * fVar42 - fVar39 * fVar61) - fVar37 * fVar62;
    fVar48 = fVar11 * fVar11 + -0.5;
    fVar35 = (fVar57 * fVar63 - fVar58 * fVar10) - fVar59 * fVar6;
    fVar32 = fabsf(((fVar50 * fVar34 + fVar60 * (fVar39 * fVar62 - fVar37 * fVar61)) -
                   fVar38 * fVar31) -
                   ((fVar48 * fVar57 + (fVar58 * fVar6 - fVar59 * fVar10) * fVar11) - fVar35 * fVar5
                   ));
    fVar33 = fabsf(((fVar50 * fVar39 + fVar60 * (fVar37 * fVar31 - fVar34 * fVar62)) -
                   fVar38 * fVar61) -
                   ((fVar48 * fVar58 + (fVar59 * fVar5 - fVar57 * fVar6) * fVar11) - fVar35 * fVar10
                   ));
    if (fVar32 <= fVar33) {
      fVar32 = fVar33;
    }
    fVar33 = fabsf(((fVar50 * fVar37 + fVar60 * (fVar34 * fVar61 - fVar39 * fVar31)) -
                   fVar38 * fVar62) -
                   ((fVar48 * fVar59 + (fVar57 * fVar10 - fVar58 * fVar5) * fVar11) - fVar35 * fVar6
                   ));
    fVar31 = DAT_01d4c4d4;
    if (fVar32 <= fVar33) {
      fVar32 = fVar33;
    }
    if (fVar32 < *(float *)(param_1 + 0x1be8) * DAT_01d4c4d4) {
      fVar35 = -fVar6;
      fVar62 = -fVar62;
      fVar34 = -fVar10;
      fVar61 = -fVar61;
      fVar32 = fabsf(((fVar60 * fVar45 + fVar40 * fVar42 + fVar46 * fVar61) - fVar49 * fVar62) -
                     ((fVar16 * fVar34 + fVar3 * fVar63 + fVar14 * fVar11) - fVar15 * fVar35));
      fVar33 = fabsf(((fVar45 * fVar62 + fVar40 * fVar61 + fVar60 * fVar49) - fVar46 * fVar42) -
                     ((fVar14 * fVar35 + fVar3 * fVar34 + fVar15 * fVar11) - fVar16 * fVar63));
      if (fVar32 <= fVar33) {
        fVar32 = fVar33;
      }
      fVar33 = fabsf(((fVar49 * fVar42 + fVar40 * fVar62 + fVar60 * fVar46) - fVar45 * fVar61) -
                     ((fVar15 * fVar63 + fVar3 * fVar35 + fVar16 * fVar11) - fVar14 * fVar34));
      if (fVar32 <= fVar33) {
        fVar32 = fVar33;
      }
      fVar33 = fabsf((((fVar60 * fVar40 - fVar45 * fVar42) - fVar49 * fVar61) - fVar46 * fVar62) -
                     (((fVar3 * fVar11 - fVar14 * fVar63) - fVar15 * fVar34) - fVar16 * fVar35));
      if (fVar32 <= fVar33) {
        fVar32 = fVar33;
      }
      if (fVar32 < fVar31) {
        *(ushort *)(param_2 + 1) = (ushort)((int)fVar30 + 0x4fU) & 0xfff0;
        pfVar21 = (float *)FUN_0011c940(param_1 + 0x218);
        if (pfVar21 == (float *)0xffffffffffffffff) {
          pfVar21 = (float *)0x0;
        }
        *param_2 = (long)pfVar21;
        Hint_Prefetch(pfVar21,0,0,0);
        if (0x80 < ((uint)pfVar21 & 0x7f) + ((int)fVar30 + 0x4fU & 0xfffffff0)) {
          Hint_Prefetch(pfVar21 + 0x20,0,0,0);
        }
        *(uint *)(param_1 + 0x1230) = uVar22;
        if (uVar22 != 0) {
          fVar32 = *param_4;
          fVar31 = param_4[1];
          fVar61 = param_4[2];
          fVar37 = param_4[3];
          fVar38 = fVar32 + fVar32;
          fVar39 = fVar31 + fVar31;
          fVar42 = *param_3;
          fVar46 = param_3[1];
          fVar49 = fVar42 + fVar42;
          fVar57 = param_3[2];
          fVar59 = param_3[3];
          fVar50 = fVar46 + fVar46;
          fVar45 = fVar57 * (fVar57 + fVar57);
          fVar65 = fVar61 * (fVar61 + fVar61);
          fVar34 = param_4[4];
          fVar35 = param_4[5];
          fVar40 = (fVar61 + fVar61) * fVar37;
          fVar58 = (fVar57 + fVar57) * fVar59;
          fVar62 = param_4[6];
          fVar33 = 1.0 - fVar32 * fVar38;
          fVar32 = 1.0 - fVar42 * fVar49;
          fVar64 = param_3[6];
          fVar60 = param_3[4];
          fVar63 = param_3[5];
          fVar42 = fVar3 * fVar3 + -0.5;
          lVar24 = 0;
          pfVar26 = (float *)0x0;
          pfVar27 = pfVar29 + 0x10;
          do {
            if (uVar22 != 1) {
              Hint_Prefetch(pfVar27 + 0x20,0,0,0);
            }
            bVar20 = (int)lVar24 != 0;
            pfVar1 = pfVar27 + 3;
            if (local_f0 != '\0' && bVar20) {
              pfVar1 = pfVar27;
            }
            fVar36 = pfVar1[3];
            fVar47 = pfVar1[2] - fVar9;
            fVar41 = *pfVar1 - fVar8;
            fVar43 = pfVar1[1] - fVar4;
            fVar43 = fVar43 + fVar43;
            fVar41 = fVar41 + fVar41;
            fVar47 = fVar47 + fVar47;
            fVar51 = fVar41 * fVar14 + fVar43 * fVar15 + fVar47 * fVar16;
            fVar53 = fVar51 * fVar14 +
                     (fVar42 * fVar41 - (fVar47 * fVar15 - fVar43 * fVar16) * fVar3);
            fVar55 = fVar51 * fVar15 +
                     (fVar42 * fVar43 - (fVar41 * fVar16 - fVar47 * fVar14) * fVar3);
            fVar51 = (fVar42 * fVar47 - (fVar43 * fVar14 - fVar41 * fVar15) * fVar3) +
                     fVar51 * fVar16;
            fVar43 = *pfVar1 - fVar7;
            fVar47 = pfVar1[1] - fVar12;
            fVar41 = pfVar1[2] - fVar13;
            fVar43 = fVar43 + fVar43;
            fVar47 = fVar47 + fVar47;
            fVar41 = fVar41 + fVar41;
            fVar52 = fVar43 * fVar5 + fVar47 * fVar10 + fVar41 * fVar6;
            fVar54 = fVar52 * fVar5 +
                     (fVar48 * fVar43 - (fVar41 * fVar10 - fVar47 * fVar6) * fVar11);
            fVar56 = fVar52 * fVar10 +
                     (fVar48 * fVar47 - (fVar43 * fVar6 - fVar41 * fVar5) * fVar11);
            fVar41 = (fVar48 * fVar41 - (fVar47 * fVar5 - fVar43 * fVar10) * fVar11) +
                     fVar52 * fVar6;
            fVar43 = fVar34 + (fVar38 * fVar61 + fVar39 * fVar37) * fVar41 +
                              ((1.0 - fVar31 * fVar39) - fVar65) * fVar54 +
                              (fVar38 * fVar31 - fVar40) * fVar56;
            fVar44 = fVar60 + (fVar49 * fVar57 + fVar50 * fVar59) * fVar51 +
                              ((1.0 - fVar46 * fVar50) - fVar45) * fVar53 +
                              (fVar49 * fVar46 - fVar58) * fVar55;
            fVar52 = fVar64 + (fVar32 - fVar46 * fVar50) * fVar51 +
                              (fVar49 * fVar57 - fVar50 * fVar59) * fVar53 +
                              (fVar50 * fVar57 + fVar49 * fVar59) * fVar55;
            fVar47 = fVar35 + (fVar39 * fVar61 - fVar38 * fVar37) * fVar41 +
                              (fVar38 * fVar31 + fVar40) * fVar54 + (fVar33 - fVar65) * fVar56;
            pfVar2 = pfVar27;
            if (local_f0 != '\0' && bVar20) {
              pfVar2 = pfVar26;
            }
            fVar53 = fVar63 + (fVar50 * fVar57 - fVar49 * fVar59) * fVar51 +
                              (fVar49 * fVar46 + fVar58) * fVar53 + (fVar32 - fVar45) * fVar55;
            fVar51 = fVar62 + (fVar33 - fVar31 * fVar39) * fVar41 +
                              (fVar38 * fVar61 - fVar39 * fVar37) * fVar54 +
                              (fVar39 * fVar61 + fVar38 * fVar37) * fVar56;
            pfVar26 = (float *)(param_1 + 0x230 + lVar24);
            *pfVar26 = *pfVar2;
            pfVar26[1] = pfVar2[1];
            fVar41 = pfVar2[2];
            pfVar26[4] = (fVar44 + fVar43) * 0.5;
            pfVar26[2] = fVar41;
            pfVar26[5] = (fVar53 + fVar47) * 0.5;
            pfVar26[6] = (fVar52 + fVar51) * 0.5;
            pfVar26[3] = fVar36 + (fVar52 - fVar51) * pfVar2[2] +
                                  *pfVar2 * (fVar44 - fVar43) + pfVar2[1] * (fVar53 - fVar47);
            if (cVar18 == '\0') {
              pfVar27 = pfVar1 + 4;
              fVar36 = -NAN;
            }
            else {
              pfVar27 = pfVar1 + 5;
              fVar36 = pfVar1[4];
            }
            lVar24 = lVar24 + 0x40;
            uVar22 = uVar22 - 1;
            pfVar26[0xd] = fVar36;
            pfVar26 = pfVar2;
          } while (uVar22 != 0);
        }
        if (pfVar21 != (float *)0x0) {
          *pfVar21 = fVar14;
          pfVar21[1] = fVar15;
          pfVar21[2] = fVar16;
          pfVar21[3] = fVar3;
          pfVar21[4] = fVar8;
          pfVar21[5] = fVar4;
          pfVar21[6] = fVar9;
          pfVar21[7] = fVar5;
          pfVar21[8] = fVar10;
          pfVar21[9] = fVar6;
          pfVar21[10] = fVar11;
          pfVar21[0xb] = fVar7;
          pfVar21[0xc] = fVar12;
          pfVar21[0xd] = fVar13;
          *(ushort *)(pfVar21 + 0xe) = uVar19;
          *(char *)((long)pfVar21 + 0x3b) = local_f0;
          *(char *)((long)pfVar21 + 0x3a) = cVar18;
          pfVar21[0xf] = fVar30;
          memcpy(pfVar21 + 0x10,pfVar29 + 0x10,(ulong)(uint)fVar30);
        }
        return 1;
      }
    }
  }
  local_a8 = param_3 + 5;
  local_b0 = param_3 + 6;
  local_d8 = param_3 + 2;
  local_e0 = param_3 + 1;
  (*param_5)(param_6,param_7,param_3,param_4,param_1 + 0x1be0,param_2,param_1 + 0x230,param_1 + 8);
  fVar3 = *local_e0;
  fVar4 = *local_d8;
  fVar5 = *local_a8;
  fVar6 = *param_3;
  fVar7 = param_3[3];
  fVar8 = param_3[4];
  fVar9 = *param_4;
  fVar10 = param_4[2];
  fVar11 = param_4[3];
  fVar12 = param_4[5];
  uVar22 = *(uint *)(param_1 + 0x1230);
  uVar28 = (ulong)uVar22;
  fVar13 = *local_b0;
  fVar14 = param_4[1];
  fVar15 = param_4[4];
  fVar16 = param_4[6];
  if (uVar22 == 0) {
    *(undefined2 *)(param_2 + 1) = 0x40;
    pfVar29 = (float *)FUN_0011c940(param_1 + 0x218,0x40);
    *param_2 = (long)pfVar29;
    if (pfVar29 == (float *)0x0) {
      return 0;
    }
    if (pfVar29 != (float *)0xffffffffffffffff) {
      *pfVar29 = fVar6;
      pfVar29[1] = fVar3;
      pfVar29[2] = fVar4;
      pfVar29[3] = fVar7;
      pfVar29[4] = fVar8;
      pfVar29[5] = fVar5;
      pfVar29[6] = fVar13;
      pfVar29[7] = fVar9;
      pfVar29[8] = fVar14;
      pfVar29[9] = fVar10;
      pfVar29[10] = fVar11;
      pfVar29[0xb] = fVar15;
      pfVar29[0xc] = fVar12;
      pfVar29[0xd] = fVar16;
      *(undefined2 *)(pfVar29 + 0xe) = 0;
      *(undefined1 *)((long)pfVar29 + 0x3a) = 0;
      goto LAB_0011c878;
    }
  }
  else {
    iVar17 = *(int *)(param_1 + 0x264);
    if (uVar22 != 1) {
      pfVar29 = (float *)(param_1 + 0x278);
      uVar25 = 1;
      do {
        if (((pfVar29[-2] != *(float *)(param_1 + 0x230)) ||
            (pfVar29[-1] != *(float *)(param_1 + 0x234))) ||
           (*pfVar29 != *(float *)(param_1 + 0x238))) {
          iVar23 = 0x20;
          if (iVar17 == -1) {
            iVar23 = 0x1c;
          }
          local_f0 = '\0';
          fVar30 = (float)(iVar23 * uVar22);
          bVar20 = true;
          goto LAB_0011c644;
        }
        uVar25 = uVar25 + 1;
        pfVar29 = pfVar29 + 0x10;
      } while (uVar25 < uVar28);
    }
    iVar23 = 0x14;
    if (iVar17 == -1) {
      iVar23 = 0x10;
    }
    fVar30 = (float)(iVar23 * uVar22 + 0xc);
    bVar20 = false;
    local_f0 = '\x01';
LAB_0011c644:
    *(ushort *)(param_2 + 1) = SUB42(fVar30,0) + 0x4fU & 0xfff0;
    pfVar29 = (float *)FUN_0011c940(param_1 + 0x218);
    if (pfVar29 == (float *)0xffffffffffffffff) {
      pfVar29 = (float *)0x0;
    }
    *param_2 = (long)pfVar29;
    if (pfVar29 != (float *)0x0) {
      *pfVar29 = fVar6;
      pfVar29[1] = fVar3;
      pfVar29[2] = fVar4;
      pfVar29[3] = fVar7;
      pfVar29[4] = fVar8;
      pfVar29[5] = fVar5;
      pfVar29[6] = fVar13;
      pfVar29[7] = fVar9;
      pfVar29[8] = fVar14;
      pfVar29[9] = fVar10;
      pfVar29[10] = fVar11;
      pfVar29[0xb] = fVar15;
      pfVar29[0xc] = fVar12;
      pfVar29[0xd] = fVar16;
      *(bool *)((long)pfVar29 + 0x3a) = iVar17 != -1;
      *(char *)((long)pfVar29 + 0x3b) = local_f0;
      pfVar21 = pfVar29 + 0x10;
      *(short *)(pfVar29 + 0xe) = (short)uVar22;
      pfVar29[0xf] = fVar30;
      if (bVar20) {
        pfVar29 = (float *)(param_1 + 0x230);
        do {
          while( true ) {
            *pfVar21 = *pfVar29;
            pfVar21[1] = pfVar29[1];
            pfVar21[2] = pfVar29[2];
            pfVar21[3] = pfVar29[4];
            pfVar21[4] = pfVar29[5];
            pfVar21[5] = pfVar29[6];
            pfVar21[6] = pfVar29[3];
            if (iVar17 == -1) break;
            pfVar21[7] = pfVar29[0xd];
            pfVar21 = pfVar21 + 8;
            uVar28 = uVar28 - 1;
            pfVar29 = pfVar29 + 0x10;
            if (uVar28 == 0) {
              return 0;
            }
          }
          pfVar21 = pfVar21 + 7;
          uVar28 = uVar28 - 1;
          pfVar29 = pfVar29 + 0x10;
        } while (uVar28 != 0);
      }
      else if (iVar17 == -1) {
        lVar24 = 0;
        pfVar29 = (float *)(param_1 + 0x248);
        do {
          if (lVar24 == 0) {
            *pfVar21 = *(float *)(param_1 + 0x230);
            pfVar21[1] = *(float *)(param_1 + 0x234);
            pfVar21[2] = *(float *)(param_1 + 0x238);
            pfVar21 = pfVar21 + 3;
          }
          *pfVar21 = pfVar29[-2];
          pfVar21[1] = pfVar29[-1];
          pfVar21[2] = *pfVar29;
          pfVar27 = pfVar29 + -3;
          lVar24 = lVar24 + -1;
          pfVar29 = pfVar29 + 0x10;
          pfVar21[3] = *pfVar27;
          pfVar21 = pfVar21 + 4;
        } while (-lVar24 != uVar28);
      }
      else {
        lVar24 = 0;
        pfVar29 = (float *)(param_1 + 0x23c);
        do {
          if (lVar24 == 0) {
            *pfVar21 = *(float *)(param_1 + 0x230);
            pfVar21[1] = *(float *)(param_1 + 0x234);
            pfVar21[2] = *(float *)(param_1 + 0x238);
            pfVar21 = pfVar21 + 3;
          }
          *pfVar21 = pfVar29[1];
          pfVar21[1] = pfVar29[2];
          pfVar21[2] = pfVar29[3];
          pfVar21[3] = *pfVar29;
          pfVar27 = pfVar29 + 10;
          lVar24 = lVar24 + -1;
          pfVar29 = pfVar29 + 0x10;
          pfVar21[4] = *pfVar27;
          pfVar21 = pfVar21 + 5;
        } while (-lVar24 != uVar28);
      }
      return 0;
    }
    *(undefined2 *)(param_2 + 1) = 0x40;
    pfVar29 = (float *)FUN_0011c940(param_1 + 0x218,0x40);
    *param_2 = (long)pfVar29;
    if (pfVar29 == (float *)0x0) {
      return 0;
    }
    if (pfVar29 != (float *)0xffffffffffffffff) {
      *pfVar29 = fVar6;
      pfVar29[1] = fVar3;
      pfVar29[2] = fVar4;
      pfVar29[3] = fVar7;
      pfVar29[4] = fVar8;
      pfVar29[5] = fVar5;
      pfVar29[6] = fVar13;
      pfVar29[7] = fVar9;
      pfVar29[8] = fVar14;
      pfVar29[9] = fVar10;
      pfVar29[10] = fVar11;
      pfVar29[0xb] = fVar15;
      pfVar29[0xc] = fVar12;
      pfVar29[0xd] = fVar16;
      *(bool *)((long)pfVar29 + 0x3a) = iVar17 != -1;
      *(undefined2 *)(pfVar29 + 0xe) = 0;
LAB_0011c878:
      *(char *)((long)pfVar29 + 0x3b) = local_f0;
      pfVar29[0xf] = 0.0;
      return 0;
    }
  }
  *param_2 = 0;
  return 0;
}


