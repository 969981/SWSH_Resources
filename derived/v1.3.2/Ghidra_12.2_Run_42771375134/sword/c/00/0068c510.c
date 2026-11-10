/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068c510; name: FUN_0068c510
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0068c510(long *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  byte bVar17;
  undefined8 uVar18;
  byte bVar19;
  int *piVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  
  if (param_1 == (long *)0x0) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  plVar21 = (long *)param_1[7];
  if (plVar21 == (long *)0x0) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) ||
     ((iVar10 = (int)plVar21[1], param_2 != 4 && (iVar10 == 0x29a)))) {
    param_1[6] = *(long *)(PTR_PTR_02714e90 + 0x20);
    return 0xfffffffe;
  }
  if ((int)param_1[4] == 0) goto LAB_0068d0a0;
  lVar12 = plVar21[8];
  *plVar21 = (long)param_1;
  *(uint *)(plVar21 + 8) = param_2;
  if (iVar10 == 0x2a) {
    if (*(int *)((long)plVar21 + 0x2c) != 2) {
      if (((int)plVar21[0x17] < 2) && (iVar10 = *(int *)((long)plVar21 + 0xb4), 1 < iVar10)) {
        if (iVar10 < 6) {
          uVar7 = 0x40;
        }
        else {
          uVar7 = 0x80;
          if (iVar10 != 6) {
            uVar7 = 0xc0;
          }
        }
      }
      else {
        uVar7 = 0;
      }
      uVar7 = uVar7 | (int)plVar21[9] * 0x1000 - 0x7800U;
      if (*(int *)((long)plVar21 + 0x9c) != 0) {
        uVar7 = uVar7 | 0x20;
      }
      uVar15 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar15 + 1;
      *(undefined4 *)(plVar21 + 1) = 0x71;
      *(char *)(plVar21[2] + (ulong)uVar15) = (char)(uVar7 >> 8);
      uVar15 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar15 + 1;
      *(byte *)(plVar21[2] + (ulong)uVar15) =
           ((byte)uVar7 + (char)(uVar7 / 0x1f) * -0x1f | (byte)uVar7) ^ 0x1f;
      if (*(int *)((long)plVar21 + 0x9c) != 0) {
        lVar8 = param_1[0xc];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar8 >> 0x18);
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar8 >> 0x10);
        lVar8 = param_1[0xc];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar8 >> 8);
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)lVar8;
      }
      lVar8 = FUN_0068ef30(0,0,0);
      param_1[0xc] = lVar8;
      iVar10 = (int)plVar21[1];
      goto LAB_0068c90c;
    }
    lVar8 = FUN_0068f300(0,0,0);
    param_1[0xc] = lVar8;
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 0x1f;
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 0x8b;
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 8;
    piVar20 = (int *)plVar21[6];
    if (piVar20 != (int *)0x0) {
      iVar10 = *piVar20;
      uVar9 = 2;
      bVar5 = 0;
      if (piVar20[0x11] != 0) {
        bVar5 = 2;
      }
      bVar13 = 0;
      if (*(long *)(piVar20 + 6) != 0) {
        bVar13 = 4;
      }
      bVar17 = 0;
      if (*(long *)(piVar20 + 10) != 0) {
        bVar17 = 8;
      }
      bVar19 = 0;
      if (*(long *)(piVar20 + 0xe) != 0) {
        bVar19 = 0x10;
      }
      uVar7 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar7 + 1;
      *(byte *)(plVar21[2] + (ulong)uVar7) = bVar5 | iVar10 != 0 | bVar13 | bVar17 | bVar19;
      uVar7 = *(uint *)(plVar21 + 5);
      uVar18 = *(undefined8 *)(plVar21[6] + 8);
      *(uint *)(plVar21 + 5) = uVar7 + 1;
      *(char *)(plVar21[2] + (ulong)uVar7) = (char)uVar18;
      uVar18 = *(undefined8 *)(plVar21[6] + 8);
      uVar7 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar7 + 1;
      *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)uVar18 >> 8);
      uVar18 = *(undefined8 *)(plVar21[6] + 8);
      uVar7 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar7 + 1;
      *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)uVar18 >> 0x10);
      uVar18 = *(undefined8 *)(plVar21[6] + 8);
      uVar7 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar7 + 1;
      *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)uVar18 >> 0x18);
      if (*(int *)((long)plVar21 + 0xb4) != 9) {
        uVar9 = 4;
        if ((int)plVar21[0x17] < 2 && 1 < *(int *)((long)plVar21 + 0xb4)) {
          uVar9 = 0;
        }
      }
      uVar7 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar7 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar7) = uVar9;
      uVar7 = *(uint *)(plVar21 + 5);
      uVar3 = *(undefined4 *)(plVar21[6] + 0x14);
      *(uint *)(plVar21 + 5) = uVar7 + 1;
      *(char *)(plVar21[2] + (ulong)uVar7) = (char)uVar3;
      lVar8 = plVar21[6];
      if (*(long *)(lVar8 + 0x18) != 0) {
        uVar7 = *(uint *)(plVar21 + 5);
        uVar3 = *(undefined4 *)(lVar8 + 0x20);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)uVar3;
        uVar3 = *(undefined4 *)(plVar21[6] + 0x20);
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((uint)uVar3 >> 8);
        lVar8 = plVar21[6];
      }
      if (*(int *)(lVar8 + 0x44) != 0) {
        lVar8 = FUN_0068f300(param_1[0xc],plVar21[2],(int)plVar21[5]);
        param_1[0xc] = lVar8;
      }
      *(undefined4 *)(plVar21 + 7) = 0;
      *(undefined4 *)(plVar21 + 1) = 0x45;
      lVar8 = plVar21[6];
      lVar16 = *(long *)(lVar8 + 0x18);
      goto joined_r0x0068c920;
    }
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 0;
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 0;
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 0;
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 0;
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 0;
    if (*(int *)((long)plVar21 + 0xb4) == 9) {
      uVar9 = 2;
    }
    else {
      uVar9 = 4;
      if ((int)plVar21[0x17] < 2 && 1 < *(int *)((long)plVar21 + 0xb4)) {
        uVar9 = 0;
      }
    }
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = uVar9;
    uVar7 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar7 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar7) = 3;
