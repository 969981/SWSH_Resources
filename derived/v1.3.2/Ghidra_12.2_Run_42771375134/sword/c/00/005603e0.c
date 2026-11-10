/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005603e0; name: FUN_005603e0
 */


/* WARNING: Removing unreachable block (ram,0x005608b8) */
/* WARNING: Removing unreachable block (ram,0x0056089c) */
/* WARNING: Type propagation algorithm not settling */

int FUN_005603e0(uint *param_1,uint *param_2,long *param_3,byte *param_4,byte *param_5,
                ulong *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar9;
  size_t __n;
  uint uVar10;
  byte bVar11;
  short sVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  byte *pbVar32;
  uint uVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  ulong local_100;
  
  pbVar32 = (byte *)0xffffffffffffffff;
  if ((param_7 & 4) == 0) {
    pbVar32 = param_5 + *param_6 + ~(ulong)param_4;
  }
  if ((param_5 < param_4) || (((ulong)(pbVar32 + 1) & (ulong)pbVar32) != 0)) {
    *param_6 = 0;
    *param_3 = 0;
    return -3;
  }
  uVar21 = *param_1;
  uVar19 = param_1[1];
  uVar23 = (ulong)uVar19;
  uVar33 = param_1[10];
  uVar30 = param_1[8];
  uVar20 = param_1[9];
  uVar28 = (ulong)uVar20;
  uVar31 = *(ulong *)(param_1 + 0xe);
  local_100 = *(ulong *)(param_1 + 0x10);
  iVar18 = -1;
  puVar16 = param_2;
  pbVar35 = param_5;
  if (0x35 < uVar21) goto switchD_00560494_caseD_4;
  lVar27 = *param_3;
  pbVar8 = param_5 + *param_6;
  puVar9 = (uint *)((long)param_2 + lVar27);
  pbVar36 = param_5;
  switch(uVar21) {
  case 0:
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[7] = 1;
    param_1[4] = 1;
    if ((param_7 & 1) != 0) {
      if (lVar27 < 1) {
        uVar31 = 0;
        uVar33 = 0;
        uVar20 = 0;
        uVar30 = 0;
        uVar23 = 0;
        goto LAB_00560758;
      }
      uVar31 = 0;
      uVar33 = 0;
      uVar20 = 0;
      uVar30 = 0;
      uVar23 = 0;
LAB_005606cc:
      puVar16 = (uint *)((long)param_2 + 1);
      param_1[2] = (uint)(byte)*param_2;
      goto joined_r0x00560768;
    }
    uVar31 = 0;
    uVar33 = 0;
    uVar28 = 0;
    uVar30 = 0;
    uVar23 = 0;
    goto LAB_00560858;
  case 1:
    if (0 < lVar27) goto LAB_005606cc;
LAB_00560758:
    uVar19 = (uint)uVar23;
    if ((param_7 >> 1 & 1) != 0) {
      uVar21 = 1;
      iVar18 = 1;
      break;
    }
    param_1[2] = 0;
joined_r0x00560768:
    if (puVar9 <= puVar16) goto LAB_0056076c;
LAB_00560510:
    uVar20 = (uint)(byte)*puVar16;
    puVar16 = (uint *)((long)puVar16 + 1);
LAB_00560774:
    uVar19 = (uint)uVar23;
    uVar21 = param_1[2];
    param_1[3] = uVar20;
    bVar13 = (uVar20 | uVar21 << 8) % 0x1f != 0;
    bVar14 = (uVar20 & 0x20) != 0;
    bVar15 = (uVar21 & 0xf) != 8;
    if ((param_7 >> 2 & 1) == 0) {
      uVar20 = 0x100 << (ulong)(uVar21 >> 4 & 0x1f);
      if ((0x8000 < uVar20 || pbVar32 + 1 < (byte *)(ulong)uVar20) || (bVar15 || (bVar13 || bVar14))
         ) goto LAB_00560800;
    }
    else if (bVar15 || (bVar13 || bVar14)) {
LAB_00560800:
      iVar18 = -1;
      uVar20 = 1;
      uVar21 = 0x24;
      break;
    }
    uVar28 = 0;
LAB_00560858:
    do {
      uVar19 = (uint)uVar23;
      while (uVar19 < 3) {
        puVar17 = puVar16;
        if (puVar16 < puVar9) {
LAB_00560528:
          puVar16 = (uint *)((long)puVar17 + 1);
          uVar25 = (ulong)(byte)*puVar17;
        }
        else {
LAB_00560970:
          uVar19 = (uint)uVar23;
          uVar20 = (uint)uVar28;
          if ((param_7 >> 1 & 1) != 0) {
            iVar18 = 1;
            uVar21 = 3;
            goto switchD_00560494_caseD_24;
          }
          uVar25 = 0;
        }
        uVar19 = (int)uVar23 + 8;
        uVar31 = uVar25 << (uVar23 & 0x3f) | uVar31;
        uVar23 = (ulong)uVar19;
      }
      uVar20 = (uint)uVar28;
      uVar26 = (uint)uVar31;
      uVar21 = uVar26 >> 1 & 3;
      param_1[6] = uVar21;
      uVar31 = uVar31 >> 3;
      uVar19 = uVar19 - 3;
      uVar23 = (ulong)uVar19;
      param_1[5] = uVar26 & 7;
      if (uVar21 == 0) {
LAB_005608a0:
        uVar28 = 0;
        uVar31 = uVar31 >> (uVar19 & 7);
        uVar23 = (ulong)(uVar19 - (uVar19 & 7));
        do {
          while( true ) {
            uVar20 = (uint)uVar28;
            uVar19 = (uint)uVar23;
            if (uVar19 != 0) break;
            if (puVar16 < puVar9) {
              uVar23 = 0;
              *(byte *)((long)param_1 + uVar28 + 0x2928) = (byte)*puVar16;
              puVar16 = (uint *)((long)puVar16 + 1);
            }
            else {
              uVar23 = 0;
              uVar19 = 0;
              if ((param_7 >> 1 & 1) != 0) goto LAB_00560b98;
LAB_00560acc:
              uVar20 = (uint)uVar28;
              *(undefined1 *)((long)param_1 + uVar28 + 0x2928) = 0;
            }
            uVar28 = (ulong)(uVar20 + 1);
            if (3 < uVar20 + 1) goto LAB_00560b10;
          }
          if (uVar19 < 8) {
            do {
              puVar17 = puVar16;
              if (puVar16 < puVar9) {
LAB_00560554:
                puVar16 = (uint *)((long)puVar17 + 1);
                uVar25 = (ulong)(byte)*puVar17;
              }
              else {
LAB_00560bb8:
                uVar19 = (uint)uVar23;
                uVar20 = (uint)uVar28;
                if ((param_7 >> 1 & 1) != 0) {
                  iVar18 = 1;
                  uVar21 = 6;
                  goto switchD_00560494_caseD_24;
                }
                uVar25 = 0;
              }
              uVar31 = uVar25 << (uVar23 & 0x3f) | uVar31;
              uVar20 = (uint)uVar23;
              uVar19 = uVar20 + 8;
              uVar23 = (ulong)uVar19;
            } while (0xfffffff7 < uVar20);
          }
          uVar23 = (ulong)(uVar19 - 8);
          *(char *)((long)param_1 + uVar28 + 0x2928) = (char)uVar31;
          uVar31 = uVar31 >> 8;
          uVar20 = (uint)uVar28;
joined_r0x00560584:
          uVar28 = (ulong)(uVar20 + 1);
        } while (uVar20 + 1 < 4);
LAB_00560b10:
        uVar19 = (uint)uVar23;
        uVar20 = (uint)(ushort)param_1[0xa4a];
        if (uVar20 != (*(ushort *)((long)param_1 + 0x292a) ^ 0xffff))
        goto switchD_00560494_caseD_27;
        while ((uVar28 = (ulong)uVar20, uVar20 != 0 && (uVar19 = (uint)uVar23, uVar19 != 0))) {
          if (uVar19 < 8) {
            do {
              puVar17 = puVar16;
              if (puVar16 < puVar9) {
LAB_005606a0:
                puVar16 = (uint *)((long)puVar17 + 1);
                uVar25 = (ulong)(byte)*puVar17;
              }
              else {
LAB_00560bf4:
                uVar19 = (uint)uVar23;
                uVar20 = (uint)uVar28;
                if ((param_7 >> 1 & 1) != 0) {
                  iVar18 = 1;
                  uVar21 = 0x33;
                  goto switchD_00560494_caseD_24;
                }
                uVar25 = 0;
              }
              uVar20 = (uint)uVar28;
              uVar31 = uVar25 << (uVar23 & 0x3f) | uVar31;
              uVar21 = (uint)uVar23;
              uVar19 = uVar21 + 8;
              uVar23 = (ulong)uVar19;
            } while (0xfffffff7 < uVar21);
          }
          uVar30 = (uint)uVar31 & 0xff;
          uVar31 = uVar31 >> 8;
          uVar23 = (ulong)(uVar19 - 8);
switchD_00560494_caseD_34:
          uVar19 = (uint)uVar23;
          if (pbVar8 <= pbVar35) {
            iVar18 = 2;
            uVar21 = 0x34;
            goto switchD_00560494_caseD_24;
          }
          uVar20 = uVar20 - 1;
          *pbVar35 = (byte)uVar30;
          pbVar35 = pbVar35 + 1;
        }
        while (uVar20 != 0) {
switchD_00560494_caseD_9:
          uVar19 = (uint)uVar23;
          uVar20 = (uint)uVar28;
          if (pbVar8 <= pbVar35) {
            iVar18 = 2;
            uVar21 = 9;
            goto switchD_00560494_caseD_24;
          }
switchD_00560494_caseD_26:
          uVar19 = (uint)uVar23;
          uVar20 = (uint)uVar28;
          if (puVar9 <= puVar16) {
            if ((param_7 >> 1 & 1) == 0) goto switchD_00560494_caseD_28;
            iVar18 = 1;
            uVar21 = 0x26;
            goto switchD_00560494_caseD_24;
          }
          __n = (long)pbVar8 - (long)pbVar35;
          if ((ulong)((long)puVar9 - (long)puVar16) <= (ulong)((long)pbVar8 - (long)pbVar35)) {
            __n = (long)puVar9 - (long)puVar16;
          }
          if (uVar28 <= __n) {
            __n = uVar28;
          }
          memcpy(pbVar35,puVar16,__n);
          puVar16 = (uint *)((long)puVar16 + __n);
          pbVar35 = pbVar35 + __n;
          uVar20 = uVar20 - (int)__n;
          uVar28 = (ulong)uVar20;
        }
        uVar19 = (uint)uVar23;
        uVar20 = (uint)uVar28;
        bVar11 = (byte)param_1[5];
      }
      else {
        if (uVar21 != 1) {
          if (uVar21 == 3) goto switchD_00560494_caseD_a;
          uVar28 = 0;
          goto LAB_005609a0;
        }
        param_1[0xb] = 0x120;
        param_1[0xc] = 0x20;
        param_1[0x380] = 0x5050505;
        param_1[0x381] = 0x5050505;
        param_1[0x37e] = 0x5050505;
        param_1[0x37f] = 0x5050505;
        param_1[0x37c] = 0x5050505;
        param_1[0x37d] = 0x5050505;
        param_1[0x37a] = 0x5050505;
        param_1[0x37b] = 0x5050505;
        param_1[0x4e] = 0x9090909;
        param_1[0x4f] = 0x9090909;
        param_1[0x50] = 0x9090909;
        param_1[0x51] = 0x9090909;
        param_1[0x4a] = 0x9090909;
        param_1[0x4b] = 0x9090909;
        param_1[0x4c] = 0x9090909;
        param_1[0x4d] = 0x9090909;
        param_1[0x46] = 0x9090909;
        param_1[0x47] = 0x9090909;
        param_1[0x48] = 0x9090909;
        param_1[0x49] = 0x9090909;
        param_1[0x42] = 0x9090909;
        param_1[0x43] = 0x9090909;
        param_1[0x44] = 0x9090909;
        param_1[0x45] = 0x9090909;
        param_1[0x3e] = 0x9090909;
        param_1[0x3f] = 0x9090909;
        param_1[0x40] = 0x9090909;
        param_1[0x41] = 0x9090909;
        param_1[0x3a] = 0x9090909;
        param_1[0x3b] = 0x9090909;
        param_1[0x3c] = 0x9090909;
        param_1[0x3d] = 0x9090909;
        param_1[0x36] = 0x9090909;
        param_1[0x37] = 0x9090909;
        param_1[0x38] = 0x9090909;
        param_1[0x39] = 0x9090909;
        param_1[0x32] = 0x8080808;
        param_1[0x33] = 0x8080808;
        param_1[0x34] = 0x8080808;
        param_1[0x35] = 0x8080808;
        param_1[0x2e] = 0x8080808;
        param_1[0x2f] = 0x8080808;
        param_1[0x30] = 0x8080808;
        param_1[0x31] = 0x8080808;
        param_1[0x2a] = 0x8080808;
        param_1[0x2b] = 0x8080808;
        param_1[0x2c] = 0x8080808;
        param_1[0x2d] = 0x8080808;
        param_1[0x26] = 0x8080808;
        param_1[0x27] = 0x8080808;
        param_1[0x28] = 0x8080808;
        param_1[0x29] = 0x8080808;
        param_1[0x22] = 0x8080808;
        param_1[0x23] = 0x8080808;
        param_1[0x24] = 0x8080808;
        param_1[0x25] = 0x8080808;
        param_1[0x1e] = 0x8080808;
        param_1[0x1f] = 0x8080808;
        param_1[0x20] = 0x8080808;
        param_1[0x21] = 0x8080808;
        param_1[0x1a] = 0x8080808;
        param_1[0x1b] = 0x8080808;
        param_1[0x1c] = 0x8080808;
        param_1[0x1d] = 0x8080808;
        param_1[0x16] = 0x8080808;
        param_1[0x17] = 0x8080808;
        param_1[0x18] = 0x8080808;
        param_1[0x19] = 0x8080808;
        param_1[0x12] = 0x8080808;
        param_1[0x13] = 0x8080808;
        param_1[0x14] = 0x8080808;
        param_1[0x15] = 0x8080808;
        param_1[0x52] = 0x7070707;
        param_1[0x53] = 0x7070707;
        param_1[0x54] = 0x7070707;
        param_1[0x55] = 0x7070707;
        param_1[0x56] = 0x7070707;
        param_1[0x57] = 0x7070707;
        param_1[0x58] = 0x8080808;
        param_1[0x59] = 0x8080808;
        uVar19 = param_1[6];
        if (-1 < (int)uVar19) {
LAB_00560ec0:
                    /* WARNING: Subroutine does not return */
          memset(param_1 + (ulong)uVar19 * 0x368 + 0x5a,0,0xc80);
        }
joined_r0x00560a84:
        while( true ) {
          uVar19 = (uint)uVar23;
          if ((3 < (long)puVar9 - (long)puVar16) && (1 < (long)pbVar8 - (long)pbVar35)) break;
          if (uVar19 < 0xf) {
            if ((long)puVar9 - (long)puVar16 < 2) {
              do {
                sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0x168);
                uVar20 = (uint)sVar12;
                uVar19 = (uint)uVar23;
                if (sVar12 < 0) {
                  if (10 < uVar19) {
                    uVar21 = 0xb;
                    do {
                      uVar20 = (uint)*(short *)((long)param_1 +
                                               ((uVar31 >> ((ulong)(uVar21 - 1) & 0x3f) & 1) +
                                               (long)(int)~uVar20) * 2 + 0x968);
                      if (-1 < (int)uVar20) goto LAB_005617e8;
                      uVar21 = uVar21 + 1;
                    } while (uVar21 <= uVar19);
                  }
                }
                else if (((int)sVar12 >> 9) - 1U < uVar19) break;
                puVar17 = puVar16;
                if (puVar16 < puVar9) {
LAB_005605fc:
                  puVar16 = (uint *)((long)puVar17 + 1);
                  uVar22 = (ulong)(byte)*puVar17;
                  uVar25 = uVar23;
                }
                else {
LAB_005617c8:
                  uVar19 = (uint)uVar23;
                  uVar20 = (uint)uVar28;
                  if ((param_7 >> 1 & 1) != 0) {
                    iVar18 = 1;
                    uVar21 = 0x17;
                    goto switchD_00560494_caseD_24;
                  }
                  uVar22 = 0;
                  uVar25 = uVar23;
                }
                uVar19 = (int)uVar25 + 8;
                uVar23 = (ulong)uVar19;
                uVar31 = uVar22 << (uVar25 & 0x3f) | uVar31;
              } while (uVar19 < 0xf);
              goto LAB_005617e8;
            }
            uVar20 = uVar19 + 8;
            uVar19 = uVar19 + 0x10;
            uVar31 = (ulong)(byte)*puVar16 << (uVar23 & 0x3f) | uVar31 |
                     (ulong)*(byte *)((long)puVar16 + 1) << ((ulong)uVar20 & 0x3f);
            puVar16 = (uint *)((long)puVar16 + 2);
            sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0x168);
            if (sVar12 < 0) goto LAB_00561804;
LAB_005617f8:
            uVar20 = (int)sVar12 >> 9;
            uVar28 = (ulong)((int)sVar12 & 0x1ff);
          }
          else {
LAB_005617e8:
            sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0x168);
            if (-1 < sVar12) goto LAB_005617f8;
LAB_00561804:
            uVar28 = (ulong)sVar12;
            uVar20 = 10;
            do {
              uVar23 = (ulong)uVar20;
              uVar20 = uVar20 + 1;
              sVar12 = *(short *)((long)param_1 +
                                 ((uVar31 >> (uVar23 & 0x3f) & 1) + (long)(int)~(uint)uVar28) * 2 +
                                 0x968);
              uVar28 = (ulong)sVar12;
            } while (sVar12 < 0);
          }
          uVar31 = uVar31 >> ((ulong)uVar20 & 0x3f);
          uVar23 = (ulong)(uVar19 - uVar20);
          uVar26 = (uint)uVar28;
          if (0xff < uVar26) goto joined_r0x00561848;
switchD_00560494_caseD_18:
          uVar19 = (uint)uVar23;
          uVar20 = (uint)uVar28;
          if (pbVar8 <= pbVar35) {
            iVar18 = 2;
            uVar21 = 0x18;
            goto switchD_00560494_caseD_24;
          }
          *pbVar35 = (byte)uVar28;
          pbVar35 = pbVar35 + 1;
        }
        if (uVar19 < 0x1e) {
          uVar20 = *puVar16;
          puVar16 = puVar16 + 1;
          uVar19 = uVar19 + 0x20;
          uVar31 = (ulong)uVar20 << (uVar23 & 0x3f) | uVar31;
        }
        sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0x168);
        uVar28 = (ulong)sVar12;
        if (sVar12 < 0) {
          uVar20 = 10;
          do {
            uVar23 = (ulong)uVar20;
            uVar20 = uVar20 + 1;
            sVar12 = *(short *)((long)param_1 +
                               ((uVar31 >> (uVar23 & 0x3f) & 1) + (long)(int)~(uint)uVar28) * 2 +
                               0x968);
            uVar28 = (ulong)sVar12;
            uVar21 = (uint)sVar12;
          } while ((int)uVar21 < 0);
        }
        else {
          uVar20 = (int)sVar12 >> 9;
          uVar21 = (uint)sVar12;
        }
        uVar26 = (uint)uVar28;
        uVar23 = (ulong)(uVar19 - uVar20);
        uVar31 = uVar31 >> ((ulong)uVar20 & 0x3f);
        if ((uVar21 >> 8 & 1) == 0) {
          sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0x168);
          uVar26 = (uint)sVar12;
          if (sVar12 < 0) {
            uVar21 = 10;
            do {
              uVar23 = (ulong)uVar21;
              uVar21 = uVar21 + 1;
              uVar26 = (uint)*(short *)((long)param_1 +
                                       ((uVar31 >> (uVar23 & 0x3f) & 1) + (long)(int)~uVar26) * 2 +
                                       0x968);
            } while ((int)uVar26 < 0);
          }
          else {
            uVar21 = (int)sVar12 >> 9;
          }
          uVar31 = uVar31 >> ((ulong)uVar21 & 0x3f);
          uVar23 = (ulong)((uVar19 - uVar20) - uVar21);
          *pbVar35 = (byte)uVar28;
          if ((uVar26 >> 8 & 1) == 0) {
            pbVar35[1] = (byte)uVar26;
            pbVar35 = pbVar35 + 2;
            goto joined_r0x00560a84;
          }
          pbVar35 = pbVar35 + 1;
        }
