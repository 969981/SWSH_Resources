/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080ae00; name: FUN_0080ae00
 */


void FUN_0080ae00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar3 = FUN_0080b0f0(param_3,param_2[-1],*param_1);
      if ((uVar3 & 1) != 0) {
        uVar4 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar4;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (puVar9 = param_1 + 1, puVar9 != param_2)) {
        lVar10 = 0;
        do {
          uVar4 = *puVar9;
          if (puVar9 != param_1) {
            lVar6 = lVar10;
            do {
              uVar3 = FUN_0080b0f0(param_3,uVar4,*(undefined8 *)((long)param_1 + lVar6));
              if ((uVar3 & 1) == 0) {
                puVar5 = (undefined8 *)((long)param_1 + lVar6 + 8);
                goto LAB_0080aec8;
              }
              bVar2 = lVar6 != 0;
              ((undefined8 *)((long)param_1 + lVar6))[1] = *(undefined8 *)((long)param_1 + lVar6);
              lVar6 = lVar6 + -8;
            } while (bVar2);
          }
          puVar5 = param_1;
LAB_0080aec8:
          puVar9 = puVar9 + 1;
          lVar10 = lVar10 + 8;
          *puVar5 = uVar4;
        } while (puVar9 != param_2);
      }
    }
    else {
      uVar3 = param_4 >> 1;
      puVar9 = param_1 + uVar3;
      if (param_6 < (long)param_4) {
        FUN_0080ae00();
        FUN_0080ae00(puVar9,param_2,param_3,param_4 - uVar3,param_5,param_6);
        FUN_0080b6d0(param_1,puVar9,param_2,param_3,uVar3,param_4 - uVar3,param_5,param_6);
        return;
      }
      FUN_0080b3e0(param_1,puVar9,param_3,uVar3);
      puVar5 = param_5 + uVar3;
      FUN_0080b3e0(puVar9,param_2,param_3,param_4 - uVar3,puVar5);
      puVar9 = param_5 + param_4;
      puVar11 = puVar5;
      do {
        while( true ) {
          puVar7 = param_1;
          if (puVar11 == puVar9) {
            if (param_5 == puVar5) {
              return;
            }
            uVar3 = (long)puVar5 + (-8 - (long)param_5);
            uVar1 = ((uint)(uVar3 >> 3) & 0x1fffffff) + 1;
            if ((uVar1 & 3) != 0) {
              lVar6 = 0;
              lVar10 = -((ulong)uVar1 & 3);
              do {
                lVar10 = lVar10 + 1;
                *(undefined8 *)((long)puVar7 + lVar6) = *(undefined8 *)((long)param_5 + lVar6);
                lVar6 = lVar6 + 8;
              } while (lVar10 != 0);
              param_5 = (undefined8 *)((long)param_5 + lVar6);
              puVar7 = (undefined8 *)((long)puVar7 + lVar6);
            }
            if (uVar3 < 0x18) {
              return;
            }
            do {
              *puVar7 = *param_5;
              puVar7[1] = param_5[1];
              puVar7[2] = param_5[2];
              puVar9 = param_5 + 3;
              param_5 = param_5 + 4;
              puVar7[3] = *puVar9;
              puVar7 = puVar7 + 4;
            } while (param_5 != puVar5);
            return;
          }
          uVar3 = FUN_0080b0f0(param_3,*puVar11,*param_5);
          if ((uVar3 & 1) == 0) break;
          puVar12 = puVar11 + 1;
          *puVar7 = *puVar11;
          param_1 = puVar7 + 1;
          puVar11 = puVar12;
          if (param_5 == puVar5) goto LAB_0080afe4;
        }
        puVar8 = param_5 + 1;
        *puVar7 = *param_5;
        param_1 = puVar7 + 1;
        param_5 = puVar8;
        puVar12 = puVar11;
      } while (puVar8 != puVar5);
LAB_0080afe4:
      puVar7 = puVar7 + 1;
      if (puVar12 != puVar9) {
        uVar3 = (long)puVar9 + (-8 - (long)puVar12);
        uVar1 = ((uint)(uVar3 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar6 = 0;
          lVar10 = -((ulong)uVar1 & 3);
          do {
            lVar10 = lVar10 + 1;
            *(undefined8 *)((long)puVar7 + lVar6) = *(undefined8 *)((long)puVar12 + lVar6);
            lVar6 = lVar6 + 8;
          } while (lVar10 != 0);
          puVar12 = (undefined8 *)((long)puVar12 + lVar6);
          puVar7 = (undefined8 *)((long)puVar7 + lVar6);
        }
        if (0x17 < uVar3) {
          do {
            *puVar7 = *puVar12;
            puVar7[1] = puVar12[1];
            puVar7[2] = puVar12[2];
            puVar5 = puVar12 + 3;
            puVar12 = puVar12 + 4;
            puVar7[3] = *puVar5;
            puVar7 = puVar7 + 4;
          } while (puVar12 != puVar9);
        }
      }
    }
  }
  return;
}