LAB_0068cfd4:
    *(undefined4 *)(plVar21 + 1) = 0x71;
  }
  else {
LAB_0068c90c:
    if (iVar10 == 0x45) {
      lVar8 = plVar21[6];
      lVar16 = *(long *)(lVar8 + 0x18);
joined_r0x0068c920:
      if (lVar16 != 0) {
        uVar7 = *(uint *)(plVar21 + 7);
        uVar15 = *(uint *)(plVar21 + 5);
        if (uVar7 < *(ushort *)(lVar8 + 0x20)) {
          uVar22 = (ulong)uVar15;
          uVar14 = uVar15;
          if (plVar21[3] != uVar22) goto LAB_0068ca2c;
          while( true ) {
            if ((uVar15 <= uVar14 && uVar14 - uVar15 != 0) && (*(int *)(lVar8 + 0x44) != 0)) {
              lVar8 = FUN_0068f300(param_1[0xc],plVar21[2] + (ulong)uVar15,uVar14 - uVar15);
              param_1[0xc] = lVar8;
            }
            uVar15 = *(uint *)(param_1[7] + 0x28);
            uVar7 = *(uint *)(param_1 + 4);
            if (uVar15 <= *(uint *)(param_1 + 4)) {
              uVar7 = uVar15;
            }
            if (uVar7 != 0) {
              uVar22 = (ulong)uVar7;
              memcpy((void *)param_1[3],*(void **)(param_1[7] + 0x20),uVar22);
              param_1[3] = param_1[3] + uVar22;
              *(ulong *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + uVar22;
              param_1[5] = param_1[5] + uVar22;
              *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
              *(uint *)(param_1[7] + 0x28) = *(int *)(param_1[7] + 0x28) - uVar7;
              lVar8 = param_1[7];
              if (*(int *)(lVar8 + 0x28) == 0) {
                *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
              }
            }
            uVar15 = *(uint *)(plVar21 + 5);
            uVar22 = (ulong)uVar15;
            lVar8 = plVar21[6];
            if (plVar21[3] == uVar22) break;
            uVar7 = *(uint *)(plVar21 + 7);
            uVar14 = uVar15;
LAB_0068ca2c:
            do {
              uVar9 = *(undefined1 *)(*(long *)(lVar8 + 0x18) + (ulong)uVar7);
              *(uint *)(plVar21 + 5) = uVar14 + 1;
              *(undefined1 *)(plVar21[2] + uVar22) = uVar9;
              uVar7 = (int)plVar21[7] + 1;
              lVar8 = plVar21[6];
              *(uint *)(plVar21 + 7) = uVar7;
              if (*(ushort *)(lVar8 + 0x20) <= uVar7) goto LAB_0068ca64;
              uVar14 = *(uint *)(plVar21 + 5);
              uVar22 = (ulong)uVar14;
            } while (plVar21[3] != uVar22);
          }
        }
LAB_0068ca64:
        if ((*(int *)(lVar8 + 0x44) != 0) &&
           (iVar10 = *(uint *)(plVar21 + 5) - uVar15,
           uVar15 <= *(uint *)(plVar21 + 5) && iVar10 != 0)) {
          lVar8 = FUN_0068f300(param_1[0xc],plVar21[2] + (ulong)uVar15,iVar10);
          param_1[0xc] = lVar8;
          lVar8 = plVar21[6];
        }
        if ((int)plVar21[7] != *(int *)(lVar8 + 0x20)) {
          iVar10 = (int)plVar21[1];
          goto LAB_0068cabc;
        }
        *(undefined4 *)(plVar21 + 7) = 0;
      }
      *(undefined4 *)(plVar21 + 1) = 0x49;
      lVar8 = *(long *)(lVar8 + 0x28);
joined_r0x0068cad0:
      if (lVar8 != 0) {
        plVar23 = plVar21 + 6;
        uVar11 = (ulong)*(uint *)(plVar21 + 5);
        uVar22 = uVar11;
        if (plVar21[3] != uVar11) goto LAB_0068cbc8;
        while( true ) {
          iVar10 = (uint)uVar11 - (uint)uVar22;
          if (((uint)uVar22 <= (uint)uVar11 && iVar10 != 0) && (*(int *)(*plVar23 + 0x44) != 0)) {
            lVar8 = FUN_0068f300(param_1[0xc],plVar21[2] + uVar22,iVar10);
            param_1[0xc] = lVar8;
          }
          uVar15 = *(uint *)(param_1[7] + 0x28);
          uVar7 = *(uint *)(param_1 + 4);
          if (uVar15 <= *(uint *)(param_1 + 4)) {
            uVar7 = uVar15;
          }
          if (uVar7 != 0) {
            uVar22 = (ulong)uVar7;
            memcpy((void *)param_1[3],*(void **)(param_1[7] + 0x20),uVar22);
            param_1[3] = param_1[3] + uVar22;
            *(ulong *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + uVar22;
            param_1[5] = param_1[5] + uVar22;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
            *(uint *)(param_1[7] + 0x28) = *(int *)(param_1[7] + 0x28) - uVar7;
            lVar8 = param_1[7];
            if (*(int *)(lVar8 + 0x28) == 0) {
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
            }
          }
          uVar22 = (ulong)*(uint *)(plVar21 + 5);
          if (plVar21[3] == uVar22) break;
          uVar11 = uVar22;
LAB_0068cbc8:
          do {
            uVar7 = *(uint *)(plVar21 + 7);
            lVar8 = *(long *)(plVar21[6] + 0x28);
            *(uint *)(plVar21 + 7) = uVar7 + 1;
            cVar4 = *(char *)(lVar8 + (ulong)uVar7);
            *(int *)(plVar21 + 5) = (int)uVar11 + 1;
            *(char *)(plVar21[2] + uVar11) = cVar4;
            if (cVar4 == '\0') {
              bVar6 = false;
              iVar10 = *(int *)(*plVar23 + 0x44);
              goto joined_r0x0068cc18;
            }
            uVar11 = (ulong)*(uint *)(plVar21 + 5);
          } while (plVar21[3] != uVar11);
        }
        bVar6 = true;
        iVar10 = *(int *)(*plVar23 + 0x44);
joined_r0x0068cc18:
        if ((iVar10 != 0) &&
           (iVar10 = *(uint *)(plVar21 + 5) - (uint)uVar22,
           (uint)uVar22 <= *(uint *)(plVar21 + 5) && iVar10 != 0)) {
          lVar8 = FUN_0068f300(param_1[0xc],plVar21[2] + uVar22,iVar10);
          param_1[0xc] = lVar8;
        }
        if (bVar6) {
          iVar10 = (int)plVar21[1];
          goto LAB_0068cc44;
        }
        *(undefined4 *)(plVar21 + 7) = 0;
      }
      *(undefined4 *)(plVar21 + 1) = 0x5b;
      lVar8 = *(long *)(plVar21[6] + 0x38);
joined_r0x0068cc58:
      if (lVar8 != 0) {
        plVar23 = plVar21 + 6;
        uVar11 = (ulong)*(uint *)(plVar21 + 5);
        uVar22 = uVar11;
        if (plVar21[3] != uVar11) goto LAB_0068cd6c;
        while( true ) {
          iVar10 = (uint)uVar11 - (uint)uVar22;
          if (((uint)uVar22 <= (uint)uVar11 && iVar10 != 0) && (*(int *)(*plVar23 + 0x44) != 0)) {
            lVar8 = FUN_0068f300(param_1[0xc],plVar21[2] + uVar22,iVar10);
            param_1[0xc] = lVar8;
          }
          uVar15 = *(uint *)(param_1[7] + 0x28);
          uVar7 = *(uint *)(param_1 + 4);
          if (uVar15 <= *(uint *)(param_1 + 4)) {
            uVar7 = uVar15;
          }
          if (uVar7 != 0) {
            uVar22 = (ulong)uVar7;
            memcpy((void *)param_1[3],*(void **)(param_1[7] + 0x20),uVar22);
            param_1[3] = param_1[3] + uVar22;
            *(ulong *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + uVar22;
            param_1[5] = param_1[5] + uVar22;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
            *(uint *)(param_1[7] + 0x28) = *(int *)(param_1[7] + 0x28) - uVar7;
            lVar8 = param_1[7];
            if (*(int *)(lVar8 + 0x28) == 0) {
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
            }
          }
          uVar22 = (ulong)*(uint *)(plVar21 + 5);
          if (plVar21[3] == uVar22) break;
          uVar11 = uVar22;
LAB_0068cd6c:
          do {
            uVar7 = *(uint *)(plVar21 + 7);
            lVar8 = *(long *)(plVar21[6] + 0x38);
            *(uint *)(plVar21 + 7) = uVar7 + 1;
            cVar4 = *(char *)(lVar8 + (ulong)uVar7);
            *(int *)(plVar21 + 5) = (int)uVar11 + 1;
            *(char *)(plVar21[2] + uVar11) = cVar4;
            if (cVar4 == '\0') {
              bVar6 = false;
              iVar10 = *(int *)(*plVar23 + 0x44);
              goto joined_r0x0068cdbc;
            }
            uVar11 = (ulong)*(uint *)(plVar21 + 5);
          } while (plVar21[3] != uVar11);
        }
        bVar6 = true;
        iVar10 = *(int *)(*plVar23 + 0x44);
joined_r0x0068cdbc:
        if ((iVar10 != 0) &&
           (iVar10 = *(uint *)(plVar21 + 5) - (uint)uVar22,
           (uint)uVar22 <= *(uint *)(plVar21 + 5) && iVar10 != 0)) {
          lVar8 = FUN_0068f300(param_1[0xc],plVar21[2] + uVar22,iVar10);
          param_1[0xc] = lVar8;
        }
        if (bVar6) {
          iVar10 = (int)plVar21[1];
          goto LAB_0068cde8;
        }
      }
      *(undefined4 *)(plVar21 + 1) = 0x67;
      iVar10 = *(int *)(plVar21[6] + 0x44);
joined_r0x0068cdfc:
      if (iVar10 != 0) {
        if ((ulong)plVar21[3] < (ulong)((int)plVar21[5] + 2)) {
          uVar15 = *(uint *)(param_1[7] + 0x28);
          uVar7 = *(uint *)(param_1 + 4);
          if (uVar15 <= *(uint *)(param_1 + 4)) {
            uVar7 = uVar15;
          }
          if (uVar7 != 0) {
            uVar22 = (ulong)uVar7;
            memcpy((void *)param_1[3],*(void **)(param_1[7] + 0x20),uVar22);
            param_1[3] = param_1[3] + uVar22;
            *(ulong *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + uVar22;
            param_1[5] = param_1[5] + uVar22;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
            *(uint *)(param_1[7] + 0x28) = *(int *)(param_1[7] + 0x28) - uVar7;
            lVar8 = param_1[7];
            if (*(int *)(lVar8 + 0x28) == 0) {
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
            }
          }
        }
        uVar7 = *(uint *)(plVar21 + 5);
        if ((ulong)plVar21[3] < (ulong)(uVar7 + 2)) goto LAB_0068cfdc;
        lVar8 = param_1[0xc];
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)lVar8;
        lVar8 = param_1[0xc];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar8 >> 8);
        lVar8 = FUN_0068f300(0,0,0);
        param_1[0xc] = lVar8;
      }
      goto LAB_0068cfd4;
    }
LAB_0068cabc:
    if (iVar10 == 0x49) {
      lVar8 = *(long *)(plVar21[6] + 0x28);
      goto joined_r0x0068cad0;
    }
LAB_0068cc44:
    if (iVar10 == 0x5b) {
      lVar8 = *(long *)(plVar21[6] + 0x38);
      goto joined_r0x0068cc58;
    }
LAB_0068cde8:
    if (iVar10 == 0x67) {
      iVar10 = *(int *)(plVar21[6] + 0x44);
      goto joined_r0x0068cdfc;
    }
  }
LAB_0068cfdc:
  if ((int)plVar21[5] == 0) {
    if (((param_2 != 4) && ((int)param_2 <= (int)lVar12)) && ((int)param_1[1] == 0))
    goto LAB_0068d0a0;
  }
  else {
    uVar15 = *(uint *)(param_1[7] + 0x28);
    uVar14 = *(uint *)(param_1 + 4);
    uVar7 = uVar14;
    if (uVar15 <= uVar14) {
      uVar7 = uVar15;
    }
    if (uVar7 != 0) {
      uVar22 = (ulong)uVar7;
      memcpy((void *)param_1[3],*(void **)(param_1[7] + 0x20),uVar22);
      param_1[3] = param_1[3] + uVar22;
      *(ulong *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + uVar22;
      param_1[5] = param_1[5] + uVar22;
      *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
      *(uint *)(param_1[7] + 0x28) = *(int *)(param_1[7] + 0x28) - uVar7;
      lVar12 = param_1[7];
      if (*(int *)(lVar12 + 0x28) == 0) {
        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
      }
      uVar14 = *(uint *)(param_1 + 4);
    }
    if (uVar14 == 0) goto LAB_0068d598;
  }
  if ((int)plVar21[1] == 0x29a) {
    if ((int)param_1[1] != 0) {
LAB_0068d0a0:
      param_1[6] = *(long *)(PTR_PTR_02714e90 + 0x38);
      return 0xfffffffb;
    }
LAB_0068d0bc:
    if (((int)plVar21[1] == 0x29a || param_2 == 0) && (*(int *)((long)plVar21 + 0xa4) == 0))
    goto LAB_0068d7c0;
  }
  else if ((int)param_1[1] == 0) goto LAB_0068d0bc;
  if ((int)plVar21[0x17] == 3) {
LAB_0068d244:
    do {
      uVar7 = *(uint *)((long)plVar21 + 0xa4);
      if (uVar7 < 0x102) {
        FUN_0068e950(plVar21);
        uVar7 = *(uint *)((long)plVar21 + 0xa4);
        if ((param_2 == 0) && (uVar7 < 0x102)) break;
        if (uVar7 == 0) goto LAB_0068d5d0;
        *(undefined4 *)(plVar21 + 0x12) = 0;
        if (2 < uVar7) goto LAB_0068d284;
        uVar22 = (ulong)*(uint *)((long)plVar21 + 0x9c);
LAB_0068d420:
        bVar5 = *(byte *)(plVar21[10] + uVar22);
        *(undefined2 *)(plVar21[0x2e0] + (ulong)*(uint *)((long)plVar21 + 0x16fc) * 2) = 0;
        uVar7 = *(uint *)((long)plVar21 + 0x16fc);
        *(uint *)((long)plVar21 + 0x16fc) = uVar7 + 1;
        *(byte *)(plVar21[0x2de] + (ulong)uVar7) = bVar5;
        *(short *)((long)plVar21 + (ulong)bVar5 * 4 + 0xc4) =
             *(short *)((long)plVar21 + (ulong)bVar5 * 4 + 0xc4) + 1;
        *(int *)((long)plVar21 + 0xa4) = *(int *)((long)plVar21 + 0xa4) + -1;
        uVar7 = *(int *)((long)plVar21 + 0x9c) + 1;
        *(uint *)((long)plVar21 + 0x9c) = uVar7;
        if (*(int *)((long)plVar21 + 0x16fc) != (int)plVar21[0x2df] + -1) goto LAB_0068d244;
      }
      else {
        *(undefined4 *)(plVar21 + 0x12) = 0;
LAB_0068d284:
        uVar22 = (ulong)*(uint *)((long)plVar21 + 0x9c);
        if (*(uint *)((long)plVar21 + 0x9c) == 0) goto LAB_0068d420;
        pcVar1 = (char *)(plVar21[10] + uVar22);
        cVar4 = pcVar1[-1];
        if (((cVar4 != *pcVar1) || (cVar4 != pcVar1[1])) || (cVar4 != pcVar1[2])) goto LAB_0068d420;
        lVar12 = 0;
        do {
          pcVar2 = pcVar1 + lVar12;
          iVar10 = (int)pcVar2;
          if (cVar4 != pcVar2[3]) {
            iVar10 = iVar10 + 3;
            goto LAB_0068d378;
          }
          if (cVar4 != pcVar2[4]) {
            iVar10 = iVar10 + 4;
            goto LAB_0068d378;
          }
          if (cVar4 != pcVar2[5]) {
            iVar10 = iVar10 + 5;
            goto LAB_0068d378;
          }
          if (cVar4 != pcVar2[6]) {
            iVar10 = iVar10 + 6;
            goto LAB_0068d378;
          }
          if (cVar4 != pcVar2[7]) {
            iVar10 = iVar10 + 7;
            goto LAB_0068d378;
          }
          if (cVar4 != pcVar2[8]) {
            iVar10 = iVar10 + 8;
            goto LAB_0068d378;
          }
          if (cVar4 != pcVar2[9]) {
            iVar10 = iVar10 + 9;
            goto LAB_0068d378;
          }
          uVar11 = lVar12 + 10;
          lVar12 = lVar12 + 8;
        } while ((uVar11 < 0x102) && (cVar4 == pcVar2[10]));
        iVar10 = (int)pcVar1 + (int)lVar12 + 2;
LAB_0068d378:
        uVar15 = (iVar10 - ((int)pcVar1 + 0x102)) + 0x102;
        if (uVar15 <= uVar7) {
          uVar7 = uVar15;
        }
        *(uint *)(plVar21 + 0x12) = uVar7;
        if (uVar7 < 3) goto LAB_0068d420;
        *(undefined2 *)(plVar21[0x2e0] + (ulong)*(uint *)((long)plVar21 + 0x16fc) * 2) = 1;
        bVar5 = DAT_0213d778;
        uVar22 = (ulong)(byte)(&DAT_0213d978)[(ulong)(uVar7 - 3) & 0xff] << 2 | 0x400;
        uVar15 = *(uint *)((long)plVar21 + 0x16fc);
        *(uint *)((long)plVar21 + 0x16fc) = uVar15 + 1;
        *(char *)(plVar21[0x2de] + (ulong)uVar15) = (char)(uVar7 - 3);
        *(short *)((long)plVar21 + uVar22 + 200) = *(short *)((long)plVar21 + uVar22 + 200) + 1;
        *(short *)((long)plVar21 + (ulong)bVar5 * 4 + 0x9b8) =
             *(short *)((long)plVar21 + (ulong)bVar5 * 4 + 0x9b8) + 1;
        *(int *)((long)plVar21 + 0xa4) = *(int *)((long)plVar21 + 0xa4) - (int)plVar21[0x12];
        uVar7 = *(int *)((long)plVar21 + 0x9c) + (int)plVar21[0x12];
        *(uint *)((long)plVar21 + 0x9c) = uVar7;
        *(undefined4 *)(plVar21 + 0x12) = 0;
        if (*(int *)((long)plVar21 + 0x16fc) != (int)plVar21[0x2df] + -1) goto LAB_0068d244;
      }
      uVar22 = plVar21[0x11];
      if ((long)uVar22 < 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = plVar21[10] + (uVar22 & 0xffffffff);
      }
      FUN_0068fbf0(plVar21,lVar12,uVar7 - uVar22,0);
      lVar12 = *plVar21;
      plVar21[0x11] = (ulong)*(uint *)((long)plVar21 + 0x9c);
      uVar15 = *(uint *)(*(long *)(lVar12 + 0x38) + 0x28);
      uVar7 = *(uint *)(lVar12 + 0x20);
      if (uVar15 <= *(uint *)(lVar12 + 0x20)) {
        uVar7 = uVar15;
      }
      if (uVar7 != 0) {
        uVar22 = (ulong)uVar7;
        memcpy(*(void **)(lVar12 + 0x18),*(void **)(*(long *)(lVar12 + 0x38) + 0x20),uVar22);
        *(ulong *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + uVar22;
        *(ulong *)(*(long *)(lVar12 + 0x38) + 0x20) =
             *(long *)(*(long *)(lVar12 + 0x38) + 0x20) + uVar22;
        *(ulong *)(lVar12 + 0x28) = *(long *)(lVar12 + 0x28) + uVar22;
        *(uint *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) - uVar7;
        *(uint *)(*(long *)(lVar12 + 0x38) + 0x28) =
             *(int *)(*(long *)(lVar12 + 0x38) + 0x28) - uVar7;
        lVar12 = *(long *)(lVar12 + 0x38);
        if (*(int *)(lVar12 + 0x28) == 0) {
          *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
        }
      }
    } while (*(int *)(*plVar21 + 0x20) != 0);
  }
  else {
    if ((int)plVar21[0x17] != 2) {
      uVar7 = (*(code *)(&PTR_LAB_02605d00)[(long)*(int *)((long)plVar21 + 0xb4) * 2])
                        (plVar21,param_2);
      uVar15 = uVar7;
      goto joined_r0x0068d6dc;
    }
    do {
      do {
        if ((*(int *)((long)plVar21 + 0xa4) == 0) &&
           (FUN_0068e950(plVar21), *(int *)((long)plVar21 + 0xa4) == 0)) {
          if (param_2 != 0) goto LAB_0068d5d0;
          goto LAB_0068d590;
        }
        *(undefined4 *)(plVar21 + 0x12) = 0;
        bVar5 = *(byte *)(plVar21[10] + (ulong)*(uint *)((long)plVar21 + 0x9c));
        *(undefined2 *)(plVar21[0x2e0] + (ulong)*(uint *)((long)plVar21 + 0x16fc) * 2) = 0;
        uVar7 = *(uint *)((long)plVar21 + 0x16fc);
        *(uint *)((long)plVar21 + 0x16fc) = uVar7 + 1;
        *(byte *)(plVar21[0x2de] + (ulong)uVar7) = bVar5;
        *(short *)((long)plVar21 + (ulong)bVar5 * 4 + 0xc4) =
             *(short *)((long)plVar21 + (ulong)bVar5 * 4 + 0xc4) + 1;
        *(int *)((long)plVar21 + 0xa4) = *(int *)((long)plVar21 + 0xa4) + -1;
        uVar7 = *(int *)((long)plVar21 + 0x9c) + 1;
        *(uint *)((long)plVar21 + 0x9c) = uVar7;
      } while (*(int *)((long)plVar21 + 0x16fc) != (int)plVar21[0x2df] + -1);
      uVar22 = plVar21[0x11];
      if ((long)uVar22 < 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = plVar21[10] + (uVar22 & 0xffffffff);
      }
      FUN_0068fbf0(plVar21,lVar12,uVar7 - uVar22,0);
      lVar12 = *plVar21;
      plVar21[0x11] = (ulong)*(uint *)((long)plVar21 + 0x9c);
      uVar15 = *(uint *)(*(long *)(lVar12 + 0x38) + 0x28);
      uVar7 = *(uint *)(lVar12 + 0x20);
      if (uVar15 <= *(uint *)(lVar12 + 0x20)) {
        uVar7 = uVar15;
      }
      if (uVar7 != 0) {
        uVar22 = (ulong)uVar7;
        memcpy(*(void **)(lVar12 + 0x18),*(void **)(*(long *)(lVar12 + 0x38) + 0x20),uVar22);
        *(ulong *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + uVar22;
        *(ulong *)(*(long *)(lVar12 + 0x38) + 0x20) =
             *(long *)(*(long *)(lVar12 + 0x38) + 0x20) + uVar22;
        *(ulong *)(lVar12 + 0x28) = *(long *)(lVar12 + 0x28) + uVar22;
        *(uint *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) - uVar7;
        *(uint *)(*(long *)(lVar12 + 0x38) + 0x28) =
             *(int *)(*(long *)(lVar12 + 0x38) + 0x28) - uVar7;
        lVar12 = *(long *)(lVar12 + 0x38);
        if (*(int *)(lVar12 + 0x28) == 0) {
          *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
        }
      }
    } while (*(int *)(*plVar21 + 0x20) != 0);
  }
LAB_0068d590:
  if ((int)param_1[4] != 0) {
    return 0;
  }
LAB_0068d598:
  *(undefined4 *)(plVar21 + 8) = 0xffffffff;
  return 0;
LAB_0068d5d0:
  uVar22 = plVar21[0x11];
  if ((long)uVar22 < 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = plVar21[10] + (uVar22 & 0xffffffff);
  }
  FUN_0068fbf0(plVar21,lVar12,*(uint *)((long)plVar21 + 0x9c) - uVar22,param_2 == 4);
  lVar12 = *plVar21;
  plVar21[0x11] = (ulong)*(uint *)((long)plVar21 + 0x9c);
  uVar15 = *(uint *)(*(long *)(lVar12 + 0x38) + 0x28);
  uVar7 = *(uint *)(lVar12 + 0x20);
  if (uVar15 <= *(uint *)(lVar12 + 0x20)) {
    uVar7 = uVar15;
  }
  if (uVar7 != 0) {
    uVar22 = (ulong)uVar7;
    memcpy(*(void **)(lVar12 + 0x18),*(void **)(*(long *)(lVar12 + 0x38) + 0x20),uVar22);
    *(ulong *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + uVar22;
    *(ulong *)(*(long *)(lVar12 + 0x38) + 0x20) =
         *(long *)(*(long *)(lVar12 + 0x38) + 0x20) + uVar22;
    *(ulong *)(lVar12 + 0x28) = *(long *)(lVar12 + 0x28) + uVar22;
    *(uint *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) - uVar7;
    *(uint *)(*(long *)(lVar12 + 0x38) + 0x28) = *(int *)(*(long *)(lVar12 + 0x38) + 0x28) - uVar7;
    lVar12 = *(long *)(lVar12 + 0x38);
    if (*(int *)(lVar12 + 0x28) == 0) {
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
    }
  }
  if (*(int *)(*plVar21 + 0x20) == 0) {
    uVar7 = (uint)(param_2 == 4) << 1;
    uVar15 = (uint)(param_2 == 4) << 1;
  }
  else {
    uVar7 = 3;
    uVar15 = uVar7;
    if (param_2 != 4) {
      uVar7 = 1;
      uVar15 = uVar7;
    }
  }
joined_r0x0068d6dc:
  if ((uVar7 | 1) == 3) {
    *(undefined4 *)(plVar21 + 1) = 0x29a;
    uVar7 = uVar15;
  }
  if ((uVar7 | 2) != 2) {
    if (uVar7 != 1) {
LAB_0068d7c0:
      if (param_2 != 4) {
        return 0;
      }
      if (*(int *)((long)plVar21 + 0x2c) < 1) {
        return 1;
      }
      lVar12 = param_1[0xc];
      if (*(int *)((long)plVar21 + 0x2c) == 2) {
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)lVar12;
        lVar12 = param_1[0xc];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar12 >> 8);
        lVar12 = param_1[0xc];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar12 >> 0x10);
        lVar12 = param_1[0xc];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar12 >> 0x18);
        uVar7 = *(uint *)(plVar21 + 5);
        lVar12 = param_1[2];
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)lVar12;
        lVar12 = param_1[2];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar12 >> 8);
        lVar12 = param_1[2];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar12 >> 0x10);
        uVar22 = (ulong)param_1[2] >> 0x18;
      }
      else {
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar12 >> 0x18);
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)((ulong)lVar12 >> 0x10);
        uVar22 = param_1[0xc];
        uVar7 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar7 + 1;
        *(char *)(plVar21[2] + (ulong)uVar7) = (char)(uVar22 >> 8);
      }
      uVar7 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar7 + 1;
      *(char *)(plVar21[2] + (ulong)uVar7) = (char)uVar22;
      uVar15 = *(uint *)(param_1[7] + 0x28);
      uVar7 = *(uint *)(param_1 + 4);
      if (uVar15 <= *(uint *)(param_1 + 4)) {
        uVar7 = uVar15;
      }
      if (uVar7 != 0) {
        uVar22 = (ulong)uVar7;
        memcpy((void *)param_1[3],*(void **)(param_1[7] + 0x20),uVar22);
        param_1[3] = param_1[3] + uVar22;
        *(ulong *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + uVar22;
        param_1[5] = param_1[5] + uVar22;
        *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
        *(uint *)(param_1[7] + 0x28) = *(int *)(param_1[7] + 0x28) - uVar7;
        lVar12 = param_1[7];
        if (*(int *)(lVar12 + 0x28) == 0) {
          *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
        }
      }
      if (0 < *(int *)((long)plVar21 + 0x2c)) {
        *(int *)((long)plVar21 + 0x2c) = -*(int *)((long)plVar21 + 0x2c);
      }
      return (ulong)((int)plVar21[5] == 0);
    }
    if (param_2 != 5) {
      if (param_2 == 1) {
        FUN_0068f920();
      }
      else {
        FUN_0068f740(plVar21,0,0,0);
        if (param_2 == 3) {
          *(undefined2 *)(plVar21[0xd] + (ulong)(*(int *)((long)plVar21 + 0x74) - 1) * 2) = 0;
                    /* WARNING: Subroutine does not return */
          memset((void *)plVar21[0xd],0,(ulong)(*(int *)((long)plVar21 + 0x74) - 1) << 1);
        }
      }
    }
    uVar15 = *(uint *)(param_1[7] + 0x28);
    uVar14 = *(uint *)(param_1 + 4);
    uVar7 = uVar14;
    if (uVar15 <= uVar14) {
      uVar7 = uVar15;
    }
    if (uVar7 != 0) {
      uVar22 = (ulong)uVar7;
      memcpy((void *)param_1[3],*(void **)(param_1[7] + 0x20),uVar22);
      param_1[3] = param_1[3] + uVar22;
      *(ulong *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + uVar22;
      param_1[5] = param_1[5] + uVar22;
      *(uint *)(param_1 + 4) = (int)param_1[4] - uVar7;
      *(uint *)(param_1[7] + 0x28) = *(int *)(param_1[7] + 0x28) - uVar7;
      lVar12 = param_1[7];
      if (*(int *)(lVar12 + 0x28) == 0) {
        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
      }
      uVar14 = *(uint *)(param_1 + 4);
    }
    if (uVar14 != 0) goto LAB_0068d7c0;
    goto LAB_0068d598;
  }
  goto LAB_0068d590;
}