joined_r0x00561848:
        uVar19 = (uint)uVar23;
        if ((uVar26 & 0x1ff) != 0x100) {
          uVar25 = (ulong)((uVar26 & 0x1ff) - 0x101);
          lVar27 = uVar25 * 4;
          uVar33 = *(uint *)(&DAT_01d6c864 + lVar27);
          uVar20 = *(uint *)(&DAT_01d6c7e8 + lVar27);
          uVar28 = (ulong)uVar20;
          if (uVar25 - 8 < 0x14) {
            if (uVar19 < uVar33) {
              do {
                puVar17 = puVar16;
                if (puVar16 < puVar9) {
LAB_00560614:
                  puVar16 = (uint *)((long)puVar17 + 1);
                  uVar22 = (ulong)(byte)*puVar17;
                  uVar25 = uVar23;
                }
                else {
LAB_005618bc:
                  uVar19 = (uint)uVar23;
                  uVar20 = (uint)uVar28;
                  if ((param_7 >> 1 & 1) != 0) {
                    iVar18 = 1;
                    uVar21 = 0x19;
                    goto switchD_00560494_caseD_24;
                  }
                  uVar22 = 0;
                  uVar25 = uVar23;
                }
                uVar20 = (uint)uVar28;
                uVar19 = (int)uVar25 + 8;
                uVar23 = (ulong)uVar19;
                uVar31 = uVar22 << (uVar25 & 0x3f) | uVar31;
              } while (uVar19 < uVar33);
            }
            uVar21 = (uint)uVar31;
            uVar31 = uVar31 >> ((ulong)uVar33 & 0x3f);
            uVar23 = (ulong)(uVar19 - uVar33);
            uVar28 = (ulong)((uVar21 & (-1 << (ulong)(uVar33 & 0x1f) ^ 0xffffffffU)) + uVar20);
          }
          uVar19 = (uint)uVar23;
          if (uVar19 < 0xf) {
            if ((long)puVar9 - (long)puVar16 < 2) {
              do {
                sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0xf08);
                uVar20 = (uint)sVar12;
                uVar19 = (uint)uVar23;
                if (sVar12 < 0) {
                  if (10 < uVar19) {
                    uVar21 = 0xb;
                    do {
                      uVar20 = (uint)*(short *)((long)param_1 +
                                               ((uVar31 >> ((ulong)(uVar21 - 1) & 0x3f) & 1) +
                                               (long)(int)~uVar20) * 2 + 0x1708);
                      if (-1 < (int)uVar20) goto LAB_00561a00;
                      uVar21 = uVar21 + 1;
                    } while (uVar21 <= uVar19);
                  }
                }
                else if (((int)sVar12 >> 9) - 1U < uVar19) break;
                puVar17 = puVar16;
                if (puVar16 < puVar9) {
LAB_0056062c:
                  puVar16 = (uint *)((long)puVar17 + 1);
                  uVar22 = (ulong)(byte)*puVar17;
                  uVar25 = uVar23;
                }
                else {
LAB_005619e0:
                  uVar19 = (uint)uVar23;
                  uVar20 = (uint)uVar28;
                  if ((param_7 >> 1 & 1) != 0) {
                    iVar18 = 1;
                    uVar21 = 0x1a;
                    goto switchD_00560494_caseD_24;
                  }
                  uVar22 = 0;
                  uVar25 = uVar23;
                }
                uVar19 = (int)uVar25 + 8;
                uVar23 = (ulong)uVar19;
                uVar31 = uVar22 << (uVar25 & 0x3f) | uVar31;
              } while (uVar19 < 0xf);
              goto LAB_00561a00;
            }
            uVar20 = uVar19 + 8;
            uVar19 = uVar19 + 0x10;
            uVar31 = (ulong)(byte)*puVar16 << (uVar23 & 0x3f) | uVar31 |
                     (ulong)*(byte *)((long)puVar16 + 1) << ((ulong)uVar20 & 0x3f);
            puVar16 = (uint *)((long)puVar16 + 2);
            sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0xf08);
            if (sVar12 < 0) goto LAB_00561a1c;
