/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941060; name: FUN_00941060
 */


void FUN_00941060(undefined8 *param_1,undefined1 *param_2,uint param_3,undefined4 param_4,
                 uint param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined8 local_70;
  undefined1 local_68;
  byte local_58 [8];
  
  if ((param_3 < 6) && (param_3 != 0)) {
    uVar10 = (ulong)param_3;
    if ((param_5 & 1) == 0) {
      uVar5 = uVar10;
      puVar9 = param_2;
      puVar11 = &DAT_02a4d8f6;
      do {
        local_70 = 0;
        local_68 = 0;
        uVar3 = FUN_00931920(param_1[1]);
        local_70 = FUN_008df3f0(uVar3,*puVar9);
        local_68 = 1;
        uVar3 = FUN_00925510(param_1[4]);
        FUN_0096b460(uVar3,local_58,&local_70);
        uVar5 = uVar5 - 1;
        *puVar11 = (ushort)local_58[0];
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar5 != 0);
    }
    else {
      puVar11 = &DAT_02a4d8f6;
      uVar5 = uVar10;
      puVar9 = param_2;
      do {
        local_70 = 0;
        local_68 = 0;
        uVar3 = FUN_00931920(param_1[1]);
        local_70 = FUN_008df3f0(uVar3,*puVar9);
        local_68 = 1;
        uVar3 = FUN_00925510(param_1[4]);
        FUN_0096b460(uVar3,local_58,&local_70);
        *puVar11 = (ushort)local_58[0];
        uVar4 = FUN_008f9ff0(*param_1,param_4,*puVar9);
        if ((uVar4 & 1) != 0) {
          *puVar11 = *puVar11 + 5;
        }
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_3 != 0) {
      lVar6 = 1;
      uVar5 = 0;
      do {
        uVar4 = uVar5 + 1;
        if (uVar4 < uVar10) {
          lVar8 = lVar6;
          if (((param_3 + 1) - (int)uVar5 & 1) != 0) {
            uVar2 = (&DAT_02a4d8f6)[uVar5];
            if ((ushort)(&DAT_02a4d8f6)[lVar6] < uVar2) {
              (&DAT_02a4d8f6)[uVar5] = (&DAT_02a4d8f6)[lVar6];
              (&DAT_02a4d8f6)[lVar6] = uVar2;
              uVar1 = param_2[uVar5];
              param_2[uVar5] = param_2[lVar6];
              param_2[lVar6] = uVar1;
            }
            lVar8 = lVar6 + 1;
          }
          if (param_3 - 2 != (int)uVar5) {
            iVar7 = param_3 - (int)lVar8;
            puVar9 = param_2 + lVar8 + 1;
            puVar11 = &DAT_02a4d8f8 + lVar8;
            do {
              uVar2 = (&DAT_02a4d8f6)[uVar5];
              if (puVar11[-1] < uVar2) {
                (&DAT_02a4d8f6)[uVar5] = puVar11[-1];
                puVar11[-1] = uVar2;
                uVar1 = param_2[uVar5];
                param_2[uVar5] = puVar9[-1];
                puVar9[-1] = uVar1;
              }
              uVar2 = (&DAT_02a4d8f6)[uVar5];
              if (*puVar11 < uVar2) {
                (&DAT_02a4d8f6)[uVar5] = *puVar11;
                *puVar11 = uVar2;
                uVar1 = param_2[uVar5];
                param_2[uVar5] = *puVar9;
                *puVar9 = uVar1;
              }
              iVar7 = iVar7 + -2;
              puVar11 = puVar11 + 2;
              puVar9 = puVar9 + 2;
            } while (iVar7 != 0);
          }
        }
        lVar6 = lVar6 + 1;
        uVar5 = uVar4;
      } while (uVar4 != uVar10);
    }
  }
  return;
}


