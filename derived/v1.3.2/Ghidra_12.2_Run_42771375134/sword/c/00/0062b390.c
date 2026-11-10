/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062b390; name: FUN_0062b390
 */


long FUN_0062b390(long param_1,ulong param_2,uint *param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  short sVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  int local_54;
  
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  local_54 = 0;
  *param_3 = 0;
  uVar4 = FUN_006083d0();
  uVar5 = uVar4 & 0xff;
  if ((uVar4 & 0xff) == 0) {
    lVar6 = -1;
  }
  else {
    if (uVar5 >> 7 != 0) {
      uVar5 = FUN_006083d0(param_1);
      uVar5 = uVar5 & 0xff | (uVar4 & 0x7f) << 8;
    }
    if (param_2 < uVar5) {
      lVar6 = 0;
    }
    else {
      lVar7 = FUN_006029c0(uVar9,2,0,uVar5 + 1,0,&local_54);
      lVar6 = 0;
      if (local_54 == 0) {
        *param_3 = uVar5;
        if (uVar5 != 0) {
          sVar10 = 0;
          uVar12 = 0;
          do {
            while( true ) {
              uVar4 = FUN_006083d0(param_1);
              iVar11 = (int)uVar12;
              if ((uVar4 >> 7 & 1) != 0) break;
              uVar2 = FUN_006083d0(param_1);
              sVar10 = sVar10 + (uVar2 & 0xff);
              *(short *)(lVar7 + uVar12 * 2) = sVar10;
              if ((uVar4 & 0xff) == 0) {
                uVar8 = iVar11 + 1;
              }
              else {
                uVar13 = 1;
                do {
                  uVar2 = FUN_006083d0(param_1);
                  sVar10 = sVar10 + (uVar2 & 0xff);
                  uVar8 = uVar13 + 1;
                  *(short *)(lVar7 + (ulong)(iVar11 + uVar13) * 2) = sVar10;
                  if (uVar5 <= iVar11 + uVar13 + 1) break;
                  bVar1 = uVar13 < (uVar4 & 0xff);
                  uVar13 = uVar8;
                } while (bVar1);
LAB_0062b4e4:
                uVar8 = iVar11 + uVar8;
              }
              uVar12 = (ulong)uVar8;
              if (uVar5 <= uVar8) goto LAB_0062b510;
            }
            sVar3 = FUN_00608400(param_1);
            sVar10 = sVar3 + sVar10;
            *(short *)(lVar7 + uVar12 * 2) = sVar10;
            if ((uVar4 & 0x7f) != 0) {
              uVar13 = 1;
              do {
                sVar3 = FUN_00608400(param_1);
                sVar10 = sVar3 + sVar10;
                uVar8 = uVar13 + 1;
                *(short *)(lVar7 + (ulong)(iVar11 + uVar13) * 2) = sVar10;
                if (uVar5 <= iVar11 + uVar13 + 1) break;
                bVar1 = uVar13 < (uVar4 & 0x7f);
                uVar13 = uVar8;
              } while (bVar1);
              goto LAB_0062b4e4;
            }
            uVar12 = (ulong)(iVar11 + 1U);
          } while (iVar11 + 1U < uVar5);
        }
LAB_0062b510:
        lVar6 = lVar7;
      }
    }
  }
  return lVar6;
}