LAB_00561a10:
            uVar20 = (int)sVar12 >> 9;
            uVar25 = (ulong)((int)sVar12 & 0x1ff);
          }
          else {
LAB_00561a00:
            sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0xf08);
            if (-1 < sVar12) goto LAB_00561a10;
LAB_00561a1c:
            uVar25 = (ulong)sVar12;
            uVar20 = 10;
            do {
              uVar23 = (ulong)uVar20;
              uVar20 = uVar20 + 1;
              sVar12 = *(short *)((long)param_1 +
                                 ((uVar31 >> (uVar23 & 0x3f) & 1) + (long)(int)~(uint)uVar25) * 2 +
                                 0x1708);
              uVar25 = (ulong)sVar12;
            } while (sVar12 < 0);
          }
          uVar33 = *(uint *)(&DAT_01d6c960 + uVar25 * 4);
          uVar30 = *(uint *)(&DAT_01d6c8e0 + uVar25 * 4);
          uVar31 = uVar31 >> ((ulong)uVar20 & 0x3f);
          uVar19 = uVar19 - uVar20;
          uVar23 = (ulong)uVar19;
          if (uVar25 - 4 < 0x1a) {
            if (uVar19 < uVar33) {
              do {
                puVar17 = puVar16;
                if (puVar16 < puVar9) {
LAB_00560644:
                  puVar16 = (uint *)((long)puVar17 + 1);
                  uVar22 = (ulong)(byte)*puVar17;
                  uVar25 = uVar23;
                }
                else {
LAB_00561a88:
                  uVar19 = (uint)uVar23;
                  uVar20 = (uint)uVar28;
                  if ((param_7 >> 1 & 1) != 0) {
                    iVar18 = 1;
                    uVar21 = 0x1b;
                    goto switchD_00560494_caseD_24;
                  }
                  uVar22 = 0;
                  uVar25 = uVar23;
                }
                uVar19 = (int)uVar25 + 8;
                uVar23 = (ulong)uVar19;
                uVar31 = uVar22 << (uVar25 & 0x3f) | uVar31;
              } while (uVar19 < uVar33);
            }
            uVar20 = (uint)uVar31;
            uVar31 = uVar31 >> ((ulong)uVar33 & 0x3f);
            uVar23 = (ulong)(uVar19 - uVar33);
            uVar30 = uVar30 + (uVar20 & (-1 << (ulong)(uVar33 & 0x1f) ^ 0xffffffffU));
          }
          uVar19 = (uint)uVar23;
          uVar20 = (uint)uVar28;
          local_100 = (long)pbVar35 - (long)param_4;
          if (local_100 < uVar30 && (param_7 & 4) != 0) goto switchD_00560494_caseD_25;
          pbVar36 = param_4 + (local_100 - uVar30 & (ulong)pbVar32);
          pbVar24 = pbVar35;
          if (pbVar35 <= pbVar36) {
            pbVar24 = pbVar36;
          }
          if (pbVar8 < pbVar24 + uVar28) {
            while ((int)uVar28 != 0) {
              uVar28 = (ulong)((int)uVar28 - 1);
              pbVar36 = pbVar35;
switchD_00560494_caseD_35:
              uVar19 = (uint)uVar23;
              uVar20 = (uint)uVar28;
              if (pbVar8 <= pbVar36) {
                iVar18 = 2;
                uVar21 = 0x35;
                pbVar35 = pbVar36;
                goto switchD_00560494_caseD_24;
              }
              pbVar35 = pbVar36 + 1;
              *pbVar36 = param_4[local_100 - uVar30 & (ulong)pbVar32];
              local_100 = local_100 + 1;
            }
            uVar28 = 0xffffffff;
          }
          else {
            pbVar36 = pbVar36 + 1;
            do {
              pbVar34 = pbVar35;
              pbVar24 = pbVar36;
              *pbVar34 = pbVar24[-1];
              pbVar34[1] = *pbVar24;
              uVar19 = (int)uVar28 - 3;
              uVar28 = (ulong)uVar19;
              pbVar34[2] = pbVar24[1];
              pbVar35 = pbVar34 + 3;
              pbVar36 = pbVar24 + 3;
            } while (2 < (int)uVar19);
            if (0 < (int)uVar19) {
              *pbVar35 = pbVar24[2];
              if (uVar19 != 1) {
                pbVar34[4] = pbVar24[3];
              }
              pbVar35 = pbVar35 + uVar19;
            }
          }
          goto joined_r0x00560a84;
        }
        uVar28 = 0x100;
        uVar20 = 0x100;
        bVar11 = (byte)param_1[5];
      }
    } while ((bVar11 & 1) == 0);
    if ((param_7 & 1) != 0) {
LAB_0056185c:
      uVar28 = 0;
      uVar31 = uVar31 >> (uVar19 & 7);
      uVar23 = (ulong)(uVar19 - (uVar19 & 7));
      while( true ) {
        uVar19 = (uint)uVar23;
        uVar20 = (uint)uVar28;
        if (3 < uVar20) break;
        puVar17 = puVar16;
        if (uVar19 == 0) {
          if (puVar16 < puVar9) {
            puVar17 = (uint *)((long)puVar16 + 1);
            uVar21 = (uint)(byte)*puVar16;
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            uVar19 = 0;
            if ((param_7 >> 1 & 1) != 0) goto LAB_00561c40;
LAB_00561c28:
            uVar21 = 0;
          }
        }
        else {
          if (uVar19 < 8) {
            do {
              puVar17 = puVar16;
              if (puVar16 < puVar9) {
LAB_00560670:
                puVar16 = (uint *)((long)puVar17 + 1);
                uVar25 = (ulong)(byte)*puVar17;
              }
              else {
LAB_00561c54:
                uVar19 = (uint)uVar23;
                uVar20 = (uint)uVar28;
                if ((param_7 >> 1 & 1) != 0) {
                  iVar18 = 1;
                  uVar21 = 0x29;
                  goto switchD_00560494_caseD_24;
                }
                uVar25 = 0;
              }
              uVar20 = (uint)uVar28;
              uVar31 = uVar25 << (uVar23 & 0x3f) | uVar31;
              uVar21 = (uint)uVar23;
              uVar19 = uVar21 + 8;
              uVar23 = (ulong)uVar19;
              puVar17 = puVar16;
            } while (0xfffffff7 < uVar21);
          }
          uVar21 = (uint)uVar31 & 0xff;
          uVar31 = uVar31 >> 8;
          uVar23 = (ulong)(uVar19 - 8);
        }
LAB_00561c2c:
        param_1[4] = uVar21 | param_1[4] << 8;
        uVar28 = (ulong)(uVar20 + 1);
        puVar16 = puVar17;
      }
    }
