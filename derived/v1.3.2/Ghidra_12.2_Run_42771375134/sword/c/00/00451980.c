/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00451980; name: FUN_00451980
 */


void FUN_00451980(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_02713018 + 0x2a8;
  puVar2 = PTR_DAT_02713018 + 0x340;
  *param_1 = (long)(PTR_DAT_02713018 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  FUN_00451bd0();
  for (plVar10 = (long *)param_1[0x20]; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    FUN_0045c760(plVar10 + 2);
  }
  FUN_00451d30(param_1 + 0x20);
  for (plVar10 = (long *)param_1[0x25]; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    FUN_0045c760(plVar10 + 2);
  }
  FUN_00451d30(param_1 + 0x25);
  FUN_00451e40(param_1 + 0x1b);
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  puVar1 = PTR_DAT_02712fe8;
  uVar4 = *(uint *)(PTR_DAT_02712fe8 + 8);
  uVar5 = (ulong)uVar4;
  if (uVar4 != 0) {
    puVar7 = *(undefined8 **)PTR_DAT_02712fe8;
    lVar9 = uVar5 * 8;
    puVar3 = puVar7;
    do {
      if ((long *)*puVar3 == param_1) {
        if (puVar3 < puVar7 + (uVar5 - 1)) {
          uVar8 = (long)puVar7 + ~(ulong)puVar3 + uVar5 * 8 + -8;
          uVar4 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
          if ((uVar4 & 3) != 0) {
            lVar9 = -((ulong)uVar4 & 3);
            puVar6 = puVar3;
            do {
              puVar3 = puVar6 + 1;
              *puVar6 = *puVar3;
              lVar9 = lVar9 + 1;
              puVar6 = puVar3;
            } while (lVar9 != 0);
          }
          if (0x17 < uVar8) {
            do {
              *puVar3 = puVar3[1];
              puVar3[1] = puVar3[2];
              puVar3[2] = puVar3[3];
              puVar6 = puVar3 + 4;
              puVar3[3] = *puVar6;
              puVar3 = puVar6;
            } while (puVar6 < puVar7 + (uVar5 - 1));
          }
          uVar4 = *(uint *)(puVar1 + 8);
        }
        *(uint *)(puVar1 + 8) = uVar4 - 1;
        if (uVar4 - 1 == 0) {
          if (*(long *)puVar1 != 0) {
            *(undefined4 *)(puVar1 + 8) = 0;
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
            *(undefined8 *)puVar1 = 0;
            *(undefined4 *)(puVar1 + 0xc) = 0;
          }
          *PTR_DAT_02713020 = 0;
          FUN_00449a00();
        }
        break;
      }
      puVar3 = puVar3 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  if (param_1[0x17] != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x17] = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
  }
  if (param_1[0x16] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  FUN_004a46c0(param_1 + 0x2a);
  puVar1 = PTR_DAT_02713028 + 0x268;
  puVar2 = PTR_DAT_02713028 + 0x300;
  *param_1 = (long)(PTR_DAT_02713028 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x14] = 0;
    *(undefined4 *)((long)param_1 + 0xac) = 0;
  }
  FUN_00481df0(param_1);
  return;
}


