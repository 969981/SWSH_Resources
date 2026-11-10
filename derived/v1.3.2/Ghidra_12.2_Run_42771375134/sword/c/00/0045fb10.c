/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045fb10; name: FUN_0045fb10
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0045fb10(int *param_1,uint param_2,uint *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6,uint *param_7,int *param_8,uint *param_9,uint *param_10,
            byte param_11)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 0x1f;
  }
  *param_5 = 0;
  *param_6 = 0;
  if (((param_2 < 0xc) || (*param_1 != 0x46464952)) ||
     ((param_1[2] != 0x45564157 && (param_1[2] != 0x414d5758)))) {
    return 7;
  }
  if (param_2 - 0xc < 8) {
    return 8;
  }
  bVar9 = false;
  bVar8 = false;
  piVar14 = param_1 + 3;
  piVar2 = (int *)((long)param_1 + (ulong)param_2);
  uVar13 = (ulong)param_2 - 0xc;
  do {
    iVar4 = *piVar14;
    uVar5 = piVar14[1];
    uVar6 = (ulong)uVar5;
    if (iVar4 != 0x61746164 && (int)uVar13 - 8U < uVar5) {
      return 8;
    }
    piVar1 = piVar14 + 2;
    if (iVar4 < 0x61746164) {
      if (iVar4 < 0x20746d66) {
        if (iVar4 == 0x20646b61) {
          if (param_9 != (uint *)0x0) {
            *param_9 = uVar5;
            *(int **)(param_9 + 2) = piVar1;
          }
        }
        else if (iVar4 == 0x20657563) {
          if (!bVar9) {
            return 7;
          }
          if ((param_4 != (uint *)0x0) && (!bVar8)) {
            if (*piVar1 != 0) {
              uVar10 = FUN_00469160(param_4);
              if ((int)uVar10 != 1) {
                return uVar10;
              }
              if (*param_4 != 0) {
                lVar12 = 0;
                uVar13 = 0;
                piVar14 = piVar14 + 3;
                do {
                  iVar4 = piVar14[1];
                  *(int *)(*(long *)(param_4 + 2) + lVar12) = *piVar14;
                  *(int *)(*(long *)(param_4 + 2) + lVar12 + 4) = iVar4;
                  lVar3 = *(long *)(param_4 + 2) + lVar12;
                  lVar12 = lVar12 + 0x10;
                  *(undefined8 *)(lVar3 + 8) = 0;
                  uVar13 = uVar13 + 1;
                  piVar14 = piVar14 + 6;
                } while (uVar13 < *param_4);
              }
            }
            bVar8 = true;
            goto joined_r0x0045fd90;
          }
        }
joined_r0x0045fde0:
        piVar14 = (int *)((long)piVar1 + uVar6);
        if ((uVar5 & 1) != 0) goto LAB_0045fd94;
      }
      else {
        if (iVar4 == 0x20746d66) {
          if (!bVar9) {
            *(int **)(param_3 + 2) = piVar1;
            *param_3 = uVar5;
            if (((param_11 & 1) == 0) &&
               ((uVar11 = piVar14[7], 0x200 < (uVar11 & 0xf00) ||
                ((uVar11 & 0xff) != (uint)*(ushort *)((long)piVar14 + 10))))) {
              uVar7 = uVar11 - (uVar11 >> 1 & 0x55555555);
              uVar7 = (uVar7 & 0x33333333) + (uVar7 >> 2 & 0x33333333);
              piVar14[7] = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar11 << 0xc |
                           0x100;
            }
            bVar9 = true;
          }
          goto joined_r0x0045fde0;
        }
        if (iVar4 != 0x5453494c) goto joined_r0x0045fde0;
        piVar14 = piVar14 + 3;
      }
    }
    else {
      if (iVar4 < 0x6c62616c) {
        if (iVar4 == 0x6b656573) {
          if (param_10 != (uint *)0x0) {
            *(int **)(param_10 + 2) = piVar1;
            *param_10 = uVar5;
          }
        }
        else if (iVar4 == 0x61746164) {
          if (bVar9) {
            *param_7 = uVar5;
            *param_8 = (int)piVar1 - (int)param_1;
            return 1;
          }
          return 7;
        }
        goto joined_r0x0045fde0;
      }
      if (iVar4 == 0x6c62616c) {
        if (((param_4 != (uint *)0x0) && (bVar8)) && (*param_4 != 0)) {
          piVar15 = *(int **)(param_4 + 2);
          uVar11 = 0;
          do {
            if (*piVar15 == *piVar1) {
              FUN_00469260(param_4,uVar11,piVar14 + 3,uVar5 - 4);
              break;
            }
            uVar11 = uVar11 + 1;
            piVar15 = piVar15 + 4;
          } while (uVar11 < *param_4);
        }
        goto joined_r0x0045fde0;
      }
      if (iVar4 != 0x6c706d73) goto joined_r0x0045fde0;
      if (piVar14[9] != 0) {
        uVar11 = piVar14[10];
        *param_5 = *(undefined4 *)((long)piVar14 + (ulong)uVar11 + 0x34);
        *param_6 = *(undefined4 *)((long)piVar14 + (ulong)uVar11 + 0x38);
      }
joined_r0x0045fd90:
      piVar14 = (int *)((long)piVar1 + uVar6);
      if ((uVar5 & 1) == 0) goto LAB_0045ff50;
LAB_0045fd94:
      piVar14 = (int *)((long)piVar1 + uVar6);
      if (((char)*piVar14 == '\0') && (piVar14 = (int *)((long)piVar14 + 1), piVar2 < piVar14)) {
        return 7;
      }
    }
LAB_0045ff50:
    uVar13 = (long)piVar2 - (long)piVar14;
    if ((uVar13 & 0xfffffff8) == 0) {
      return 8;
    }
  } while( true );
}