switchD_00560494_caseD_22:
    iVar18 = 0;
    uVar21 = 0x22;
    break;
  case 2:
    if (0 < lVar27) goto LAB_00560510;
LAB_0056076c:
    uVar19 = (uint)uVar23;
    if ((param_7 >> 1 & 1) == 0) {
      uVar20 = 0;
      goto LAB_00560774;
    }
    iVar18 = 1;
    uVar21 = 2;
    break;
  case 3:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_00560970;
    goto LAB_00560528;
  default:
    goto switchD_00560494_caseD_4;
  case 5:
    if (0 < lVar27) {
      uVar28 = (ulong)(byte)*param_2;
      puVar16 = (uint *)((long)param_2 + 1);
LAB_005606f0:
      uVar19 = uVar19 + 8;
      uVar31 = uVar28 << (uVar23 & 0x3f) | uVar31;
      goto LAB_005608a0;
    }
    if ((param_7 >> 1 & 1) == 0) {
      uVar28 = 0;
      goto LAB_005606f0;
    }
    uVar21 = 5;
LAB_0056084c:
    iVar18 = 1;
    break;
  case 6:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_00560bb8;
    goto LAB_00560554;
  case 7:
    if (0 < lVar27) {
      puVar16 = (uint *)((long)param_2 + 1);
      *(byte *)((long)param_1 + uVar28 + 0x2928) = (byte)*param_2;
      goto joined_r0x00560584;
    }
    if ((param_7 >> 1 & 1) == 0) goto LAB_00560acc;
