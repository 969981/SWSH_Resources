/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b6bd0; name: FUN_004b6bd0
 */


void FUN_004b6bd0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02713450);
  puVar5 = PTR_DAT_02713458;
  puVar4 = PTR_DAT_02712d98;
  puVar3 = PTR_DAT_02712a90;
  puVar7 = *(undefined8 **)PTR_DAT_02713458;
  uVar8 = *(uint *)(PTR_DAT_02713458 + 8);
  if (uVar8 != 0) {
    puVar14 = puVar7;
    do {
      while (puVar14[1] != param_1) {
        puVar14 = puVar14 + 3;
        if (puVar7 + (ulong)uVar8 * 3 == puVar14) goto LAB_004b6d64;
      }
      lVar11 = puVar14[2];
      if (*(int *)(lVar11 + 0x18) != 0) {
        puVar13 = *(undefined4 **)(lVar11 + 0x10);
        do {
          plVar6 = *(long **)puVar4;
          puVar12 = puVar13 + 1;
          (**(code **)(*plVar6 + 0x48))(plVar6,*puVar13,*(undefined1 *)(lVar11 + 0x30));
          puVar13 = puVar12;
        } while (puVar12 !=
                 (undefined4 *)(*(long *)(lVar11 + 0x10) + (ulong)*(uint *)(lVar11 + 0x18) * 4));
      }
      if (*(int *)(lVar11 + 0x28) != 0) {
        puVar13 = *(undefined4 **)(lVar11 + 0x20);
        do {
          plVar6 = *(long **)puVar4;
          puVar12 = puVar13 + 1;
          (**(code **)(*plVar6 + 0x48))(plVar6,*puVar13,*(undefined1 *)(lVar11 + 0x31));
          puVar13 = puVar12;
        } while (puVar12 !=
                 (undefined4 *)(*(long *)(lVar11 + 0x20) + (ulong)*(uint *)(lVar11 + 0x28) * 4));
      }
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(undefined4 *)(lVar11 + 0x28) = 0;
      FUN_004b68d0(puVar14[2]);
      puVar7 = (undefined8 *)*puVar14;
      if ((puVar7 != (undefined8 *)0x0) &&
         (iVar1 = *(int *)(puVar7 + 10), *(int *)(puVar7 + 10) = iVar1 + -1, iVar1 + -1 == 0)) {
        uVar2 = *(undefined4 *)puVar3;
        (**(code **)*puVar7)(puVar7);
        FUN_00404870(uVar2,puVar7);
      }
      FUN_004b6b20(puVar14);
      puVar7 = *(undefined8 **)puVar5;
      uVar8 = *(uint *)(puVar5 + 8);
      if (puVar14 < puVar7 + (ulong)uVar8 * 3 + -3) {
        puVar10 = puVar14;
        do {
          puVar9 = puVar10 + 3;
          *puVar10 = *puVar9;
          puVar10[1] = puVar10[4];
          puVar10[2] = puVar10[5];
          puVar10 = puVar9;
        } while (puVar9 < puVar7 + (ulong)uVar8 * 3 + -3);
      }
      uVar8 = uVar8 - 1;
      *(uint *)(puVar5 + 8) = uVar8;
    } while (puVar7 + (ulong)uVar8 * 3 != puVar14);
  }
LAB_004b6d64:
  if (puVar7 != (undefined8 *)0x0 && uVar8 == 0) {
    *(undefined4 *)(puVar5 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar5 = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02713450);
  return;
}


