/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00483b40; name: FUN_00483b40
 */


void FUN_00483b40(long param_1,float *param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  float *pfVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pbVar3 = *(byte **)(*(long *)(param_1 + 0x50) + 0x18), pbVar3 != (byte *)0x0)) {
    uVar5 = 0;
    pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
    do {
      if (pbVar3[uVar5 + 1] == 0) {
        if (pfVar2 == (float *)0x0) goto LAB_00483bc8;
        *param_2 = *param_2 + *pfVar2;
        pbVar3 = *(byte **)(*(long *)(param_1 + 0x50) + 0x18);
        break;
      }
      uVar5 = uVar5 + 1;
      pfVar2 = pfVar2 + 4;
    } while (uVar5 < *pbVar3);
    if (pbVar3 != (byte *)0x0) {
LAB_00483bc8:
      uVar5 = 0;
      pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
      do {
        if (pbVar3[uVar5 + 1] == 2) {
          if (pfVar2 == (float *)0x0) goto LAB_00483c24;
          param_2[2] = param_2[2] + *pfVar2;
          pbVar3 = *(byte **)(*(long *)(param_1 + 0x50) + 0x18);
          break;
        }
        uVar5 = uVar5 + 1;
        pfVar2 = pfVar2 + 4;
      } while (uVar5 < *pbVar3);
      if (pbVar3 != (byte *)0x0) {
LAB_00483c24:
        uVar5 = 0;
        pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
        do {
          if (pbVar3[uVar5 + 1] == 3) {
            if (pfVar2 == (float *)0x0) goto LAB_00483c80;
            param_2[3] = param_2[3] + *pfVar2;
            pbVar3 = *(byte **)(*(long *)(param_1 + 0x50) + 0x18);
            break;
          }
          uVar5 = uVar5 + 1;
          pfVar2 = pfVar2 + 4;
        } while (uVar5 < *pbVar3);
        if (pbVar3 != (byte *)0x0) {
LAB_00483c80:
          uVar5 = 0;
          pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
          do {
            if (pbVar3[uVar5 + 1] == 4) {
              if (pfVar2 == (float *)0x0) goto LAB_00483cdc;
              param_2[4] = param_2[4] + *pfVar2;
              pbVar3 = *(byte **)(*(long *)(param_1 + 0x50) + 0x18);
              break;
            }
            uVar5 = uVar5 + 1;
            pfVar2 = pfVar2 + 4;
          } while (uVar5 < *pbVar3);
          if (pbVar3 != (byte *)0x0) {
LAB_00483cdc:
            uVar5 = 0;
            pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
            do {
              if (pbVar3[uVar5 + 1] == 0xb) {
                if ((pfVar2 != (float *)0x0) && (*pfVar2 != 1.0)) {
                  FUN_00483f70(param_3,param_1,1);
                }
                break;
              }
              uVar5 = uVar5 + 1;
              pfVar2 = pfVar2 + 4;
            } while (uVar5 < *pbVar3);
          }
        }
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    plVar4 = (long *)*plVar6;
    uVar1 = *(uint *)(plVar6 + 1);
    plVar6 = plVar4;
    if (uVar1 == 0) {
LAB_00483d80:
      if (plVar6 != plVar4 + (ulong)uVar1 * 2) {
        lVar7 = plVar6[1];
        pbVar3 = *(byte **)(lVar7 + 0x18);
        if (pbVar3 != (byte *)0x0) {
          uVar5 = 0;
          pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
          do {
            if (pbVar3[uVar5 + 1] == 0) {
              if (pfVar2 == (float *)0x0) goto LAB_00483dec;
              *param_2 = *param_2 + *pfVar2;
              pbVar3 = *(byte **)(lVar7 + 0x18);
              break;
            }
            uVar5 = uVar5 + 1;
            pfVar2 = pfVar2 + 4;
          } while (uVar5 < *pbVar3);
          if (pbVar3 != (byte *)0x0) {
LAB_00483dec:
            uVar5 = 0;
            pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
            do {
              if (pbVar3[uVar5 + 1] == 2) {
                if (pfVar2 == (float *)0x0) goto LAB_00483e44;
                param_2[2] = param_2[2] + *pfVar2;
                pbVar3 = *(byte **)(lVar7 + 0x18);
                break;
              }
              uVar5 = uVar5 + 1;
              pfVar2 = pfVar2 + 4;
            } while (uVar5 < *pbVar3);
            if (pbVar3 != (byte *)0x0) {
LAB_00483e44:
              uVar5 = 0;
              pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
              do {
                if (pbVar3[uVar5 + 1] == 3) {
                  if (pfVar2 == (float *)0x0) goto LAB_00483e9c;
                  param_2[3] = param_2[3] + *pfVar2;
                  pbVar3 = *(byte **)(lVar7 + 0x18);
                  break;
                }
                uVar5 = uVar5 + 1;
                pfVar2 = pfVar2 + 4;
              } while (uVar5 < *pbVar3);
              if (pbVar3 != (byte *)0x0) {
LAB_00483e9c:
                uVar5 = 0;
                pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
                do {
                  if (pbVar3[uVar5 + 1] == 4) {
                    if (pfVar2 == (float *)0x0) goto LAB_00483ef4;
                    param_2[4] = param_2[4] + *pfVar2;
                    pbVar3 = *(byte **)(lVar7 + 0x18);
                    break;
                  }
                  uVar5 = uVar5 + 1;
                  pfVar2 = pfVar2 + 4;
                } while (uVar5 < *pbVar3);
                if (pbVar3 != (byte *)0x0) {
LAB_00483ef4:
                  uVar5 = 0;
                  pfVar2 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
                  do {
                    if (pbVar3[uVar5 + 1] == 0xb) {
                      if (pfVar2 == (float *)0x0) {
                        return;
                      }
                      if (*pfVar2 == 1.0) {
                        return;
                      }
                      FUN_00483f70(param_3,param_1,0);
                      return;
                    }
                    uVar5 = uVar5 + 1;
                    pfVar2 = pfVar2 + 4;
                  } while (uVar5 < *pbVar3);
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar7 = (ulong)uVar1 << 4;
      do {
        if (*plVar6 == *param_4) goto LAB_00483d80;
        lVar7 = lVar7 + -0x10;
        plVar6 = plVar6 + 2;
      } while (lVar7 != 0);
    }
  }
  return;
}