LAB_00560b98:
    iVar18 = 1;
    uVar21 = 7;
    break;
  case 9:
    goto switchD_00560494_caseD_9;
  case 10:
switchD_00560494_caseD_a:
    iVar18 = -1;
    uVar21 = 10;
    break;
  case 0xb:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_005609c0;
    goto LAB_0056059c;
  case 0xe:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_00560e90;
LAB_005605b4:
    puVar16 = (uint *)((long)puVar17 + 1);
    uVar25 = (ulong)(byte)*puVar17;
    do {
      uVar19 = (int)uVar23 + 8;
      uVar31 = uVar25 << (uVar23 & 0x3f) | uVar31;
      uVar23 = (ulong)uVar19;
      while (2 < uVar19) {
        bVar11 = (byte)uVar31;
        pbVar36 = &DAT_01d6cb76 + uVar28;
        uVar20 = (int)uVar28 + 1;
        uVar28 = (ulong)uVar20;
        uVar31 = uVar31 >> 3;
        uVar19 = (int)uVar23 - 3;
        uVar23 = (ulong)uVar19;
        *(byte *)((long)param_1 + (ulong)*pbVar36 + 0x1b88) = bVar11 & 7;
        if (param_1[0xd] <= uVar20) {
          param_1[0xd] = 0x13;
          uVar19 = param_1[6];
joined_r0x005614f0:
          if ((int)uVar19 < 0) goto joined_r0x00560a84;
          goto LAB_00560ec0;
        }
      }
      puVar17 = puVar16;
      if (puVar16 < puVar9) goto LAB_005605b4;
LAB_00560e90:
      uVar19 = (uint)uVar23;
      uVar20 = (uint)uVar28;
      if ((param_7 >> 1 & 1) != 0) {
        iVar18 = 1;
        uVar21 = 0xe;
        break;
      }
      uVar25 = 0;
    } while( true );
  case 0x10:
    if (lVar27 < 1) goto LAB_00561404;
