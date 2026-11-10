/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b6630; name: FUN_004b6630
 */


void FUN_004b6630(ulong param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02713450);
  puVar4 = PTR_DAT_02713458;
  puVar3 = PTR_DAT_02712d98;
  iVar6 = *(int *)(PTR_DAT_02713458 + 8) + -1;
  if (-1 < iVar6) {
    lVar5 = *(long *)PTR_DAT_02713458;
    iVar8 = 0;
    while( true ) {
      while( true ) {
        iVar9 = iVar6 - iVar8;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 1;
        }
        iVar9 = iVar8 + (iVar9 >> 1);
        lVar10 = (long)iVar9;
        uVar11 = *(ulong *)(lVar5 + (long)iVar9 * 0x18);
        if ((uVar11 <= param_2) &&
           ((uVar11 != param_2 || (*(ulong *)(lVar5 + lVar10 * 0x18 + 8) <= param_1)))) break;
        iVar6 = iVar9 + -1;
        if (iVar6 < iVar8) goto LAB_004b68ac;
      }
      if ((param_2 <= uVar11) &&
         ((uVar11 != param_2 || (param_1 <= *(ulong *)(lVar5 + lVar10 * 0x18 + 8))))) break;
      iVar8 = iVar9 + 1;
      if (iVar6 < iVar8) goto LAB_004b68ac;
    }
    puVar12 = (undefined8 *)(lVar5 + lVar10 * 0x18);
    if (puVar12 == (undefined8 *)0x0) goto LAB_004b68ac;
    plVar13 = (long *)(lVar5 + lVar10 * 0x18 + 0x10);
    lVar5 = *plVar13;
    if (*(int *)(lVar5 + 0x18) != 0) {
      puVar16 = *(undefined4 **)(lVar5 + 0x10);
      do {
        puVar15 = puVar16 + 1;
        (**(code **)(**(long **)puVar3 + 0x48))
                  (*(long **)puVar3,*puVar16,*(undefined1 *)(lVar5 + 0x30));
        puVar16 = puVar15;
      } while (puVar15 !=
               (undefined4 *)(*(long *)(lVar5 + 0x10) + (ulong)*(uint *)(lVar5 + 0x18) * 4));
    }
    puVar3 = PTR_DAT_02712d98;
    if (*(int *)(lVar5 + 0x28) != 0) {
      puVar16 = *(undefined4 **)(lVar5 + 0x20);
      do {
        puVar15 = puVar16 + 1;
        (**(code **)(**(long **)puVar3 + 0x48))
                  (*(long **)puVar3,*puVar16,*(undefined1 *)(lVar5 + 0x31));
        puVar16 = puVar15;
      } while (puVar15 !=
               (undefined4 *)(*(long *)(lVar5 + 0x20) + (ulong)*(uint *)(lVar5 + 0x28) * 4));
    }
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x28) = 0;
    FUN_004b68d0(*plVar13);
    puVar14 = (undefined8 *)*puVar12;
    if ((puVar14 != (undefined8 *)0x0) &&
       (iVar6 = *(int *)(puVar14 + 10), *(int *)(puVar14 + 10) = iVar6 + -1, iVar6 + -1 == 0)) {
      uVar1 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar14)(puVar14);
      FUN_00404870(uVar1,puVar14);
    }
    FUN_004b6b20(puVar12);
    iVar6 = *(uint *)(puVar4 + 8) - 1;
    if (iVar6 < 0) goto LAB_004b68ac;
    lVar5 = *(long *)puVar4;
    iVar8 = 0;
    iVar9 = iVar6;
    do {
      while( true ) {
        iVar2 = iVar9 - iVar8;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar8 + (iVar2 >> 1);
        lVar10 = (long)iVar2;
        uVar11 = *(ulong *)(lVar5 + (long)iVar2 * 0x18);
        if ((uVar11 <= param_2) &&
           ((uVar11 != param_2 || (*(ulong *)(lVar5 + lVar10 * 0x18 + 8) <= param_1)))) break;
        iVar9 = iVar2 + -1;
        if (iVar9 < iVar8) goto LAB_004b68ac;
      }
      if ((param_2 <= uVar11) &&
         ((uVar11 != param_2 || (param_1 <= *(ulong *)(lVar5 + lVar10 * 0x18 + 8))))) {
        puVar12 = (undefined8 *)(lVar5 + lVar10 * 0x18);
        puVar14 = (undefined8 *)((lVar5 + (ulong)*(uint *)(puVar4 + 8) * 0x18) - 0x18);
        if (puVar12 < puVar14) {
          do {
            puVar7 = puVar12 + 3;
            *puVar12 = *puVar7;
            puVar12[1] = puVar12[4];
            puVar12[2] = puVar12[5];
            puVar12 = puVar7;
          } while (puVar7 < puVar14);
        }
        *(int *)(puVar4 + 8) = iVar6;
        break;
      }
      iVar8 = iVar2 + 1;
    } while (iVar8 <= iVar9);
  }
LAB_004b68ac:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02713450);
  return;
}


