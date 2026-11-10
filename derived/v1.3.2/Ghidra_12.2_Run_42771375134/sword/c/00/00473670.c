/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00473670; name: FUN_00473670
 */


bool FUN_00473670(long param_1,code *param_2,ulong *param_3,undefined8 param_4,ulong *param_5,
                 undefined8 param_6)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar4 = (*param_2)(param_1 + 8,param_4,param_6), (uVar4 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  uVar4 = *param_3;
  if (uVar4 == 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x18);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar6 = puVar13;
      do {
        *param_5 = puVar6[1];
        uVar4 = (*param_2)(puVar6,param_4,param_6);
        if ((uVar4 & 1) == 0) {
          uVar5 = *(uint *)(param_1 + 0x20);
          puVar6 = puVar6 + 2;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x20);
          puVar13 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x10 + -0x10);
          if (puVar6 < puVar13) {
            uVar4 = (*(long *)(param_1 + 0x18) + ((ulong)uVar5 * 0x10 - (long)puVar6)) - 0x11;
            uVar5 = ((uint)(uVar4 >> 4) & 0xfffffff) + 1;
            puVar8 = puVar6;
            if ((uVar5 & 7) != 0) {
              lVar10 = -((ulong)uVar5 & 7);
              puVar14 = puVar6;
              do {
                puVar8 = puVar14 + 2;
                *puVar14 = *puVar8;
                puVar14[1] = puVar14[3];
                lVar10 = lVar10 + 1;
                puVar14 = puVar8;
              } while (lVar10 != 0);
            }
            if (0x6f < uVar4) {
              do {
                *puVar8 = puVar8[2];
                puVar8[1] = puVar8[3];
                puVar8[2] = puVar8[4];
                puVar8[3] = puVar8[5];
                puVar8[4] = puVar8[6];
                puVar8[5] = puVar8[7];
                puVar8[6] = puVar8[8];
                puVar8[7] = puVar8[9];
                puVar8[8] = puVar8[10];
                puVar8[9] = puVar8[0xb];
                puVar8[10] = puVar8[0xc];
                puVar8[0xb] = puVar8[0xd];
                puVar8[0xc] = puVar8[0xe];
                puVar8[0xd] = puVar8[0xf];
                puVar14 = puVar8 + 0x10;
                puVar8[0xe] = *puVar14;
                puVar8[0xf] = puVar8[0x11];
                puVar8 = puVar14;
              } while (puVar14 < puVar13);
            }
            uVar5 = *(uint *)(param_1 + 0x20);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(param_1 + 0x20) = uVar5;
        }
        puVar13 = *(undefined8 **)(param_1 + 0x18);
      } while (puVar13 + (ulong)uVar5 * 2 != puVar6);
    }
    if ((puVar13 != (undefined8 *)0x0) && (uVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar13);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      cVar1 = *(char *)(param_1 + 0x10);
      goto joined_r0x004739d0;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar7) {
      iVar9 = 0;
      do {
        while( true ) {
          iVar11 = iVar7 - iVar9;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1;
          }
          iVar11 = iVar9 + (iVar11 >> 1);
          uVar12 = *(ulong *)(*(long *)(param_1 + 0x18) + (long)iVar11 * 0x10 + 8);
          if (uVar4 < uVar12) break;
          if (uVar4 <= uVar12) {
            lVar10 = *(long *)(param_1 + 0x18) + (long)iVar11 * 0x10;
            if (lVar10 != 0) {
              *param_5 = uVar4;
              uVar4 = (*param_2)(lVar10,param_4,param_6);
              if ((uVar4 & 1) != 0) {
                uVar5 = *(uint *)(param_1 + 0x20);
                iVar7 = uVar5 - 1;
                if (-1 < iVar7) {
                  lVar10 = *(long *)(param_1 + 0x18);
                  iVar9 = 0;
                  iVar11 = iVar7;
                  goto LAB_004738c0;
                }
              }
            }
            goto LAB_004739cc;
          }
          iVar9 = iVar11 + 1;
          if (iVar7 < iVar9) goto LAB_004739cc;
        }
        iVar7 = iVar11 + -1;
      } while (iVar9 <= iVar7);
    }
  }
LAB_004739cc:
  cVar1 = *(char *)(param_1 + 0x10);
joined_r0x004739d0:
  if (cVar1 == '\0') {
    bVar3 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
LAB_004738c0:
  do {
    iVar2 = iVar11 - iVar9;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar9 + (iVar2 >> 1);
    uVar4 = *(ulong *)(lVar10 + (long)iVar2 * 0x10 + 8);
    if (uVar4 <= *param_3) {
      if (uVar4 < *param_3) goto code_r0x004738f8;
      puVar13 = (undefined8 *)(lVar10 + (long)iVar2 * 0x10);
      puVar6 = (undefined8 *)(lVar10 + (ulong)uVar5 * 0x10 + -0x10);
      if (puVar13 < puVar6) {
        uVar4 = (ulong)uVar5 * 0x10 + -0x11 + (long)iVar2 * -0x10;
        uVar5 = ((uint)(uVar4 >> 4) & 0xfffffff) + 1;
        if ((uVar5 & 7) != 0) {
          lVar10 = -((ulong)uVar5 & 7);
          puVar8 = puVar13;
          do {
            puVar13 = puVar8 + 2;
            *puVar8 = *puVar13;
            puVar8[1] = puVar8[3];
            lVar10 = lVar10 + 1;
            puVar8 = puVar13;
          } while (lVar10 != 0);
        }
        if (0x6f < uVar4) {
          do {
            *puVar13 = puVar13[2];
            puVar13[1] = puVar13[3];
            puVar13[2] = puVar13[4];
            puVar13[3] = puVar13[5];
            puVar13[4] = puVar13[6];
            puVar13[5] = puVar13[7];
            puVar13[6] = puVar13[8];
            puVar13[7] = puVar13[9];
            puVar13[8] = puVar13[10];
            puVar13[9] = puVar13[0xb];
            puVar13[10] = puVar13[0xc];
            puVar13[0xb] = puVar13[0xd];
            puVar13[0xc] = puVar13[0xe];
            puVar13[0xd] = puVar13[0xf];
            puVar8 = puVar13 + 0x10;
            puVar13[0xe] = *puVar8;
            puVar13[0xf] = puVar13[0x11];
            puVar13 = puVar8;
          } while (puVar8 < puVar6);
        }
        iVar7 = *(int *)(param_1 + 0x20) + -1;
      }
      *(int *)(param_1 + 0x20) = iVar7;
      break;
    }
    iVar11 = iVar2 + -1;
  } while (iVar9 <= iVar11);
  goto LAB_004739cc;
code_r0x004738f8:
  iVar9 = iVar2 + 1;
  if (iVar11 < iVar9) goto LAB_004739cc;
  goto LAB_004738c0;
}