LAB_005605cc:
    uVar22 = (ulong)(byte)*puVar16;
    puVar16 = (uint *)((long)puVar16 + 1);
    uVar25 = uVar23;
LAB_0056140c:
    uVar19 = (int)uVar25 + 8;
    uVar23 = (ulong)uVar19;
    uVar31 = uVar22 << (uVar25 & 0x3f) | uVar31;
    if (uVar19 < 0xf) goto LAB_0056139c;
LAB_00561424:
    uVar30 = (uint)*(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0x1ca8);
    if ((int)uVar30 < 0) goto LAB_00561440;
    do {
      uVar19 = (int)uVar30 >> 9;
      uVar30 = uVar30 & 0x1ff;
      uVar25 = uVar28;
      while( true ) {
        uVar31 = uVar31 >> ((ulong)uVar19 & 0x3f);
        uVar19 = (int)uVar23 - uVar19;
        uVar23 = (ulong)uVar19;
        if (0xf < uVar30) {
          if (((int)uVar25 != 0) || (uVar30 != 0x10)) {
            uVar28 = (ulong)(uVar30 - 0x10);
            uVar33 = (uint)(byte)(&DAT_01d2befc)[uVar28];
            if (uVar33 <= uVar19) goto LAB_0056157c;
            goto LAB_00561550;
          }
          uVar20 = 0;
          goto switchD_00560494_caseD_11;
        }
        uVar20 = (int)uVar25 + 1;
        uVar28 = (ulong)uVar20;
        *(char *)((long)param_1 + uVar25 + 0x292c) = (char)uVar30;
        uVar26 = param_1[0xb];
        uVar10 = param_1[0xc];
        uVar21 = uVar10 + uVar26;
        if (uVar21 <= uVar20) {
          if (uVar21 != uVar20) goto switchD_00560494_caseD_15;
          memcpy(param_1 + 0x12,param_1 + 0xa4b,(ulong)uVar26);
          memcpy(param_1 + 0x37a,(void *)((long)(param_1 + 0xa4b) + (ulong)uVar26),(ulong)uVar10);
          uVar19 = param_1[6] - 1;
          param_1[6] = uVar19;
          goto joined_r0x005614f0;
        }
        if (uVar19 < 0xf) {
          if ((long)puVar9 - (long)puVar16 < 2) goto LAB_0056139c;
          uVar23 = (ulong)(uVar19 + 0x10);
          uVar31 = (ulong)(byte)*puVar16 << ((ulong)uVar19 & 0x3f) | uVar31 |
                   (ulong)*(byte *)((long)puVar16 + 1) << ((ulong)(uVar19 + 8) & 0x3f);
          puVar16 = (uint *)((long)puVar16 + 2);
        }
        uVar30 = (uint)*(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0x1ca8);
        if (-1 < (int)uVar30) break;
LAB_00561440:
        uVar19 = 10;
        do {
          uVar25 = (ulong)uVar19;
          uVar19 = uVar19 + 1;
          uVar30 = (uint)*(short *)((long)param_1 +
                                   ((uVar31 >> (uVar25 & 0x3f) & 1) + (long)(int)~uVar30) * 2 +
                                   0x24a8);
          uVar25 = uVar28;
        } while ((int)uVar30 < 0);
      }
    } while( true );
  case 0x11:
