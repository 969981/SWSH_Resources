/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01521930; name: FUN_01521930
 */


void FUN_01521930(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar5;
  long lVar4;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  
  switch(param_2) {
  case 0:
    plVar5 = (long *)(param_1 + 0x1358);
    uVar3 = 0x3c;
    break;
  case 1:
    plVar5 = (long *)(param_1 + 0x1360);
    uVar3 = 0x1e;
    break;
  case 2:
    plVar5 = (long *)(param_1 + 0x1368);
    uVar3 = 0x14;
    break;
  case 3:
    plVar5 = (long *)(param_1 + 0x1370);
    uVar3 = 0x50;
    break;
  case 4:
    plVar5 = (long *)(param_1 + 0x1378);
    uVar3 = 0x226;
    break;
  case 5:
    plVar5 = (long *)(param_1 + 0x1380);
    uVar3 = 0xd2;
    break;
  case 6:
    lVar4 = 5000;
    goto LAB_015219d4;
  case 7:
    lVar4 = 0x1390;
LAB_015219d4:
    plVar5 = (long *)(param_1 + lVar4);
    uVar3 = 100;
    break;
  case 8:
    plVar5 = (long *)(param_1 + 0x1398);
    uVar3 = 0x40;
    break;
  default:
    goto switchD_01521964_default;
  }
  lVar4 = *plVar5;
  iVar6 = 0;
  uVar8 = 0;
  uVar10 = 0;
  if (param_2 == 0) {
    do {
      uVar9 = *(uint *)(lVar4 + uVar8 * 4);
      if (((int)uVar9 < 0) && ((uVar9 & 0x7fff) != 0)) {
        uVar9 = (uint)uVar10;
        if ((uVar8 != uVar10) &&
           (((lVar11 = *(long *)(param_1 + 0x1358), lVar11 != 0 && (uVar8 < 0x3c)) && (uVar9 < 0x3c)
            ))) {
          uVar2 = *(undefined4 *)(lVar11 + uVar8 * 4);
          iVar7 = (int)uVar8;
          if (uVar8 < uVar10) {
            uVar16 = uVar8;
            if ((uVar9 - iVar7 & 7) != 0) {
              uVar16 = 0;
              do {
                puVar13 = (undefined4 *)(lVar11 + uVar8 * 4 + uVar16 * 4);
                uVar16 = uVar16 + 1;
                *puVar13 = puVar13[1];
              } while (((ulong)(iVar6 + uVar9) & 7) != uVar16);
              uVar16 = uVar8 + uVar16;
            }
            if (6 < ~uVar8 + uVar10) {
              lVar12 = uVar10 - uVar16;
              puVar13 = (undefined4 *)(lVar11 + uVar16 * 4 + 0x10);
              do {
                puVar13[-4] = puVar13[-3];
                *(undefined8 *)(puVar13 + -3) = *(undefined8 *)(puVar13 + -2);
                puVar13[-1] = *puVar13;
                *puVar13 = puVar13[1];
                *(undefined8 *)(puVar13 + 1) = *(undefined8 *)(puVar13 + 2);
                puVar13[3] = puVar13[4];
                lVar12 = lVar12 + -8;
                puVar13 = puVar13 + 8;
              } while (lVar12 != 0);
            }
          }
          else {
            uVar16 = (ulong)(int)uVar9;
            if ((long)uVar16 < (long)uVar8) {
              uVar14 = uVar8;
              if ((iVar7 - uVar9 & 7) != 0) {
                lVar12 = 0;
                do {
                  puVar13 = (undefined4 *)(lVar11 + uVar8 * 4 + lVar12 * 4);
                  lVar12 = lVar12 + -1;
                  *puVar13 = puVar13[-1];
                } while (-lVar12 != ((ulong)(iVar7 - uVar9) & 7));
                uVar14 = uVar8 + lVar12;
              }
              if (6 < uVar8 + ~uVar16) {
                puVar15 = (undefined8 *)(lVar11 + uVar14 * 4 + -0x10);
                do {
                  uVar1 = *(undefined4 *)((long)puVar15 + 0xc);
                  *(undefined4 *)((long)puVar15 + 0xc) = *(undefined4 *)(puVar15 + 1);
                  *(undefined4 *)(puVar15 + 2) = uVar1;
                  uVar14 = uVar14 - 8;
                  *(undefined8 *)((long)puVar15 + 4) = *puVar15;
                  *(undefined8 *)((long)puVar15 + -4) = puVar15[-1];
                  *(undefined8 *)((long)puVar15 + -0xc) = puVar15[-2];
                  puVar15 = puVar15 + -4;
                } while ((long)uVar16 < (long)uVar14);
              }
            }
          }
          *(undefined4 *)(lVar11 + uVar10 * 4) = uVar2;
        }
        uVar10 = (ulong)(uVar9 + 1);
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 7;
    } while (uVar8 != uVar3);
  }
  else {
    do {
      uVar9 = *(uint *)(lVar4 + uVar8 * 4);
      if (((int)uVar9 < 0) && ((uVar9 & 0x7fff) != 0)) {
        uVar9 = (uint)uVar10;
        if (uVar8 != uVar10) {
          uVar16 = 0x1e;
          plVar5 = (long *)(param_1 + 0x1360);
          switch(param_2) {
          case 2:
            uVar16 = 0x14;
            plVar5 = (long *)(param_1 + 0x1368);
          case 1:
            lVar11 = *plVar5;
            break;
          case 3:
            uVar16 = 0x50;
            lVar11 = *(long *)(param_1 + 0x1370);
            if (lVar11 == 0) goto switchD_01521c8c_default;
            goto LAB_01521ca0;
          case 4:
            uVar16 = 0x226;
            lVar11 = *(long *)(param_1 + 0x1378);
            break;
          case 5:
            uVar16 = 0xd2;
            lVar11 = *(long *)(param_1 + 0x1380);
            break;
          case 6:
            uVar16 = 100;
            lVar11 = *(long *)(param_1 + 5000);
            break;
          case 7:
            uVar16 = 100;
            lVar11 = *(long *)(param_1 + 0x1390);
            break;
          case 8:
            uVar16 = 0x40;
            lVar11 = *(long *)(param_1 + 0x1398);
            break;
          default:
            goto switchD_01521c8c_default;
          }
          if (lVar11 != 0) {
LAB_01521ca0:
            if ((uVar8 < uVar16) && (uVar9 < (uint)uVar16)) {
              uVar2 = *(undefined4 *)(lVar11 + uVar8 * 4);
              iVar7 = (int)uVar8;
              if (uVar8 < uVar10) {
                uVar16 = uVar8;
                if ((uVar9 - iVar7 & 7) != 0) {
                  uVar16 = 0;
                  do {
                    puVar13 = (undefined4 *)(lVar11 + uVar8 * 4 + uVar16 * 4);
                    uVar16 = uVar16 + 1;
                    *puVar13 = puVar13[1];
                  } while (((ulong)(iVar6 + uVar9) & 7) != uVar16);
                  uVar16 = uVar8 + uVar16;
                }
                if (6 < ~uVar8 + uVar10) {
                  lVar12 = uVar10 - uVar16;
                  puVar13 = (undefined4 *)(lVar11 + uVar16 * 4 + 0x10);
                  do {
                    puVar13[-4] = puVar13[-3];
                    *(undefined8 *)(puVar13 + -3) = *(undefined8 *)(puVar13 + -2);
                    puVar13[-1] = *puVar13;
                    *puVar13 = puVar13[1];
                    *(undefined8 *)(puVar13 + 1) = *(undefined8 *)(puVar13 + 2);
                    puVar13[3] = puVar13[4];
                    lVar12 = lVar12 + -8;
                    puVar13 = puVar13 + 8;
                  } while (lVar12 != 0);
                }
              }
              else {
                uVar16 = (ulong)(int)uVar9;
                if ((long)uVar16 < (long)uVar8) {
                  uVar14 = uVar8;
                  if ((iVar7 - uVar9 & 7) != 0) {
                    lVar12 = 0;
                    do {
                      puVar13 = (undefined4 *)(lVar11 + uVar8 * 4 + lVar12 * 4);
                      lVar12 = lVar12 + -1;
                      *puVar13 = puVar13[-1];
                    } while (-lVar12 != ((ulong)(iVar7 - uVar9) & 7));
                    uVar14 = uVar8 + lVar12;
                  }
                  if (6 < uVar8 + ~uVar16) {
                    puVar15 = (undefined8 *)(lVar11 + uVar14 * 4 + -0x10);
                    do {
                      uVar1 = *(undefined4 *)((long)puVar15 + 0xc);
                      *(undefined4 *)((long)puVar15 + 0xc) = *(undefined4 *)(puVar15 + 1);
                      *(undefined4 *)(puVar15 + 2) = uVar1;
                      uVar14 = uVar14 - 8;
                      *(undefined8 *)((long)puVar15 + 4) = *puVar15;
                      *(undefined8 *)((long)puVar15 + -4) = puVar15[-1];
                      *(undefined8 *)((long)puVar15 + -0xc) = puVar15[-2];
                      puVar15 = puVar15 + -4;
                    } while ((long)uVar16 < (long)uVar14);
                  }
                }
              }
              *(undefined4 *)(lVar11 + uVar10 * 4) = uVar2;
            }
          }
        }
switchD_01521c8c_default:
        uVar10 = (ulong)(uVar9 + 1);
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 7;
    } while (uVar8 != uVar3);
  }
switchD_01521964_default:
  return;
}


