/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006919b0; name: FUN_006919b0
 */


/* WARNING: Removing unreachable block (ram,0x00692584) */
/* WARNING: Removing unreachable block (ram,0x00691b40) */
/* WARNING: Removing unreachable block (ram,0x00692c6c) */

int FUN_006919b0(long *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  char *pcVar14;
  undefined1 *puVar16;
  undefined1 *puVar15;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  ulong uVar23;
  undefined2 uVar24;
  uint uVar25;
  undefined1 *__dest;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  uint uVar31;
  int iVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  uint *puVar37;
  int local_84;
  uint local_74;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  
  if ((((param_1 != (long *)0x0) && (puVar37 = (uint *)param_1[7], puVar37 != (uint *)0x0)) &&
      (__dest = (undefined1 *)param_1[3], __dest != (undefined1 *)0x0)) &&
     ((pbVar29 = (byte *)*param_1, pbVar29 != (byte *)0x0 || ((int)param_1[1] == 0)))) {
    uVar11 = *puVar37;
    if (uVar11 == 0xb) {
      uVar11 = 0xc;
      *puVar37 = 0xc;
      __dest = (undefined1 *)param_1[3];
      pbVar29 = (byte *)*param_1;
    }
    local_84 = 0;
    uVar26 = *(uint *)(param_1 + 4);
    uVar4 = *(uint *)(param_1 + 1);
    uVar36 = *(ulong *)(puVar37 + 0x12);
    uVar28 = (ulong)puVar37[0x14];
    puVar1 = puVar37 + 0x154;
    puVar2 = puVar37 + 0x22;
    puVar3 = puVar37 + 0xc4;
    uVar33 = (ulong)uVar4;
    local_74 = uVar26;
    if (uVar11 < 0x1f) {
LAB_00691a6c:
      uVar35 = (uint)uVar28;
      uVar31 = (uint)uVar33;
      pbVar13 = pbVar29;
      pbVar30 = pbVar29;
      iVar32 = 1;
      switch((long)&switchD_00691a84::switchdataD_0213e1a8 +
             (long)(int)(&switchD_00691a84::switchdataD_0213e1a8)[uVar11]) {
      case 0x691a88:
        uVar11 = puVar37[2];
        if (uVar11 == 0) {
          uVar11 = 0xc;
          goto LAB_0069321c;
        }
        if (uVar35 < 0x10) {
          uVar18 = uVar28 & 0xffffffff;
          if (uVar31 == 0) goto LAB_00693418;
          pbVar13 = pbVar29 + 1;
          uVar33 = uVar28 & 0x3f;
          uVar28 = uVar18 + 8;
          uVar35 = uVar31 - 1;
          uVar36 = ((ulong)*pbVar29 << uVar33) + uVar36;
          if (0xf < uVar28) {
LAB_00691adc:
            uVar33 = (ulong)uVar35;
            pbVar29 = pbVar13;
            goto LAB_00691ae4;
          }
          if (uVar35 != 0) {
            uVar35 = uVar31 - 2;
            pbVar13 = pbVar29 + 2;
            uVar36 = ((ulong)pbVar29[1] << (uVar28 & 0x3f)) + uVar36;
            uVar28 = uVar18 + 0x10;
            goto LAB_00691adc;
          }
          goto LAB_00693420;
        }
LAB_00691ae4:
        if (((uVar11 >> 1 & 1) == 0) || (uVar36 != 0x8b1f)) {
          puVar37[4] = 0;
          if (*(long *)(puVar37 + 10) != 0) {
            *(undefined4 *)(*(long *)(puVar37 + 10) + 0x48) = 0xffffffff;
            uVar11 = puVar37[2];
          }
          if (((uVar11 & 1) == 0) ||
             (uVar18 = (uVar36 & 0xff) * 0x100 + (uVar36 >> 8),
             uVar18 + (uVar18 / 0x1f + (uVar18 - uVar18 / 0x1f >> 1) >> 4) * -0x1f != 0)) {
            pcVar14 = "incorrect header check";
            goto LAB_00693214;
          }
          if ((uVar36 & 0xf) != 8) goto LAB_0069320c;
          uVar35 = (uint)(uVar36 >> 4) & 0xf;
          uVar11 = uVar35 + 8;
          if (puVar37[0xc] == 0) {
            puVar37[0xc] = uVar11;
          }
          else if (puVar37[0xc] < uVar11) {
            uVar36 = uVar36 >> 4;
            uVar28 = (ulong)((int)uVar28 - 4);
            pcVar14 = "invalid window size";
            goto LAB_00693214;
          }
          puVar37[5] = 0x100 << (ulong)uVar35;
          lVar10 = FUN_0068ef30(0,0,0);
          uVar11 = 0xb;
          if ((uVar36 & 0x2000) != 0) {
            uVar11 = 9;
          }
          uVar28 = 0;
          *(long *)(puVar37 + 6) = lVar10;
          param_1[0xc] = lVar10;
          *puVar37 = uVar11;
          uVar36 = 0;
          goto joined_r0x00691dac;
        }
        uVar9 = FUN_0068f300(0,0,0);
        *(undefined8 *)(puVar37 + 6) = uVar9;
        local_64 = 0x8b1f;
        uVar9 = FUN_0068f300(uVar9,&local_64,2);
        uVar36 = 0;
        uVar28 = 0;
        *(undefined8 *)(puVar37 + 6) = uVar9;
        *puVar37 = 1;
        uVar11 = 1;
        goto LAB_00691a6c;
      case 0x691b44:
        if (uVar35 < 0x10) {
          uVar18 = uVar28 & 0xffffffff;
          if (uVar31 != 0) {
            pbVar13 = pbVar29 + 1;
            uVar33 = uVar28 & 0x3f;
            uVar28 = uVar18 + 8;
            uVar11 = uVar31 - 1;
            uVar36 = ((ulong)*pbVar29 << uVar33) + uVar36;
            if (uVar28 < 0x10) {
              if (uVar11 == 0) goto LAB_006932e0;
              uVar11 = uVar31 - 2;
              pbVar13 = pbVar29 + 2;
              uVar36 = ((ulong)pbVar29[1] << (uVar28 & 0x3f)) + uVar36;
              uVar28 = uVar18 + 0x10;
            }
            uVar33 = (ulong)uVar11;
            pbVar29 = pbVar13;
            goto LAB_00691b98;
          }
          goto LAB_006932d8;
        }
LAB_00691b98:
        uVar31 = (uint)uVar33;
        uVar11 = (uint)uVar36;
        puVar37[4] = uVar11;
        if ((uVar11 & 0xff) == 8) {
          if ((uVar36 & 0xe000) == 0) {
            if (*(uint **)(puVar37 + 10) != (uint *)0x0) {
              **(uint **)(puVar37 + 10) = uVar11 >> 8 & 1;
              uVar11 = puVar37[4];
            }
            if ((uVar11 >> 9 & 1) != 0) {
              local_64 = (undefined2)uVar36;
              uVar9 = FUN_0068f300(*(undefined8 *)(puVar37 + 6),&local_64,2);
              *(undefined8 *)(puVar37 + 6) = uVar9;
            }
            uVar28 = 0;
            uVar36 = 0;
            *puVar37 = 2;
            pbVar13 = pbVar29;
            goto LAB_006925e4;
          }
          pcVar14 = "unknown header flags set";
        }
        else {
LAB_0069320c:
          pcVar14 = "unknown compression method";
        }
        goto LAB_00693214;
      case 0x691bbc:
        if (uVar35 < 0x20) {
LAB_006925e4:
          uVar18 = uVar28 & 0xffffffff;
          if (uVar31 == 0) break;
          pbVar30 = pbVar13 + 1;
          uVar36 = ((ulong)*pbVar13 << (uVar28 & 0x3f)) + uVar36;
          uVar19 = uVar18 + 8;
          uVar11 = uVar31 - 1;
          if (0x1f < uVar19) {
LAB_00692678:
            pbVar29 = pbVar30;
            uVar31 = uVar11;
            goto LAB_00692680;
          }
          if (uVar11 != 0) {
            uVar36 = ((ulong)pbVar13[1] << (uVar19 & 0x3f)) + uVar36;
            uVar19 = uVar18 + 0x10;
            uVar11 = uVar31 - 2;
            pbVar30 = pbVar13 + 2;
            if (0x1f < uVar19) goto LAB_00692678;
            if (uVar11 == 0) goto LAB_0069346c;
            uVar28 = uVar19 & 0x3f;
            uVar19 = uVar18 + 0x18;
            uVar11 = uVar31 - 3;
            pbVar30 = pbVar13 + 3;
            uVar36 = ((ulong)pbVar13[2] << uVar28) + uVar36;
            if (0x1f < uVar19) goto LAB_00692678;
            if (uVar11 == 0) goto LAB_0069346c;
            pbVar29 = pbVar13 + 3;
            pbVar13 = pbVar13 + 4;
            uVar31 = uVar31 - 4;
            uVar36 = ((ulong)*pbVar29 << (uVar19 & 0x3f)) + uVar36;
            lVar10 = *(long *)(puVar37 + 10);
            goto joined_r0x00692684;
          }
LAB_0069346c:
          uVar18 = uVar19;
          pbVar13 = pbVar30;
        }
        else {
LAB_00692680:
          lVar10 = *(long *)(puVar37 + 10);
          pbVar13 = pbVar29;
joined_r0x00692684:
          if (lVar10 != 0) {
            *(ulong *)(lVar10 + 8) = uVar36;
          }
          if ((*(byte *)((long)puVar37 + 0x11) >> 1 & 1) != 0) {
            local_62 = (undefined1)(uVar36 >> 0x10);
            local_64 = (undefined2)uVar36;
            local_61 = (undefined1)(uVar36 >> 0x18);
            uVar9 = FUN_0068f300(*(undefined8 *)(puVar37 + 6),&local_64,4);
            *(undefined8 *)(puVar37 + 6) = uVar9;
          }
          uVar28 = 0;
          uVar36 = 0;
          *puVar37 = 3;
LAB_006926d8:
          uVar18 = uVar28 & 0xffffffff;
          if (uVar31 != 0) {
            pbVar30 = pbVar13 + 1;
            uVar19 = uVar18 + 8;
            uVar36 = ((ulong)*pbVar13 << (uVar28 & 0x3f)) + uVar36;
            if (0xf < uVar19) {
              uVar33 = (ulong)(uVar31 - 1);
              pbVar29 = pbVar30;
              goto LAB_0069272c;
            }
            if (uVar31 - 1 == 0) goto LAB_0069346c;
            pbVar29 = pbVar13 + 2;
            uVar33 = (ulong)(uVar31 - 2);
            uVar36 = ((ulong)pbVar13[1] << (uVar19 & 0x3f)) + uVar36;
            lVar10 = *(long *)(puVar37 + 10);
            goto joined_r0x00692730;
          }
        }
        break;
      case 0x691bc8:
        if (uVar35 < 0x10) goto LAB_006926d8;
LAB_0069272c:
        lVar10 = *(long *)(puVar37 + 10);
joined_r0x00692730:
        if (lVar10 != 0) {
          *(uint *)(lVar10 + 0x10) = (uint)uVar36 & 0xff;
          *(int *)(*(long *)(puVar37 + 10) + 0x14) = (int)(uVar36 >> 8);
        }
        if ((*(byte *)((long)puVar37 + 0x11) >> 1 & 1) != 0) {
          local_64 = (undefined2)uVar36;
          uVar9 = FUN_0068f300(*(undefined8 *)(puVar37 + 6),&local_64,2);
          *(undefined8 *)(puVar37 + 6) = uVar9;
        }
        uVar36 = 0;
        uVar28 = 0;
        *puVar37 = 4;
      case 0x692784:
        uVar11 = puVar37[4];
        if ((uVar11 >> 10 & 1) == 0) {
          if (*(long *)(puVar37 + 10) != 0) {
            *(undefined8 *)(*(long *)(puVar37 + 10) + 0x18) = 0;
          }
        }
        else {
          pbVar13 = pbVar29;
          if ((uint)uVar28 < 0x10) {
            uVar18 = uVar28 & 0xffffffff;
            iVar32 = (int)uVar33;
            if (iVar32 == 0) break;
            pbVar13 = pbVar29 + 1;
            uVar18 = uVar18 + 8;
            uVar36 = ((ulong)*pbVar29 << (uVar28 & 0x3f)) + uVar36;
            if (0xf < uVar18) {
              uVar33 = (ulong)(iVar32 - 1U);
              goto LAB_006927fc;
            }
            if (iVar32 - 1U == 0) break;
            pbVar30 = pbVar29 + 1;
            pbVar29 = pbVar29 + 2;
            uVar33 = (ulong)(iVar32 - 2);
            uVar35 = ((uint)*pbVar30 << (uVar18 & 0x3f)) + (int)uVar36;
            lVar10 = *(long *)(puVar37 + 10);
            puVar37[0x15] = uVar35;
          }
          else {
LAB_006927fc:
            lVar10 = *(long *)(puVar37 + 10);
            uVar35 = (uint)uVar36;
            puVar37[0x15] = uVar35;
            pbVar29 = pbVar13;
          }
          if (lVar10 != 0) {
            *(uint *)(lVar10 + 0x20) = uVar35;
            uVar11 = puVar37[4];
          }
          if ((uVar11 >> 9 & 1) == 0) {
            uVar36 = 0;
            uVar28 = 0;
          }
          else {
            local_64 = (undefined2)uVar35;
            uVar9 = FUN_0068f300(*(undefined8 *)(puVar37 + 6),&local_64,2);
            uVar36 = 0;
            uVar28 = 0;
            *(undefined8 *)(puVar37 + 6) = uVar9;
          }
        }
        *puVar37 = 5;
switchD_00691a84_caseD_692854:
        uVar11 = puVar37[4];
        if ((uVar11 >> 10 & 1) != 0) {
          uVar34 = puVar37[0x15];
          uVar31 = (uint)uVar33;
          uVar35 = uVar31;
          if (uVar34 <= uVar31) {
            uVar35 = uVar34;
          }
          if (uVar35 != 0) {
            lVar10 = *(long *)(puVar37 + 10);
            if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
              uVar34 = *(int *)(lVar10 + 0x20) - uVar34;
              uVar11 = *(uint *)(lVar10 + 0x24) - uVar34;
              if (uVar34 + uVar35 <= *(uint *)(lVar10 + 0x24)) {
                uVar11 = uVar35;
              }
              memcpy((void *)(*(long *)(lVar10 + 0x18) + (ulong)uVar34),pbVar29,(ulong)uVar11);
              uVar11 = puVar37[4];
            }
            if ((uVar11 >> 9 & 1) != 0) {
              uVar9 = FUN_0068f300(*(undefined8 *)(puVar37 + 6),pbVar29,uVar35);
              *(undefined8 *)(puVar37 + 6) = uVar9;
            }
            pbVar29 = pbVar29 + uVar35;
            uVar33 = (ulong)(uVar31 - uVar35);
            uVar34 = puVar37[0x15] - uVar35;
            puVar37[0x15] = uVar34;
          }
          uVar31 = (uint)uVar33;
          if (uVar34 == 0) goto LAB_006928dc;
LAB_006932e8:
          uVar35 = (uint)uVar28;
          pbVar13 = pbVar29;
          iVar32 = local_84;
          goto switchD_00691a84_caseD_6932ec;
        }
LAB_006928dc:
        puVar37[0x15] = 0;
        *puVar37 = 6;
switchD_00691a84_caseD_6928e8:
        uVar11 = (uint)uVar33;
        if ((*(byte *)((long)puVar37 + 0x11) >> 3 & 1) != 0) {
          uVar31 = 0;
          if (uVar11 != 0) {
            uVar18 = 0;
            do {
              bVar5 = pbVar29[uVar18];
              lVar10 = *(long *)(puVar37 + 10);
              uVar18 = uVar18 + 1;
              if ((lVar10 != 0) && (lVar12 = *(long *)(lVar10 + 0x28), lVar12 != 0)) {
                uVar35 = puVar37[0x15];
                if (uVar35 < *(uint *)(lVar10 + 0x30)) {
                  puVar37[0x15] = uVar35 + 1;
                  *(byte *)(lVar12 + (ulong)uVar35) = bVar5;
                }
              }
            } while ((bVar5 != 0) && ((uint)uVar18 < uVar11));
            if ((*(byte *)((long)puVar37 + 0x11) >> 1 & 1) != 0) {
              uVar9 = FUN_0068f300(*(undefined8 *)(puVar37 + 6),pbVar29,uVar18 & 0xffffffff);
              *(undefined8 *)(puVar37 + 6) = uVar9;
            }
            pbVar29 = pbVar29 + uVar18;
            if (bVar5 == 0) {
              uVar33 = (uVar33 & 0xffffffff) - uVar18;
              goto LAB_0069297c;
            }
LAB_006932d0:
            uVar31 = uVar11 - (int)uVar18;
          }
          goto LAB_006932e8;
        }
        if (*(long *)(puVar37 + 10) != 0) {
          *(undefined8 *)(*(long *)(puVar37 + 10) + 0x28) = 0;
        }
LAB_0069297c:
        puVar37[0x15] = 0;
        *puVar37 = 7;
switchD_00691a84_caseD_692988:
        uVar11 = (uint)uVar33;
        if ((*(byte *)((long)puVar37 + 0x11) >> 4 & 1) == 0) {
          if (*(long *)(puVar37 + 10) != 0) {
            *(undefined8 *)(*(long *)(puVar37 + 10) + 0x38) = 0;
          }
        }
        else {
          uVar31 = 0;
          if (uVar11 == 0) goto LAB_006932e8;
          uVar18 = 0;
          do {
            bVar5 = pbVar29[uVar18];
            lVar10 = *(long *)(puVar37 + 10);
            uVar18 = uVar18 + 1;
            if ((lVar10 != 0) && (lVar12 = *(long *)(lVar10 + 0x38), lVar12 != 0)) {
              uVar35 = puVar37[0x15];
              if (uVar35 < *(uint *)(lVar10 + 0x40)) {
                puVar37[0x15] = uVar35 + 1;
                *(byte *)(lVar12 + (ulong)uVar35) = bVar5;
              }
            }
          } while ((bVar5 != 0) && ((uint)uVar18 < uVar11));
          if ((*(byte *)((long)puVar37 + 0x11) >> 1 & 1) != 0) {
            uVar9 = FUN_0068f300(*(undefined8 *)(puVar37 + 6),pbVar29,uVar18 & 0xffffffff);
            *(undefined8 *)(puVar37 + 6) = uVar9;
          }
          pbVar29 = pbVar29 + uVar18;
          if (bVar5 != 0) goto LAB_006932d0;
          uVar33 = (uVar33 & 0xffffffff) - uVar18;
        }
        *puVar37 = 8;
switchD_00691a84_caseD_692a24:
        if ((puVar37[4] >> 9 & 1) == 0) {
LAB_00692a94:
          if (*(long *)(puVar37 + 10) != 0) {
            *(uint *)(*(long *)(puVar37 + 10) + 0x44) = puVar37[4] >> 9 & 1;
            *(undefined4 *)(*(long *)(puVar37 + 10) + 0x48) = 1;
          }
          lVar10 = FUN_0068f300(0,0,0);
          *(long *)(puVar37 + 6) = lVar10;
          param_1[0xc] = lVar10;
          uVar11 = 0xb;
LAB_00692acc:
          *puVar37 = uVar11;
        }
        else {
          if ((uint)uVar28 < 0x10) {
            uVar18 = uVar28 & 0xffffffff;
            iVar32 = (int)uVar33;
            pbVar13 = pbVar29;
            if (iVar32 == 0) {
LAB_00693418:
              uVar28 = uVar18;
LAB_00693420:
              uVar35 = (uint)uVar28;
              uVar31 = 0;
              iVar32 = local_84;
              goto switchD_00691a84_caseD_6932ec;
            }
            pbVar13 = pbVar29 + 1;
            uVar33 = uVar28 & 0x3f;
            uVar28 = uVar18 + 8;
            uVar11 = iVar32 - 1;
            uVar36 = ((ulong)*pbVar29 << uVar33) + uVar36;
            if (uVar28 < 0x10) {
              if (uVar11 == 0) goto LAB_00693420;
              uVar11 = iVar32 - 2;
              pbVar13 = pbVar29 + 2;
              uVar36 = ((ulong)pbVar29[1] << (uVar28 & 0x3f)) + uVar36;
              uVar28 = uVar18 + 0x10;
            }
            uVar33 = (ulong)uVar11;
            pbVar29 = pbVar13;
          }
          if (uVar36 == (ushort)puVar37[6]) {
            uVar36 = 0;
            uVar28 = 0;
            goto LAB_00692a94;
          }
          pcVar14 = "header crc mismatch";
LAB_00693214:
          param_1[6] = (long)pcVar14;
          uVar11 = 0x1d;
LAB_0069321c:
          *puVar37 = uVar11;
LAB_00693220:
          uVar11 = *puVar37;
        }
joined_r0x00691dac:
        if (0x1e < uVar11) {
          return -2;
        }
        goto LAB_00691a6c;
      case 0x691bd4:
        if (0x1f < uVar35) {
LAB_0069205c:
          uVar18 = uVar36 >> 8 & 0xff00 | uVar36 >> 0x18 & 0xff | (uVar36 >> 8 & 0xff) << 0x10 |
                   (uVar36 & 0xff) << 0x18;
          uVar28 = 0;
          uVar36 = 0;
          *(ulong *)(puVar37 + 6) = uVar18;
          param_1[0xc] = uVar18;
          *puVar37 = 10;
          goto switchD_00691a84_caseD_692088;
        }
        uVar18 = uVar28 & 0xffffffff;
        if (uVar31 != 0) {
          pbVar30 = pbVar29 + 1;
          uVar36 = ((ulong)*pbVar29 << (uVar28 & 0x3f)) + uVar36;
          uVar19 = uVar18 + 8;
          uVar11 = uVar31 - 1;
          if (0x1f < uVar19) {
LAB_00692054:
            uVar33 = (ulong)uVar11;
            goto LAB_0069205c;
          }
          if (uVar11 != 0) {
            uVar36 = ((ulong)pbVar29[1] << (uVar19 & 0x3f)) + uVar36;
            uVar19 = uVar18 + 0x10;
            uVar11 = uVar31 - 2;
            pbVar30 = pbVar29 + 2;
            if (0x1f < uVar19) goto LAB_00692054;
            if (uVar11 != 0) {
              uVar28 = uVar19 & 0x3f;
              uVar19 = uVar18 + 0x18;
              uVar11 = uVar31 - 3;
              pbVar30 = pbVar29 + 3;
              uVar36 = ((ulong)pbVar29[2] << uVar28) + uVar36;
              if (0x1f < uVar19) goto LAB_00692054;
              if (uVar11 != 0) {
                pbVar30 = pbVar29 + 4;
                uVar33 = (ulong)(uVar31 - 4);
                uVar36 = ((ulong)pbVar29[3] << (uVar19 & 0x3f)) + uVar36;
                goto LAB_0069205c;
              }
            }
          }
          goto LAB_0069346c;
        }
        break;
      case 0x691c68:
        uVar11 = uVar35 - (uVar35 & 7);
        uVar18 = (ulong)uVar11;
        uVar36 = uVar36 >> (uVar35 & 7);
        uVar28 = uVar18;
        if (0x1f < uVar11) {
LAB_00691d10:
          uVar31 = (uint)uVar33;
          if ((uVar36 & 0xffff) == (uVar36 >> 0x10 ^ 0xffff)) {
            uVar11 = (uint)uVar36;
            uVar36 = 0;
            puVar37[0x15] = uVar11 & 0xffff;
            uVar28 = 0;
            *puVar37 = 0xe;
            if (param_2 != 6) goto switchD_00691a84_caseD_691d48;
            goto LAB_006932e8;
          }
          pcVar14 = "invalid stored block lengths";
          goto LAB_00693214;
        }
        if (uVar31 == 0) goto LAB_006932d8;
        pbVar13 = pbVar29 + 1;
        uVar28 = uVar18 + 8;
        uVar11 = uVar31 - 1;
        uVar36 = ((ulong)*pbVar29 << (uVar18 & 0x3f)) + uVar36;
        if (0x1f < uVar28) {
LAB_00691d08:
          uVar33 = (ulong)uVar11;
          pbVar29 = pbVar13;
          goto LAB_00691d10;
        }
        if (uVar11 != 0) {
          uVar33 = uVar28 & 0x3f;
          uVar28 = uVar18 + 0x10;
          uVar11 = uVar31 - 2;
          pbVar13 = pbVar29 + 2;
          uVar36 = ((ulong)pbVar29[1] << uVar33) + uVar36;
          if (uVar28 < 0x20) {
            if (uVar11 == 0) goto LAB_006932e0;
            uVar33 = uVar28 & 0x3f;
            uVar28 = uVar18 + 0x18;
            uVar11 = uVar31 - 3;
            pbVar13 = pbVar29 + 3;
            uVar36 = ((ulong)pbVar29[2] << uVar33) + uVar36;
            if (uVar28 < 0x20) {
              if (uVar11 == 0) goto LAB_006932e0;
              uVar11 = uVar31 - 4;
              pbVar13 = pbVar29 + 4;
              uVar36 = ((ulong)pbVar29[3] << (uVar28 & 0x3f)) + uVar36;
              uVar28 = uVar18 + 0x20;
            }
          }
          goto LAB_00691d08;
        }
        goto LAB_006932e0;
      case 0x691d48:
switchD_00691a84_caseD_691d48:
        *puVar37 = 0xf;
      case 0x691d50:
        uVar31 = (uint)uVar33;
        uVar11 = puVar37[0x15];
        if (uVar11 == 0) {
LAB_006931c0:
          uVar11 = 0xb;
          goto LAB_0069321c;
        }
        uVar35 = uVar31;
        if (uVar11 <= uVar31) {
          uVar35 = uVar11;
        }
        uVar11 = uVar26;
        if (uVar35 <= uVar26) {
          uVar11 = uVar35;
        }
        if (uVar11 == 0) goto LAB_006932e8;
        uVar18 = (ulong)uVar11;
        memcpy(__dest,pbVar29,uVar18);
        uVar33 = (ulong)(uVar31 - uVar11);
        uVar26 = uVar26 - uVar11;
        __dest = __dest + uVar18;
        puVar37[0x15] = puVar37[0x15] - uVar11;
        uVar11 = *puVar37;
        pbVar29 = pbVar29 + uVar18;
        goto joined_r0x00691dac;
      case 0x691db4:
        if (uVar35 < 0xe) {
          uVar18 = uVar28 & 0xffffffff;
          if (uVar31 == 0) goto LAB_006932d8;
          pbVar13 = pbVar29 + 1;
          uVar33 = uVar28 & 0x3f;
          uVar28 = uVar18 + 8;
          uVar11 = uVar31 - 1;
          uVar36 = ((ulong)*pbVar29 << uVar33) + uVar36;
          if (uVar28 < 0xe) {
            if (uVar11 == 0) goto LAB_006932e0;
            uVar11 = uVar31 - 2;
            pbVar13 = pbVar29 + 2;
            uVar36 = ((ulong)pbVar29[1] << (uVar28 & 0x3f)) + uVar36;
            uVar28 = uVar18 + 0x10;
          }
          uVar35 = (uint)uVar28;
          uVar33 = (ulong)uVar11;
          pbVar29 = pbVar13;
        }
        uVar34 = (uint)uVar36;
        uVar31 = (uVar34 & 0x1f) + 0x101;
        uVar11 = (uVar34 >> 10 & 0xf) + 4;
        uVar34 = uVar34 >> 5 & 0x1f;
        puVar37[0x1e] = uVar11;
        puVar37[0x1f] = uVar31;
        uVar36 = uVar36 >> 0xe;
        puVar37[0x20] = uVar34 + 1;
        uVar28 = (ulong)(uVar35 - 0xe);
        if ((0x11e < uVar31) || (0x1d < uVar34)) {
          pcVar14 = "too many length or distance symbols";
          goto LAB_00693214;
        }
        uVar35 = 0;
        puVar37[0x21] = 0;
        *puVar37 = 0x11;
LAB_00691e64:
        uVar34 = uVar35;
        do {
          uVar27 = (uint)uVar28;
          pbVar30 = pbVar29;
          if (uVar27 < 3) {
            uVar31 = 0;
            if ((int)uVar33 == 0) goto LAB_006932e8;
            pbVar30 = pbVar29 + 1;
            uVar27 = uVar27 + 8;
            uVar33 = (ulong)((int)uVar33 - 1);
            uVar36 = ((ulong)*pbVar29 << (uVar28 & 0x3f)) + uVar36;
          }
          uVar35 = uVar34 + 1;
          uVar6 = *(ushort *)(&DAT_0213e224 + (ulong)uVar34 * 2);
          puVar37[0x21] = uVar35;
          uVar7 = (ushort)uVar36;
          uVar36 = uVar36 >> 3;
          *(ushort *)((long)puVar37 + (ulong)uVar6 * 2 + 0x90) = uVar7 & 7;
          uVar28 = (ulong)(uVar27 - 3);
          pbVar29 = pbVar30;
          uVar34 = uVar35;
        } while (uVar35 < uVar11);
        goto LAB_00691ec0;
      case 0x691e54:
        uVar35 = puVar37[0x21];
        uVar11 = puVar37[0x1e];
        if (uVar35 < uVar11) goto LAB_00691e64;
LAB_00691ec0:
        if (uVar35 < 0x13) {
          uVar31 = 0x12 - uVar35;
          uVar11 = 3 - uVar35 & 3;
          if (uVar11 != 0) {
            iVar32 = -uVar11;
            uVar11 = uVar35;
            do {
              uVar35 = uVar11 + 1;
              puVar37[0x21] = uVar35;
              *(undefined2 *)
               ((long)puVar37 + (ulong)*(ushort *)(&DAT_0213e224 + (ulong)uVar11 * 2) * 2 + 0x90) =
                   0;
              iVar32 = iVar32 + 1;
              uVar11 = uVar35;
            } while (iVar32 != 0);
          }
          if (2 < uVar31) {
            do {
              puVar37[0x21] = uVar35 + 1;
              *(undefined2 *)
               ((long)puVar37 + (ulong)*(ushort *)(&DAT_0213e224 + (ulong)uVar35 * 2) * 2 + 0x90) =
                   0;
              uVar6 = *(ushort *)(&DAT_0213e224 + (ulong)(uVar35 + 1) * 2);
              puVar37[0x21] = uVar35 + 2;
              *(undefined2 *)((long)puVar37 + (ulong)uVar6 * 2 + 0x90) = 0;
              uVar6 = *(ushort *)(&DAT_0213e224 + (ulong)(uVar35 + 2) * 2);
              uVar11 = uVar35 + 3;
              uVar35 = uVar35 + 4;
              puVar37[0x21] = uVar11;
              *(undefined2 *)((long)puVar37 + (ulong)uVar6 * 2 + 0x90) = 0;
              puVar37[0x21] = uVar35;
              *(undefined2 *)
               ((long)puVar37 + (ulong)*(ushort *)(&DAT_0213e224 + (ulong)uVar11 * 2) * 2 + 0x90) =
                   0;
            } while (uVar35 < 0x13);
          }
        }
        *(uint **)(puVar37 + 0x18) = puVar1;
        *(uint **)(puVar37 + 0x22) = puVar1;
        puVar37[0x1c] = 7;
        local_84 = FUN_00693e30(0,puVar37 + 0x24,0x13,puVar2,puVar37 + 0x1c,puVar3);
        pbVar29 = pbVar30;
        if (local_84 != 0) {
          pcVar14 = "invalid code lengths set";
LAB_00692298:
          param_1[6] = (long)pcVar14;
          uVar11 = 0x1d;
          goto LAB_00692acc;
        }
        uVar11 = 0;
        local_84 = 0;
        puVar37[0x21] = 0;
        *puVar37 = 0x12;
        uVar34 = puVar37[0x1f];
        uVar35 = puVar37[0x20] + uVar34;
        if (uVar35 != 0) {
LAB_006922cc:
          lVar10 = *(long *)(puVar37 + 0x18);
          uVar27 = ~(-1 << (ulong)(puVar37[0x1c] & 0x1f));
          do {
            while( true ) {
              uVar19 = (ulong)(uVar27 & (uint)uVar36);
              bVar5 = *(byte *)(lVar10 + uVar19 * 4 + 1);
              uVar18 = (ulong)bVar5;
              if ((uint)uVar28 < (uint)bVar5) {
                uVar28 = uVar28 & 0xffffffff;
                pbVar29 = pbVar30;
                do {
                  uVar31 = 0;
                  if ((int)uVar33 == 0) goto LAB_006932e8;
                  pbVar30 = pbVar29 + 1;
                  uVar18 = uVar28 & 0x3f;
                  uVar28 = uVar28 + 8;
                  uVar36 = ((ulong)*pbVar29 << uVar18) + uVar36;
                  uVar31 = uVar27 & (uint)uVar36;
                  uVar18 = (ulong)*(byte *)(lVar10 + (ulong)uVar31 * 4 + 1);
                  uVar33 = (ulong)((int)uVar33 - 1);
                  pbVar29 = pbVar30;
                } while (uVar28 < uVar18);
                uVar19 = (ulong)uVar31;
              }
              uVar6 = *(ushort *)(lVar10 + uVar19 * 4 + 2);
              uVar22 = (uint)uVar18;
              uVar31 = (uint)uVar28;
              pbVar29 = pbVar30;
              if (0xf < uVar6) break;
              if (uVar31 < uVar22) {
                uVar28 = uVar28 & 0xffffffff;
                do {
                  uVar31 = 0;
                  if ((int)uVar33 == 0) goto LAB_006932e8;
                  pbVar30 = pbVar29 + 1;
                  uVar19 = uVar28 & 0x3f;
                  uVar28 = uVar28 + 8;
                  uVar33 = (ulong)((int)uVar33 - 1);
                  uVar36 = ((ulong)*pbVar29 << uVar19) + uVar36;
                  pbVar29 = pbVar30;
                } while (uVar28 < uVar18);
              }
              uVar36 = uVar36 >> (uVar18 & 0x3f);
              uVar28 = (ulong)((int)uVar28 - uVar22);
              uVar18 = (ulong)uVar11;
              uVar11 = uVar11 + 1;
              puVar37[0x21] = uVar11;
              *(ushort *)((long)puVar37 + uVar18 * 2 + 0x90) = uVar6;
              pbVar29 = pbVar30;
              if (uVar35 <= uVar11) goto LAB_00692528;
            }
            if (uVar6 == 0x10) {
              if (uVar31 < uVar22 + 2) {
                uVar28 = uVar28 & 0xffffffff;
                do {
                  uVar31 = 0;
                  if ((int)uVar33 == 0) goto LAB_006932e8;
                  pbVar30 = pbVar29 + 1;
                  uVar19 = uVar28 & 0x3f;
                  uVar28 = uVar28 + 8;
                  uVar33 = (ulong)((int)uVar33 - 1);
                  uVar36 = ((ulong)*pbVar29 << uVar19) + uVar36;
                  pbVar29 = pbVar30;
                } while (uVar28 < uVar22 + 2);
              }
              uVar36 = uVar36 >> (uVar18 & 0x3f);
              uVar22 = (int)uVar28 - uVar22;
              uVar28 = (ulong)uVar22;
              if (uVar11 != 0) {
                uVar24 = *(undefined2 *)((long)puVar37 + (ulong)(uVar11 - 1) * 2 + 0x90);
                uVar31 = (uint)uVar36;
                uVar36 = uVar36 >> 2;
                uVar31 = (uVar31 & 3) + 3;
                uVar28 = (ulong)(uVar22 - 2);
                if (uVar31 + uVar11 <= uVar35) goto LAB_006924a8;
              }
LAB_00693230:
              pcVar14 = "invalid bit length repeat";
              pbVar29 = pbVar30;
              goto LAB_00693214;
            }
            if (uVar6 == 0x11) {
              if (uVar31 < uVar22 + 3) {
                uVar28 = uVar28 & 0xffffffff;
                do {
                  uVar31 = 0;
                  if ((int)uVar33 == 0) goto LAB_006932e8;
                  pbVar30 = pbVar29 + 1;
                  uVar19 = uVar28 & 0x3f;
                  uVar28 = uVar28 + 8;
                  uVar33 = (ulong)((int)uVar33 - 1);
                  uVar36 = ((ulong)*pbVar29 << uVar19) + uVar36;
                  pbVar29 = pbVar30;
                } while (uVar28 < uVar22 + 3);
              }
              iVar8 = (int)uVar28;
              uVar28 = uVar36 >> (uVar18 & 0x3f);
              uVar36 = uVar28 >> 3;
              uVar31 = ((uint)uVar28 & 7) + 3;
              iVar32 = -3;
            }
            else {
              if (uVar31 < uVar22 + 7) {
                uVar28 = uVar28 & 0xffffffff;
                do {
                  uVar31 = 0;
                  if ((int)uVar33 == 0) goto LAB_006932e8;
                  pbVar30 = pbVar29 + 1;
                  uVar19 = uVar28 & 0x3f;
                  uVar28 = uVar28 + 8;
                  uVar33 = (ulong)((int)uVar33 - 1);
                  uVar36 = ((ulong)*pbVar29 << uVar19) + uVar36;
                  pbVar29 = pbVar30;
                } while (uVar28 < uVar22 + 7);
              }
              iVar8 = (int)uVar28;
              uVar28 = uVar36 >> (uVar18 & 0x3f);
              uVar36 = uVar28 >> 7;
              uVar31 = ((uint)uVar28 & 0x7f) + 0xb;
              iVar32 = -7;
            }
            uVar24 = 0;
            uVar28 = (ulong)((iVar32 - uVar22) + iVar8);
            if (uVar35 < uVar31 + uVar11) goto LAB_00693230;
LAB_006924a8:
            uVar22 = uVar31 - 1;
            if ((uVar31 & 3) != 0) {
              iVar32 = -(uVar31 & 3);
              uVar25 = uVar11;
              do {
                uVar11 = uVar25 + 1;
                uVar31 = uVar31 - 1;
                puVar37[0x21] = uVar11;
                *(undefined2 *)((long)puVar37 + (ulong)uVar25 * 2 + 0x90) = uVar24;
                iVar32 = iVar32 + 1;
                uVar25 = uVar11;
              } while (iVar32 != 0);
            }
            if (2 < uVar22) {
              do {
                uVar22 = uVar11 + 2;
                puVar37[0x21] = uVar11 + 1;
                *(undefined2 *)((long)puVar37 + (ulong)uVar11 * 2 + 0x90) = uVar24;
                puVar37[0x21] = uVar22;
                *(undefined2 *)((long)puVar37 + (ulong)(uVar11 + 1) * 2 + 0x90) = uVar24;
                uVar25 = uVar11 + 3;
                uVar31 = uVar31 - 4;
                uVar11 = uVar11 + 4;
                puVar37[0x21] = uVar25;
                *(undefined2 *)((long)puVar37 + (ulong)uVar22 * 2 + 0x90) = uVar24;
                puVar37[0x21] = uVar11;
                *(undefined2 *)((long)puVar37 + (ulong)uVar25 * 2 + 0x90) = uVar24;
              } while (uVar31 != 0);
            }
            pbVar29 = pbVar30;
          } while (uVar11 < uVar35);
        }
LAB_00692528:
        uVar31 = (uint)uVar33;
        if ((short)puVar37[0xa4] == 0) {
          pcVar14 = "invalid code -- missing end-of-block";
          goto LAB_00693214;
        }
        *(uint **)(puVar37 + 0x22) = puVar1;
        *(uint **)(puVar37 + 0x18) = puVar1;
        puVar37[0x1c] = 9;
        local_84 = FUN_00693e30(1,puVar37 + 0x24,uVar34,puVar2,puVar37 + 0x1c,puVar3);
        if (local_84 == 0) {
          *(undefined8 *)(puVar37 + 0x1a) = *(undefined8 *)(puVar37 + 0x22);
          puVar37[0x1d] = 6;
          local_84 = FUN_00693e30(2,(long)puVar37 + (ulong)puVar37[0x1f] * 2 + 0x90,puVar37[0x20],
                                  puVar2,puVar37 + 0x1d,puVar3);
          if (local_84 != 0) {
            pcVar14 = "invalid distances set";
            goto LAB_00692298;
          }
          *puVar37 = 0x13;
          local_84 = 0;
          if (param_2 == 6) goto LAB_006932e8;
switchD_00691a84_caseD_692c8c:
          *puVar37 = 0x14;
          pbVar30 = pbVar29;
switchD_00691a84_caseD_692c94:
          if ((uVar26 < 0x102) || ((uint)uVar33 < 6)) {
            lVar10 = *(long *)(puVar37 + 0x18);
            uVar11 = -1 << (ulong)(puVar37[0x1c] & 0x1f);
            uVar19 = (ulong)((uint)uVar36 & (uVar11 ^ 0xffffffff));
            puVar37[0x6f9] = 0;
            bVar5 = *(byte *)(lVar10 + uVar19 * 4 + 1);
            uVar18 = (ulong)bVar5;
            if ((uint)uVar28 < (uint)bVar5) {
              uVar28 = uVar28 & 0xffffffff;
              pbVar29 = pbVar30;
              do {
                uVar31 = 0;
                if ((int)uVar33 == 0) goto LAB_006932e8;
                pbVar30 = pbVar29 + 1;
                uVar18 = uVar28 & 0x3f;
                uVar28 = uVar28 + 8;
                uVar36 = ((ulong)*pbVar29 << uVar18) + uVar36;
                uVar35 = ~uVar11 & (uint)uVar36;
                uVar18 = (ulong)*(byte *)(lVar10 + (ulong)uVar35 * 4 + 1);
                uVar33 = (ulong)((int)uVar33 - 1);
                pbVar29 = pbVar30;
              } while (uVar28 < uVar18);
              uVar19 = (ulong)uVar35;
            }
            uVar35 = (uint)uVar18;
            uVar11 = (uint)uVar28;
            pbVar29 = (byte *)(lVar10 + uVar19 * 4);
            uVar6 = *(ushort *)(pbVar29 + 2);
            bVar5 = *pbVar29;
            if (bVar5 == 0 || (bVar5 & 0xf0) != 0) {
              uVar35 = 0;
              uVar19 = uVar18;
            }
            else {
              uVar34 = -1 << (ulong)(uVar35 + bVar5 & 0x1f);
              uVar23 = (ulong)((((uint)uVar36 & (uVar34 ^ 0xffffffff)) >> (ulong)(uVar35 & 0x1f)) +
                              (uint)uVar6);
              bVar5 = *(byte *)(lVar10 + uVar23 * 4 + 1);
              uVar19 = (ulong)bVar5;
              if (uVar11 < uVar35 + bVar5) {
                uVar28 = uVar28 & 0xffffffff;
                pbVar29 = pbVar30;
                do {
                  uVar31 = 0;
                  if ((int)uVar33 == 0) goto LAB_006932e8;
                  pbVar30 = pbVar29 + 1;
                  uVar19 = uVar28 & 0x3f;
                  uVar28 = uVar28 + 8;
                  uVar36 = ((ulong)*pbVar29 << uVar19) + uVar36;
                  uVar11 = (((uint)uVar36 & ~uVar34) >> (ulong)(uVar35 & 0x1f)) + (uint)uVar6;
                  uVar19 = (ulong)*(byte *)(lVar10 + (ulong)uVar11 * 4 + 1);
                  uVar33 = (ulong)((int)uVar33 - 1);
                  pbVar29 = pbVar30;
                } while (uVar28 < uVar18 + uVar19);
                uVar23 = (ulong)uVar11;
              }
              pbVar29 = (byte *)(lVar10 + uVar23 * 4);
              uVar6 = *(ushort *)(pbVar29 + 2);
              bVar5 = *pbVar29;
              uVar36 = uVar36 >> (uVar18 & 0x3f);
              uVar11 = (int)uVar28 - uVar35;
              puVar37[0x6f9] = uVar35;
            }
            uVar36 = uVar36 >> (uVar19 & 0x3f);
            uVar28 = (ulong)(uVar11 - (int)uVar19);
            puVar37[0x6f9] = uVar35 + (int)uVar19;
            puVar37[0x15] = (uint)uVar6;
            pbVar29 = pbVar30;
            if (bVar5 == 0) {
              uVar11 = 0x19;
              goto LAB_0069321c;
            }
            if ((bVar5 >> 5 & 1) != 0) {
              puVar37[0x6f9] = 0xffffffff;
              goto LAB_006931c0;
            }
            if ((bVar5 >> 6 & 1) != 0) {
              pcVar14 = "invalid literal/length code";
              goto LAB_00693214;
            }
            uVar11 = bVar5 & 0xf;
            puVar37[0x17] = uVar11;
            *puVar37 = 0x15;
            if ((bVar5 & 0xf) == 0) {
LAB_00691f30:
              uVar35 = puVar37[0x15];
              pbVar29 = pbVar30;
            }
            else {
LAB_00692e7c:
              while( true ) {
                uVar35 = (uint)uVar28;
                if (uVar11 <= uVar35) break;
                if ((int)uVar33 == 0) {
                  uVar31 = 0;
                  goto LAB_006932e8;
                }
                uVar33 = (ulong)((int)uVar33 - 1);
                uVar36 = ((ulong)*pbVar29 << (uVar28 & 0x3f)) + uVar36;
                uVar28 = (ulong)(uVar35 + 8);
                pbVar29 = pbVar29 + 1;
              }
              uVar31 = (uint)uVar36;
              uVar36 = uVar36 >> ((ulong)uVar11 & 0x3f);
              uVar28 = (ulong)(uVar35 - uVar11);
              uVar35 = puVar37[0x15] + (uVar31 & (-1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU));
              puVar37[0x15] = uVar35;
              puVar37[0x6f9] = puVar37[0x6f9] + uVar11;
            }
            puVar37[0x6fa] = uVar35;
            *puVar37 = 0x16;
            pbVar30 = pbVar29;
switchD_00691a84_caseD_692ec8:
            lVar10 = *(long *)(puVar37 + 0x1a);
            uVar11 = -1 << (ulong)(puVar37[0x1d] & 0x1f);
            uVar19 = (ulong)((uint)uVar36 & (uVar11 ^ 0xffffffff));
            bVar5 = *(byte *)(lVar10 + uVar19 * 4 + 1);
            uVar18 = (ulong)bVar5;
            if ((uint)uVar28 < (uint)bVar5) {
              uVar28 = uVar28 & 0xffffffff;
              pbVar29 = pbVar30;
              do {
                uVar31 = 0;
                if ((int)uVar33 == 0) goto LAB_006932e8;
                pbVar30 = pbVar29 + 1;
                uVar18 = uVar28 & 0x3f;
                uVar28 = uVar28 + 8;
                uVar36 = ((ulong)*pbVar29 << uVar18) + uVar36;
                uVar35 = ~uVar11 & (uint)uVar36;
                uVar18 = (ulong)*(byte *)(lVar10 + (ulong)uVar35 * 4 + 1);
                uVar33 = (ulong)((int)uVar33 - 1);
                pbVar29 = pbVar30;
              } while (uVar28 < uVar18);
              uVar19 = (ulong)uVar35;
            }
            uVar11 = (uint)uVar28;
            pbVar29 = (byte *)(lVar10 + uVar19 * 4);
            uVar6 = *(ushort *)(pbVar29 + 2);
            bVar5 = *pbVar29;
            if ((bVar5 & 0xf0) == 0) {
              uVar35 = (uint)uVar18;
              uVar34 = -1 << (ulong)(uVar35 + bVar5 & 0x1f);
              uVar23 = (ulong)((((uint)uVar36 & (uVar34 ^ 0xffffffff)) >> (ulong)(uVar35 & 0x1f)) +
                              (uint)uVar6);
              bVar5 = *(byte *)(lVar10 + uVar23 * 4 + 1);
              uVar19 = (ulong)bVar5;
              if (uVar11 < uVar35 + bVar5) {
                uVar28 = uVar28 & 0xffffffff;
                pbVar29 = pbVar30;
                do {
                  uVar31 = 0;
                  if ((int)uVar33 == 0) goto LAB_006932e8;
                  pbVar30 = pbVar29 + 1;
                  uVar19 = uVar28 & 0x3f;
                  uVar28 = uVar28 + 8;
                  uVar36 = ((ulong)*pbVar29 << uVar19) + uVar36;
                  uVar11 = (((uint)uVar36 & ~uVar34) >> (ulong)(uVar35 & 0x1f)) + (uint)uVar6;
                  uVar19 = (ulong)*(byte *)(lVar10 + (ulong)uVar11 * 4 + 1);
                  uVar33 = (ulong)((int)uVar33 - 1);
                  pbVar29 = pbVar30;
                } while (uVar28 < uVar18 + uVar19);
                uVar23 = (ulong)uVar11;
              }
              pbVar29 = (byte *)(lVar10 + uVar23 * 4);
              uVar6 = *(ushort *)(pbVar29 + 2);
              bVar5 = *pbVar29;
              uVar36 = uVar36 >> (uVar18 & 0x3f);
              uVar11 = (int)uVar28 - uVar35;
              uVar35 = puVar37[0x6f9] + uVar35;
              puVar37[0x6f9] = uVar35;
            }
            else {
              uVar35 = puVar37[0x6f9];
              uVar19 = uVar18;
            }
            uVar36 = uVar36 >> (uVar19 & 0x3f);
            uVar28 = (ulong)(uVar11 - (int)uVar19);
            puVar37[0x6f9] = uVar35 + (int)uVar19;
            pbVar29 = pbVar30;
            if ((bVar5 >> 6 & 1) != 0) {
              pcVar14 = "invalid distance code";
              goto LAB_00693214;
            }
            uVar11 = bVar5 & 0xf;
            puVar37[0x16] = (uint)uVar6;
            puVar37[0x17] = uVar11;
            *puVar37 = 0x17;
            if ((bVar5 & 0xf) != 0) {
LAB_00693014:
              while( true ) {
                uVar35 = (uint)uVar28;
                if (uVar11 <= uVar35) break;
                if ((int)uVar33 == 0) {
                  uVar31 = 0;
                  goto LAB_006932e8;
                }
                uVar33 = (ulong)((int)uVar33 - 1);
                uVar36 = ((ulong)*pbVar29 << (uVar28 & 0x3f)) + uVar36;
                uVar28 = (ulong)(uVar35 + 8);
                pbVar29 = pbVar29 + 1;
              }
              puVar37[0x16] =
                   puVar37[0x16] + ((uint)uVar36 & (-1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU));
              uVar28 = (ulong)(uVar35 - uVar11);
              uVar36 = uVar36 >> ((ulong)uVar11 & 0x3f);
              puVar37[0x6f9] = puVar37[0x6f9] + uVar11;
              pbVar30 = pbVar29;
            }
LAB_00693054:
            *puVar37 = 0x18;
            pbVar29 = pbVar30;
switchD_00691a84_caseD_69305c:
            uVar31 = (uint)uVar33;
            if (uVar26 == 0) goto LAB_006932e8;
            uVar11 = puVar37[0x16];
            if (local_74 - uVar26 < uVar11) {
              uVar11 = uVar11 - (local_74 - uVar26);
              if ((puVar37[0xe] < uVar11) && (puVar37[0x6f8] != 0)) {
                pcVar14 = "invalid distance too far back";
                goto LAB_00693214;
              }
              uVar35 = puVar37[0xf];
              uVar31 = uVar11 - uVar35;
              if (uVar11 < uVar35 || uVar31 == 0) {
                uVar35 = uVar35 - uVar11;
              }
              else {
                uVar35 = puVar37[0xd] - uVar31;
                uVar11 = uVar31;
              }
              puVar15 = (undefined1 *)(*(long *)(puVar37 + 0x10) + (ulong)uVar35);
              uVar31 = puVar37[0x15];
              uVar35 = uVar31;
              if (uVar11 <= uVar31) {
                uVar35 = uVar11;
              }
            }
            else {
              uVar31 = puVar37[0x15];
              puVar15 = __dest + -(ulong)uVar11;
              uVar35 = uVar31;
            }
            uVar11 = uVar26;
            if (uVar35 <= uVar26) {
              uVar11 = uVar35;
            }
            puVar37[0x15] = uVar31 - uVar11;
            uVar31 = uVar26;
            if (uVar35 <= uVar26) {
              uVar31 = uVar35;
            }
            uVar35 = uVar11;
            puVar21 = __dest;
            if ((uVar11 & 7) != 0) {
              iVar32 = -(uVar11 & 7);
              puVar16 = puVar15;
              puVar20 = __dest;
              do {
                puVar15 = puVar16 + 1;
                uVar35 = uVar35 - 1;
                iVar32 = iVar32 + 1;
                puVar21 = puVar20 + 1;
                *puVar20 = *puVar16;
                puVar16 = puVar15;
                puVar20 = puVar21;
              } while (iVar32 != 0);
            }
            if (6 < uVar31 - 1) {
              do {
                *puVar21 = *puVar15;
                puVar21[1] = puVar15[1];
                puVar21[2] = puVar15[2];
                puVar21[3] = puVar15[3];
                puVar21[4] = puVar15[4];
                puVar21[5] = puVar15[5];
                puVar21[6] = puVar15[6];
                puVar21[7] = puVar15[7];
                uVar35 = uVar35 - 8;
                puVar15 = puVar15 + 8;
                puVar21 = puVar21 + 8;
              } while (uVar35 != 0);
            }
            __dest = __dest + (ulong)(uVar31 - 1) + 1;
            uVar26 = uVar26 - uVar11;
            if (puVar37[0x15] == 0) {
              uVar11 = 0x14;
              goto LAB_0069321c;
            }
            goto LAB_00693220;
          }
          param_1[3] = (long)__dest;
          *(uint *)(param_1 + 4) = uVar26;
          *param_1 = (long)pbVar30;
          *(uint *)(param_1 + 1) = (uint)uVar33;
          *(ulong *)(puVar37 + 0x12) = uVar36;
          puVar37[0x14] = (uint)uVar28;
          FUN_00693670(param_1,local_74);
          __dest = (undefined1 *)param_1[3];
          uVar26 = *(uint *)(param_1 + 4);
          pbVar29 = (byte *)*param_1;
          uVar33 = (ulong)*(uint *)(param_1 + 1);
          uVar36 = *(ulong *)(puVar37 + 0x12);
          uVar28 = (ulong)puVar37[0x14];
          if (*puVar37 == 0xb) {
            puVar37[0x6f9] = 0xffffffff;
            uVar11 = *puVar37;
          }
          else {
            uVar11 = *puVar37;
          }
          goto joined_r0x00691dac;
        }
        param_1[6] = (long)"invalid literal/lengths set";
        *puVar37 = 0x1d;
        uVar11 = 0x1d;
        goto LAB_00691a6c;
      case 0x691f10:
        uVar11 = puVar37[0x21];
        uVar34 = puVar37[0x1f];
        uVar35 = puVar37[0x20] + uVar34;
        if (uVar11 < uVar35) goto LAB_006922cc;
        goto LAB_00692528;
      case 0x691f28:
        uVar11 = puVar37[0x17];
        if (uVar11 == 0) goto LAB_00691f30;
        goto LAB_00692e7c;
      case 0x691f38:
        uVar11 = puVar37[0x17];
        if (uVar11 != 0) goto LAB_00693014;
        goto LAB_00693054;
      case 0x691f44:
        if (uVar26 != 0) {
          uVar26 = uVar26 - 1;
          *__dest = (char)puVar37[0x15];
          uVar11 = 0x14;
          __dest = __dest + 1;
          goto LAB_0069321c;
        }
        goto LAB_006932e8;
      case 0x691f5c:
        if (puVar37[2] != 0) {
          if (uVar35 < 0x20) {
            uVar18 = uVar28 & 0xffffffff;
            if (uVar31 == 0) goto LAB_006932d8;
            pbVar13 = pbVar29 + 1;
            uVar33 = uVar28 & 0x3f;
            uVar28 = uVar18 + 8;
            uVar11 = uVar31 - 1;
            uVar36 = ((ulong)*pbVar29 << uVar33) + uVar36;
            if (uVar28 < 0x20) {
              if (uVar11 == 0) goto LAB_006932e0;
              uVar33 = uVar28 & 0x3f;
              uVar28 = uVar18 + 0x10;
              uVar11 = uVar31 - 2;
              pbVar13 = pbVar29 + 2;
              uVar36 = ((ulong)pbVar29[1] << uVar33) + uVar36;
              if (uVar28 < 0x20) {
                if (uVar11 == 0) goto LAB_006932e0;
                uVar33 = uVar28 & 0x3f;
                uVar28 = uVar18 + 0x18;
                uVar11 = uVar31 - 3;
                pbVar13 = pbVar29 + 3;
                uVar36 = ((ulong)pbVar29[2] << uVar33) + uVar36;
                if (uVar28 < 0x20) {
                  if (uVar11 == 0) goto LAB_006932e0;
                  uVar11 = uVar31 - 4;
                  pbVar13 = pbVar29 + 4;
                  uVar36 = ((ulong)pbVar29[3] << (uVar28 & 0x3f)) + uVar36;
                  uVar28 = uVar18 + 0x20;
                }
              }
            }
            uVar33 = (ulong)uVar11;
          }
          uVar18 = (ulong)(local_74 - uVar26);
          param_1[5] = param_1[5] + uVar18;
          *(ulong *)(puVar37 + 8) = *(long *)(puVar37 + 8) + uVar18;
          if (local_74 - uVar26 != 0) {
            if (puVar37[4] == 0) {
              lVar10 = FUN_0068ef30(*(undefined8 *)(puVar37 + 6),(long)__dest - uVar18);
            }
            else {
              lVar10 = FUN_0068f300();
            }
            *(long *)(puVar37 + 6) = lVar10;
            param_1[0xc] = lVar10;
          }
          uVar18 = uVar36;
          if (puVar37[4] == 0) {
            uVar18 = uVar36 >> 8 & 0xff00 | uVar36 >> 0x18 & 0xff | (uVar36 >> 8 & 0xff) << 0x10 |
                     (uVar36 & 0xff) << 0x18;
          }
          local_74 = uVar26;
          if (uVar18 != *(ulong *)(puVar37 + 6)) {
            param_1[6] = (long)"incorrect data check";
            *puVar37 = 0x1d;
            uVar11 = 0x1d;
            pbVar29 = pbVar13;
            goto LAB_00691a6c;
          }
          uVar36 = 0;
          uVar28 = 0;
        }
        *puVar37 = 0x1b;
        pbVar29 = pbVar13;
        goto switchD_00691a84_caseD_692b84;
      case 0x692088:
switchD_00691a84_caseD_692088:
        if (puVar37[3] == 0) {
          param_1[3] = (long)__dest;
          *(uint *)(param_1 + 4) = uVar26;
          *param_1 = (long)pbVar30;
          *(int *)(param_1 + 1) = (int)uVar33;
          *(ulong *)(puVar37 + 0x12) = uVar36;
          puVar37[0x14] = (uint)uVar28;
          return 2;
        }
        lVar10 = FUN_0068ef30(0,0,0);
        *(long *)(puVar37 + 6) = lVar10;
        param_1[0xc] = lVar10;
        *puVar37 = 0xb;
        pbVar29 = pbVar30;
      case 0x6920b4:
        uVar31 = (uint)uVar33;
        if (param_2 - 5U < 2) goto LAB_006932e8;
switchD_00691a84_caseD_6920c0:
        uVar35 = (uint)uVar28;
        if (puVar37[1] != 0) {
          uVar36 = uVar36 >> (uVar35 & 7);
          uVar28 = (ulong)(uVar35 - (uVar35 & 7));
          uVar11 = 0x1a;
          goto LAB_0069321c;
        }
        pbVar13 = pbVar29;
        if (uVar35 < 3) {
          uVar31 = 0;
          if ((int)uVar33 == 0) goto LAB_006932e8;
          pbVar13 = pbVar29 + 1;
          uVar35 = uVar35 + 8;
          uVar33 = (ulong)((int)uVar33 - 1);
          uVar36 = ((ulong)*pbVar29 << (uVar28 & 0x3f)) + uVar36;
        }
        uVar31 = (uint)uVar33;
        puVar37[1] = (uint)uVar36 & 1;
        uVar11 = (uint)uVar36 >> 1 & 3;
        if (uVar11 == 3) {
          param_1[6] = (long)"invalid block type";
          uVar11 = 0x1d;
LAB_00692184:
          *puVar37 = uVar11;
        }
        else {
          if (uVar11 == 2) {
            uVar11 = 0x10;
            goto LAB_00692184;
          }
          if (uVar11 != 1) {
            uVar11 = 0xd;
            goto LAB_00692184;
          }
          *(undefined **)(puVar37 + 0x1a) = &DAT_0213ea4a;
          puVar37[0x1c] = 9;
          puVar37[0x1d] = 5;
          *(undefined **)(puVar37 + 0x18) = &DAT_0213e24a;
          *puVar37 = 0x13;
          if (param_2 == 6) {
            uVar36 = uVar36 >> 3;
            uVar35 = uVar35 - 3;
            iVar32 = local_84;
            goto switchD_00691a84_caseD_6932ec;
          }
        }
        uVar11 = *puVar37;
        uVar36 = uVar36 >> 3;
        uVar28 = (ulong)(uVar35 - 3);
        pbVar29 = pbVar13;
        goto joined_r0x00691dac;
      case 0x6920c0:
        goto switchD_00691a84_caseD_6920c0;
      case 0x692854:
        goto switchD_00691a84_caseD_692854;
      case 0x6928e8:
        goto switchD_00691a84_caseD_6928e8;
      case 0x692988:
        goto switchD_00691a84_caseD_692988;
      case 0x692a24:
        goto switchD_00691a84_caseD_692a24;
      case 0x692b84:
switchD_00691a84_caseD_692b84:
        uVar35 = (uint)uVar28;
        uVar31 = (uint)uVar33;
        pbVar13 = pbVar29;
        if ((puVar37[2] == 0) || (puVar37[4] == 0)) {
LAB_00693458:
          *puVar37 = 0x1c;
          iVar32 = 1;
          goto switchD_00691a84_caseD_6932ec;
        }
        if (uVar35 < 0x20) {
          uVar18 = uVar28 & 0xffffffff;
          if (uVar31 != 0) {
            pbVar13 = pbVar29 + 1;
            uVar33 = uVar28 & 0x3f;
            uVar28 = uVar18 + 8;
            uVar11 = uVar31 - 1;
            uVar36 = ((ulong)*pbVar29 << uVar33) + uVar36;
            if (uVar28 < 0x20) {
              if (uVar11 == 0) goto LAB_006932e0;
              uVar33 = uVar28 & 0x3f;
              uVar28 = uVar18 + 0x10;
              uVar11 = uVar31 - 2;
              pbVar13 = pbVar29 + 2;
              uVar36 = ((ulong)pbVar29[1] << uVar33) + uVar36;
              if (uVar28 < 0x20) {
                if (uVar11 == 0) goto LAB_006932e0;
                uVar33 = uVar28 & 0x3f;
                uVar28 = uVar18 + 0x18;
                uVar11 = uVar31 - 3;
                pbVar13 = pbVar29 + 3;
                uVar36 = ((ulong)pbVar29[2] << uVar33) + uVar36;
                if (uVar28 < 0x20) {
                  if (uVar11 == 0) goto LAB_006932e0;
                  uVar11 = uVar31 - 4;
                  pbVar13 = pbVar29 + 4;
                  uVar36 = ((ulong)pbVar29[3] << (uVar28 & 0x3f)) + uVar36;
                  uVar28 = uVar18 + 0x20;
                }
              }
            }
            uVar33 = (ulong)uVar11;
            goto LAB_00692c30;
          }
LAB_006932d8:
          uVar28 = uVar18;
LAB_006932e0:
          uVar31 = 0;
          pbVar29 = pbVar13;
          goto LAB_006932e8;
        }
LAB_00692c30:
        uVar31 = (uint)uVar33;
        if (uVar36 == puVar37[8]) {
          uVar36 = 0;
          uVar35 = 0;
          goto LAB_00693458;
        }
        pcVar14 = "incorrect length check";
        pbVar29 = pbVar13;
        goto LAB_00693214;
      case 0x692c8c:
        goto switchD_00691a84_caseD_692c8c;
      case 0x692c94:
        goto switchD_00691a84_caseD_692c94;
      case 0x692ec8:
        goto switchD_00691a84_caseD_692ec8;
      case 0x69305c:
        goto switchD_00691a84_caseD_69305c;
      case 0x6932c0:
        iVar32 = -3;
        goto switchD_00691a84_caseD_6932ec;
      case 0x6932c8:
        return -4;
      case 0x6932ec:
        goto switchD_00691a84_caseD_6932ec;
      }
      uVar35 = (uint)uVar18;
      uVar31 = 0;
      iVar32 = local_84;
switchD_00691a84_caseD_6932ec:
      param_1[3] = (long)__dest;
      *(uint *)(param_1 + 4) = uVar26;
      *param_1 = (long)pbVar13;
      *(uint *)(param_1 + 1) = uVar31;
      *(ulong *)(puVar37 + 0x12) = uVar36;
      puVar37[0x14] = uVar35;
      if (((puVar37[0xd] != 0) || ((*puVar37 < 0x1a && (local_74 != *(uint *)(param_1 + 4))))) &&
         (iVar8 = FUN_006934a0(param_1,local_74), iVar8 != 0)) {
        *puVar37 = 0x1e;
        return -4;
      }
      uVar4 = uVar4 - (int)param_1[1];
      local_74 = local_74 - (int)param_1[4];
      uVar28 = (ulong)local_74;
      param_1[2] = param_1[2] + (ulong)uVar4;
      param_1[5] = param_1[5] + uVar28;
      *(ulong *)(puVar37 + 8) = *(long *)(puVar37 + 8) + uVar28;
      if ((local_74 != 0) && (puVar37[2] != 0)) {
        if (puVar37[4] == 0) {
          lVar10 = FUN_0068ef30(*(undefined8 *)(puVar37 + 6),param_1[3] - uVar28,uVar28);
        }
        else {
          lVar10 = FUN_0068f300();
        }
        *(long *)(puVar37 + 6) = lVar10;
        param_1[0xc] = lVar10;
      }
      uVar11 = *puVar37;
      iVar8 = 0;
      if (puVar37[1] != 0) {
        iVar8 = 0x40;
      }
      iVar17 = 0x100;
      if (uVar11 != 0xe && uVar11 != 0x13) {
        iVar17 = 0;
      }
      *(uint *)(param_1 + 0xb) = iVar8 + puVar37[0x14] + (uint)(uVar11 == 0xb) * 0x80 + iVar17;
      iVar8 = -5;
      if ((local_74 != 0 || uVar4 != 0) && param_2 != 4 || iVar32 != 0) {
        iVar8 = iVar32;
      }
      return iVar8;
    }
  }
  return -2;
}