switchD_00560494_caseD_11:
    iVar18 = -1;
    uVar21 = 0x11;
    break;
  case 0x12:
    uVar25 = uVar28;
    if (lVar27 < 1) goto LAB_00561558;
    goto LAB_005605e4;
  case 0x15:
switchD_00560494_caseD_15:
    iVar18 = -1;
    uVar21 = 0x15;
    break;
  case 0x17:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_005617c8;
    goto LAB_005605fc;
  case 0x18:
    goto switchD_00560494_caseD_18;
  case 0x19:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_005618bc;
    goto LAB_00560614;
  case 0x1a:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_005619e0;
    goto LAB_0056062c;
  case 0x1b:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_00561a88;
    goto LAB_00560644;
  case 0x20:
    if (lVar27 < 1) {
      if ((param_7 >> 1 & 1) != 0) {
        uVar21 = 0x20;
        goto LAB_0056084c;
      }
      uVar28 = 0;
    }
    else {
      uVar28 = (ulong)(byte)*param_2;
      puVar16 = (uint *)((long)param_2 + 1);
    }
    uVar19 = uVar19 + 8;
    uVar31 = uVar28 << (uVar23 & 0x3f) | uVar31;
    goto LAB_0056185c;
  case 0x22:
    goto switchD_00560494_caseD_22;
  case 0x23:
    iVar18 = -1;
    uVar21 = 0x23;
    break;
  case 0x24:
    break;
  case 0x25:
switchD_00560494_caseD_25:
    iVar18 = -1;
    uVar21 = 0x25;
    break;
  case 0x26:
    goto switchD_00560494_caseD_26;
  case 0x27:
switchD_00560494_caseD_27:
    iVar18 = -1;
    uVar21 = 0x27;
    break;
  case 0x28:
switchD_00560494_caseD_28:
    iVar18 = -1;
    uVar21 = 0x28;
    break;
  case 0x29:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_00561c54;
    goto LAB_00560670;
  case 0x2a:
    if (0 < lVar27) {
      puVar17 = (uint *)((long)param_2 + 1);
      uVar21 = (uint)(byte)*param_2;
      goto LAB_00561c2c;
    }
    puVar17 = param_2;
    if ((param_7 >> 1 & 1) == 0) goto LAB_00561c28;
LAB_00561c40:
    iVar18 = 1;
    uVar21 = 0x2a;
    break;
  case 0x33:
    puVar17 = param_2;
    if (lVar27 < 1) goto LAB_00560bf4;
    goto LAB_005606a0;
  case 0x34:
    goto switchD_00560494_caseD_34;
  case 0x35:
    goto switchD_00560494_caseD_35;
  }
switchD_00560494_caseD_24:
  *param_1 = uVar21;
