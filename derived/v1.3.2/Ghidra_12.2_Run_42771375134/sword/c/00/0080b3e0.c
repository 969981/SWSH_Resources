/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080b3e0; name: FUN_0080b3e0
 */


void FUN_0080b3e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar2 = FUN_0080b0f0(param_3,param_2[-1],*param_1);
      if ((uVar2 & 1) == 0) {
        *param_5 = *param_1;
        uVar4 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        uVar4 = *param_1;
      }
      param_5[1] = uVar4;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        puVar5 = param_1 + 1;
        uVar4 = *param_1;
        *param_5 = uVar4;
        if (puVar5 != param_2) {
          lVar7 = 0;
          puVar10 = param_5;
          do {
            puVar9 = puVar10 + 1;
            uVar2 = FUN_0080b0f0(param_3,*puVar5,uVar4);
            if ((uVar2 & 1) == 0) {
              *puVar9 = *puVar5;
            }
            else {
              puVar10[1] = *puVar10;
              if (puVar10 != param_5) {
                lVar11 = 0;
                do {
                  puVar6 = (undefined8 *)((long)puVar10 + lVar11);
                  uVar2 = FUN_0080b0f0(param_3,*puVar5,puVar6[-1]);
                  if ((uVar2 & 1) == 0) goto LAB_0080b4e4;
                  lVar11 = lVar11 + -8;
                  *puVar6 = puVar6[-1];
                } while (lVar7 != lVar11);
              }
              puVar6 = param_5;
LAB_0080b4e4:
              *puVar6 = *puVar5;
            }
            if (puVar5 + 1 == param_2) {
              return;
            }
            puVar5 = puVar5 + 1;
            uVar4 = *puVar9;
            lVar7 = lVar7 + -8;
            puVar10 = puVar9;
          } while( true );
        }
      }
    }
    else {
      uVar2 = param_4 >> 1;
      puVar5 = param_1 + uVar2;
      FUN_0080ae00(param_1,puVar5,param_3,uVar2,param_5,uVar2);
      FUN_0080ae00(puVar5,param_2,param_3,param_4 - uVar2,param_5 + uVar2,param_4 - uVar2);
      if (uVar2 == 0) {
        puVar10 = puVar5;
      }
      else {
        puVar6 = param_5;
        puVar8 = puVar5;
        puVar9 = param_1;
        do {
          while( true ) {
            if (puVar8 == param_2) {
              if (puVar9 == puVar5) {
                return;
              }
              uVar2 = (long)param_1 + ((uVar2 * 8 + -8) - (long)puVar9);
              uVar1 = ((uint)(uVar2 >> 3) & 0x1fffffff) + 1;
              if ((uVar1 & 3) != 0) {
                lVar11 = 0;
                lVar7 = -((ulong)uVar1 & 3);
                do {
                  lVar7 = lVar7 + 1;
                  *(undefined8 *)((long)puVar6 + lVar11) = *(undefined8 *)((long)puVar9 + lVar11);
                  lVar11 = lVar11 + 8;
                } while (lVar7 != 0);
                puVar6 = (undefined8 *)((long)puVar6 + lVar11);
                puVar9 = (undefined8 *)((long)puVar9 + lVar11);
              }
              if (uVar2 < 0x18) {
                return;
              }
              do {
                *puVar6 = *puVar9;
                puVar6[1] = puVar9[1];
                puVar6[2] = puVar9[2];
                puVar10 = puVar9 + 3;
                puVar9 = puVar9 + 4;
                puVar6[3] = *puVar10;
                puVar6 = puVar6 + 4;
              } while (puVar9 != puVar5);
              return;
            }
            uVar3 = FUN_0080b0f0(param_3,*puVar8,*puVar9);
            if ((uVar3 & 1) == 0) break;
            puVar10 = puVar8 + 1;
            param_5 = puVar6 + 1;
            *puVar6 = *puVar8;
            puVar6 = param_5;
            puVar8 = puVar10;
            if (puVar9 == puVar5) goto LAB_0080b5d8;
          }
          puVar12 = puVar9 + 1;
          param_5 = puVar6 + 1;
          *puVar6 = *puVar9;
          puVar6 = param_5;
          puVar10 = puVar8;
          puVar9 = puVar12;
        } while (puVar12 != puVar5);
      }
LAB_0080b5d8:
      if (puVar10 != param_2) {
        uVar2 = (long)param_2 + (-8 - (long)puVar10);
        uVar1 = ((uint)(uVar2 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar7 = -((ulong)uVar1 & 3);
          puVar5 = param_5;
          puVar9 = puVar10;
          do {
            puVar10 = puVar9 + 1;
            lVar7 = lVar7 + 1;
            param_5 = puVar5 + 1;
            *puVar5 = *puVar9;
            puVar5 = param_5;
            puVar9 = puVar10;
          } while (lVar7 != 0);
        }
        if (0x17 < uVar2) {
          do {
            *param_5 = *puVar10;
            param_5[1] = puVar10[1];
            param_5[2] = puVar10[2];
            puVar5 = puVar10 + 3;
            puVar10 = puVar10 + 4;
            param_5[3] = *puVar5;
            param_5 = param_5 + 4;
          } while (puVar10 != param_2);
        }
      }
    }
  }
  return;
}


