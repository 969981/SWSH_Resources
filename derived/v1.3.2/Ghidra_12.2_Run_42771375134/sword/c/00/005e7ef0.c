/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e7ef0; name: FUN_005e7ef0
 */


/* WARNING: Removing unreachable block (ram,0x005e825c) */
/* WARNING: Removing unreachable block (ram,0x005e8244) */
/* WARNING: Removing unreachable block (ram,0x005e8278) */

long FUN_005e7ef0(undefined8 param_1,long param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar5 = param_2;
  if (param_2 < 0) {
    lVar5 = param_2 + 1;
  }
  lVar9 = 1;
  if (1 < param_2) {
    lVar9 = lVar5 >> 1;
  }
  if (lVar9 < param_2) {
    if (lVar9 != 0) {
      lVar5 = *param_3;
      *param_3 = param_3[lVar9];
      param_3[lVar9] = lVar5;
    }
    lVar8 = *param_3;
    lVar5 = 1;
    lVar9 = param_2 + -1;
    if (lVar9 != 0 && 0 < param_2) {
      do {
        if (*(long *)(param_3[lVar5] + 0x20) == 0) {
          lVar10 = *(long *)(lVar8 + 0x20);
LAB_005e7fec:
          if (lVar10 != 0) {
LAB_005e8004:
            do {
              lVar5 = lVar5 + 1;
              if (lVar9 <= lVar5) break;
              if (*(long *)(param_3[lVar5] + 0x20) != 0) {
                pbVar6 = *(byte **)(param_3[lVar5] + 0x18);
                uVar3 = (uint)*pbVar6;
                if (*pbVar6 != 0) {
                  if (lVar10 == 0) break;
                  pbVar7 = *(byte **)(lVar8 + 0x18);
                  uVar4 = (uint)*pbVar7;
                  if (*pbVar7 == 0) break;
                  do {
                    pbVar7 = pbVar7 + 1;
                    pbVar6 = pbVar6 + 1;
                    uVar3 = tolower(uVar3);
                    uVar4 = tolower(uVar4);
                    if ((uVar3 & 0xff) < (uVar4 & 0xff)) {
                      bVar1 = true;
                      goto LAB_005e80b4;
                    }
                    if ((uVar4 & 0xff) < (uVar3 & 0xff)) goto LAB_005e80cc;
                    uVar3 = (uint)*pbVar6;
                    uVar4 = (uint)*pbVar7;
                  } while ((uVar3 != 0) && (uVar4 != 0));
                  bVar1 = *pbVar7 != 0 || *pbVar6 != 0;
                  if (uVar3 != 0) break;
LAB_005e80b4:
                  if (!bVar1) break;
                  goto LAB_005e8004;
                }
              }
            } while (lVar10 != 0);
          }
        }
        else {
          pbVar6 = *(byte **)(param_3[lVar5] + 0x18);
          uVar3 = (uint)*pbVar6;
          lVar10 = *(long *)(lVar8 + 0x20);
          if (*pbVar6 == 0) goto LAB_005e7fec;
          if (lVar10 != 0) {
            pbVar7 = *(byte **)(lVar8 + 0x18);
            uVar4 = (uint)*pbVar7;
            if (*pbVar7 == 0) goto LAB_005e80cc;
            do {
              pbVar7 = pbVar7 + 1;
              pbVar6 = pbVar6 + 1;
              uVar3 = tolower(uVar3);
              uVar4 = tolower(uVar4);
              if ((uVar3 & 0xff) < (uVar4 & 0xff)) goto LAB_005e8004;
              if ((uVar4 & 0xff) < (uVar3 & 0xff)) goto LAB_005e80cc;
              uVar3 = (uint)*pbVar6;
              uVar4 = (uint)*pbVar7;
            } while ((uVar3 != 0) && (uVar4 != 0));
            if ((uVar3 != 0) || (*pbVar7 == 0 && *pbVar6 == 0)) goto LAB_005e80cc;
            goto LAB_005e8004;
          }
        }
LAB_005e80cc:
        if (*(long *)(param_3[lVar9] + 0x20) == 0) {
LAB_005e8150:
          if (lVar10 == 0) {
LAB_005e815c:
            lVar11 = lVar10;
LAB_005e8168:
            do {
              lVar9 = lVar9 + -1;
              if (lVar9 <= lVar5) break;
              lVar2 = lVar10;
              if (*(long *)(param_3[lVar9] + 0x20) == 0) {
LAB_005e8220:
                lVar11 = lVar2;
                if (lVar2 != 0) break;
                goto LAB_005e8168;
              }
              pbVar6 = *(byte **)(param_3[lVar9] + 0x18);
              uVar3 = (uint)*pbVar6;
              if (*pbVar6 == 0) {
                lVar2 = lVar11;
                goto LAB_005e8220;
              }
              if (lVar11 == 0) {
                lVar11 = 0;
              }
              else {
                pbVar7 = *(byte **)(lVar8 + 0x18);
                uVar4 = (uint)*pbVar7;
                if (*pbVar7 == 0) {
                }
                else {
                  do {
                    pbVar7 = pbVar7 + 1;
                    pbVar6 = pbVar6 + 1;
                    uVar3 = tolower(uVar3);
                    uVar4 = tolower(uVar4);
                    if ((uVar3 & 0xff) < (uVar4 & 0xff)) goto LAB_005e8280;
                    if ((uVar4 & 0xff) < (uVar3 & 0xff)) {
                      goto LAB_005e8168;
                    }
                    uVar3 = (uint)*pbVar6;
                    uVar4 = (uint)*pbVar7;
                  } while ((uVar3 != 0) && (uVar4 != 0));
                  uVar4 = (uint)(*pbVar7 != 0 || *pbVar6 != 0);
                  if (uVar3 != 0) {
                    uVar4 = 0xffffffff;
                  }
                  if (0 < (int)uVar4) break;
                }
              }
            } while( true );
          }
        }
        else {
          pbVar6 = *(byte **)(param_3[lVar9] + 0x18);
          uVar3 = (uint)*pbVar6;
          if (*pbVar6 == 0) goto LAB_005e8150;
          if (lVar10 == 0) goto LAB_005e815c;
          pbVar7 = *(byte **)(lVar8 + 0x18);
          uVar4 = (uint)*pbVar7;
          if (*pbVar7 == 0) goto LAB_005e815c;
          do {
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
            uVar3 = tolower(uVar3);
            uVar4 = tolower(uVar4);
            if ((uVar3 & 0xff) < (uVar4 & 0xff)) goto LAB_005e8280;
            if ((uVar4 & 0xff) < (uVar3 & 0xff)) goto LAB_005e815c;
            uVar3 = (uint)*pbVar6;
            uVar4 = (uint)*pbVar7;
          } while ((uVar3 != 0) && (uVar4 != 0));
          if ((uVar3 != 0) || (*pbVar7 == 0 && *pbVar6 == 0)) goto LAB_005e815c;
        }
LAB_005e8280:
        if (lVar5 < lVar9) {
          lVar10 = param_3[lVar5];
          param_3[lVar5] = param_3[lVar9];
          param_3[lVar9] = lVar10;
        }
      } while (lVar5 <= lVar9);
      lVar8 = *param_3;
    }
    lVar5 = lVar5 + -1;
    *param_3 = param_3[lVar5];
    param_3[lVar5] = lVar8;
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}