switchD_00560494_caseD_4:
  param_1[8] = uVar30;
  param_1[9] = uVar20;
  param_1[1] = uVar19;
  *(ulong *)(param_1 + 0xe) = uVar31;
  *(ulong *)(param_1 + 0x10) = local_100;
  param_1[10] = uVar33;
  *param_3 = (long)puVar16 - (long)param_2;
  uVar23 = (long)pbVar35 - (long)param_5;
  *param_6 = uVar23;
  if (((param_7 & 9) != 0) && (-1 < iVar18)) {
    uVar19 = param_1[7] & 0xffff;
    uVar20 = param_1[7] >> 0x10;
    if (uVar23 != 0) {
      uVar28 = uVar23 % 0x15b0;
      do {
        if (uVar28 < 8) {
          uVar31 = 0;
          if (uVar28 != 0) goto LAB_00560de4;
        }
        else {
          uVar31 = 0;
          do {
            pbVar32 = param_5 + uVar31;
            iVar1 = uVar19 + *pbVar32;
            iVar2 = iVar1 + (uint)pbVar32[1];
            iVar3 = iVar2 + (uint)pbVar32[2];
            iVar4 = iVar3 + (uint)pbVar32[3];
            iVar5 = iVar4 + (uint)pbVar32[4];
            iVar6 = iVar5 + (uint)pbVar32[5];
            iVar7 = iVar6 + (uint)pbVar32[6];
            uVar19 = iVar7 + (uint)pbVar32[7];
            iVar29 = (int)uVar31;
            uVar31 = uVar31 + 8;
            uVar20 = iVar1 + uVar20 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + uVar19;
          } while (iVar29 + 0xf < uVar28);
          param_5 = param_5 + uVar31;
          if ((uVar31 & 0xffffffff) < uVar28) {
LAB_00560de4:
            uVar30 = (uint)uVar31;
            pbVar32 = param_5;
            do {
              uVar30 = uVar30 + 1;
              param_5 = pbVar32 + 1;
              uVar19 = uVar19 + *pbVar32;
              uVar20 = uVar19 + uVar20;
              pbVar32 = param_5;
            } while (uVar30 < uVar28);
          }
        }
        uVar19 = uVar19 % 0xfff1;
        uVar20 = uVar20 % 0xfff1;
        uVar23 = uVar23 - uVar28;
        uVar28 = 0x15b0;
      } while (uVar23 != 0);
    }
    uVar19 = uVar19 | uVar20 << 0x10;
    param_1[7] = uVar19;
    if ((((param_7 & 1) != 0) && (iVar18 == 0)) && (iVar18 = 0, uVar19 != param_1[4])) {
      iVar18 = -2;
    }
  }
  return iVar18;
LAB_00561550:
  if (puVar16 < puVar9) {
LAB_005605e4:
    uVar22 = (ulong)(byte)*puVar16;
    puVar16 = (uint *)((long)puVar16 + 1);
    uVar28 = uVar23;
  }
  else {
LAB_00561558:
    uVar19 = (uint)uVar23;
    uVar20 = (uint)uVar25;
    if ((param_7 >> 1 & 1) != 0) {
      iVar18 = 1;
      uVar21 = 0x12;
      goto switchD_00560494_caseD_24;
    }
    uVar22 = 0;
    uVar28 = uVar23;
  }
  uVar19 = (int)uVar28 + 8;
  uVar23 = (ulong)uVar19;
  uVar31 = uVar22 << (uVar28 & 0x3f) | uVar31;
  if (uVar33 <= uVar19) {
    uVar28 = (ulong)(uVar30 - 0x10);
LAB_0056157c:
    if (uVar30 == 0x10) {
      uVar19 = (uint)*(byte *)((long)param_1 + (ulong)((int)uVar25 - 1) + 0x292c);
    }
    else {
      uVar19 = 0;
    }
                    /* WARNING: Subroutine does not return */
    memset((void *)((long)param_1 + uVar25 + 0x292c),uVar19,
           (ulong)(((uint)uVar31 & (-1 << (ulong)(uVar33 & 0x1f) ^ 0xffffffffU)) +
                  (uint)(byte)(&DAT_01cdd662)[uVar28]));
  }
  goto LAB_00561550;
LAB_0056139c:
  sVar12 = *(short *)((long)param_1 + (uVar31 & 0x3ff) * 2 + 0x1ca8);
  uVar19 = (uint)sVar12;
  uVar20 = (uint)uVar23;
  if (sVar12 < 0) {
    if (uVar20 < 0xb) goto LAB_005613fc;
    uVar21 = 0xb;
    while (uVar19 = (uint)*(short *)((long)param_1 +
                                    ((uVar31 >> ((ulong)(uVar21 - 1) & 0x3f) & 1) +
                                    (long)(int)~uVar19) * 2 + 0x24a8), (int)uVar19 < 0) {
      uVar21 = uVar21 + 1;
      if (uVar20 < uVar21) goto LAB_005613fc;
    }
    goto LAB_00561424;
  }
  if (uVar20 <= ((int)sVar12 >> 9) - 1U) goto LAB_005613fc;
  goto LAB_00561424;
LAB_005613fc:
  if (puVar16 < puVar9) goto LAB_005605cc;
LAB_00561404:
  uVar19 = (uint)uVar23;
  uVar20 = (uint)uVar28;
  if ((param_7 >> 1 & 1) != 0) {
    iVar18 = 1;
    uVar21 = 0x10;
    goto switchD_00560494_caseD_24;
  }
  uVar22 = 0;
  uVar25 = uVar23;
  goto LAB_0056140c;
LAB_005609a0:
  while( true ) {
    bVar11 = (&DAT_01d09d4a)[uVar28];
    if ((uint)uVar23 < (uint)bVar11) break;
    uVar19 = (uint)uVar31;
    uVar31 = uVar31 >> ((ulong)bVar11 & 0x3f);
    uVar23 = (ulong)((uint)uVar23 - (uint)bVar11);
    param_1[uVar28 + 0xb] =
         (uVar19 & (-1 << (ulong)(bVar11 & 0x1f) ^ 0xffffffffU)) + (&DAT_01d6c9e0)[uVar28];
    uVar19 = (int)uVar28 + 1;
    uVar28 = (ulong)uVar19;
    if (2 < uVar19) {
                    /* WARNING: Subroutine does not return */
      memset(param_1 + 0x6e2,0,0x120);
    }
  }
  puVar17 = puVar16;
  if (puVar16 < puVar9) {
LAB_0056059c:
    puVar16 = (uint *)((long)puVar17 + 1);
    uVar22 = (ulong)(byte)*puVar17;
    uVar25 = uVar23;
  }
  else {
LAB_005609c0:
    uVar19 = (uint)uVar23;
    uVar20 = (uint)uVar28;
    if ((param_7 >> 1 & 1) != 0) {
      iVar18 = 1;
      uVar21 = 0xb;
      goto switchD_00560494_caseD_24;
    }
    uVar22 = 0;
    uVar25 = uVar23;
  }
  uVar23 = (ulong)((int)uVar25 + 8);
  uVar31 = uVar22 << (uVar25 & 0x3f) | uVar31;
  goto LAB_005609a0;
}


