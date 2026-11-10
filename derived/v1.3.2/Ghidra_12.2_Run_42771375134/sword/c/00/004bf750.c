/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bf750; name: FUN_004bf750
 */


undefined4
FUN_004bf750(float param_1,undefined8 *param_2,ushort param_3,long param_4,byte param_5,
            ulong param_6,undefined8 *param_7,undefined4 param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_74 [4];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar5 = (ulong)*(uint *)(param_2 + 1);
    fVar14 = DAT_01d4bee4;
    if (*(uint *)(param_2 + 1) == 0) {
      lVar8 = 0;
      bVar1 = 0;
      iVar12 = 2;
      if (param_3 == 0) goto LAB_004bf8f4;
    }
    else {
      plVar7 = (long *)*param_2;
      if (param_4 == 0) {
        if ((param_6 & 1) == 0) {
          uVar11 = 0;
          lVar8 = 0;
          lVar6 = uVar5 << 3;
          do {
            lVar9 = *plVar7;
            if ((*(uint *)(lVar9 + 0x26b) & 0x16010000) == 0) {
              uVar11 = uVar11 + 1;
              if (*(float *)(lVar9 + 0x270) <= param_1) {
                lVar8 = lVar9;
                fVar14 = *(float *)(lVar9 + 0x270);
              }
            }
            plVar7 = plVar7 + 1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
          bVar1 = 0;
          iVar12 = 2;
        }
        else {
          uVar11 = 0;
          bVar1 = 0;
          lVar8 = 0;
          lVar6 = uVar5 << 3;
          iVar12 = 2;
          do {
            lVar9 = *plVar7;
            if ((*(uint *)(lVar9 + 0x26b) & 0x16010000) == 0) {
              fVar15 = *(float *)(lVar9 + 0x270);
              uVar11 = uVar11 + 1;
              if (fVar15 <= param_1) {
                param_6 = param_6 & 0xffffffff;
                iVar3 = FUN_0048d230(lVar9,auStack_74);
                bVar2 = iVar3 == 0;
                if (!bVar2) {
                  iVar12 = iVar3;
                  fVar14 = fVar15;
                }
                bVar1 = bVar1 | (uVar11 <= param_3 && bVar2);
                if (!bVar2) {
                  lVar8 = lVar9;
                }
              }
            }
            plVar7 = plVar7 + 1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
      else {
        uVar11 = 0;
        bVar1 = 0;
        lVar8 = 0;
        lVar6 = uVar5 << 3;
        iVar12 = 2;
        do {
          while( true ) {
            lVar10 = *plVar7;
            lVar9 = lVar8;
            fVar15 = fVar14;
            iVar3 = iVar12;
            if ((*(long *)(lVar10 + 0x28) == param_4) &&
               ((*(uint *)(lVar10 + 0x26b) & 0x16010000) == 0)) break;
joined_r0x004bf7e0:
            iVar12 = iVar3;
            fVar14 = fVar15;
            lVar8 = lVar9;
            lVar6 = lVar6 + -8;
            plVar7 = plVar7 + 1;
            if (lVar6 == 0) goto joined_r0x004bfa74;
          }
          fVar13 = *(float *)(lVar10 + 0x270);
          uVar11 = uVar11 + 1;
          if (param_1 < fVar13) goto joined_r0x004bf7e0;
          lVar9 = lVar10;
          fVar15 = fVar13;
          if ((param_6 & 1) == 0) {
            iVar3 = 2;
            goto joined_r0x004bf7e0;
          }
          param_6 = param_6 & 0xffffffff;
          iVar3 = FUN_0048d230(lVar10,auStack_74);
          bVar1 = bVar1 | (uVar11 <= param_3 && iVar3 == 0);
          if (iVar3 != 0) goto joined_r0x004bf7e0;
          plVar7 = plVar7 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
joined_r0x004bfa74:
      if (param_3 <= uVar11) {
LAB_004bf8f4:
        lVar6 = 0;
        if ((fVar14 <= param_1) && ((fVar14 == param_1 & param_5) == 0)) {
          if (lVar8 == 0) {
            lVar6 = 0;
          }
          else {
            *param_7 = *(undefined8 *)(lVar8 + 0x160);
            if (((param_6 & 1) == 0) || (iVar12 == 1)) {
              param_6 = param_6 & 0xffffffff;
              FUN_0048e060(lVar8,param_8);
            }
            lVar6 = lVar8;
          }
        }
        uVar4 = 0x50;
        if ((param_6 & 1) == 0) {
          uVar4 = 2;
        }
        if ((bool)(bVar1 | lVar6 != 0)) {
          uVar4 = 1;
        }
        return uVar4;
      }
    }
  }
  return 1;
}


