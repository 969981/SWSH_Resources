/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442430; name: FUN_00442430
 */


void FUN_00442430(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  if (*(long *)(param_2 + 0x30) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x48));
  puVar5 = PTR_DAT_02712b90;
  puVar4 = PTR_DAT_02712a90;
  iVar1 = *(int *)(param_2 + 0x48);
  do {
    while( true ) {
      if (iVar1 == 0) {
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x48));
        return;
      }
      *(uint *)(param_2 + 0x48) = iVar1 - 1U;
      uVar7 = *(uint *)(*(long *)(param_2 + 0x30) + (ulong)(iVar1 - 1U) * 0xc);
      if ((uVar7 != 0) && (uVar2 = *(uint *)(param_1 + 0x78), uVar2 != 0)) break;
LAB_004425f4:
      iVar1 = *(int *)(param_2 + 0x48);
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar7 / uVar2;
    }
    uVar12 = (ulong)(uVar7 - uVar3 * uVar2);
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x70) + uVar12 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      puVar6 = puVar11;
      puVar13 = (undefined8 *)0x0;
      do {
        puVar11 = puVar6;
        if (*(uint *)(puVar11 + 1) == uVar7) goto LAB_00442550;
        puVar6 = (undefined8 *)*puVar11;
        puVar13 = puVar11;
      } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
      goto LAB_004425f4;
    }
    puVar13 = (undefined8 *)0x0;
LAB_00442550:
    if (puVar11 == (undefined8 *)0x0) goto LAB_004425f4;
    plVar8 = (long *)puVar11[4];
    uVar7 = *(uint *)(puVar11 + 5);
    plVar9 = plVar8 + (ulong)uVar7 * 3;
    if (uVar7 != 0) {
      lVar10 = (ulong)uVar7 * 0x18;
      do {
        if (*plVar8 == param_2) goto LAB_00442590;
        lVar10 = lVar10 + -0x18;
        plVar8 = plVar8 + 3;
      } while (lVar10 != 0);
      plVar8 = plVar9;
    }
LAB_00442590:
    if (plVar9 != plVar8) {
      if (1 < uVar7) {
        plVar8[2] = plVar9[-1];
        plVar8[1] = plVar9[-2];
        *plVar8 = plVar9[-3];
        uVar7 = *(uint *)(puVar11 + 5);
      }
      *(uint *)(puVar11 + 5) = uVar7 - 1;
    }
    iVar1 = *(int *)(puVar11 + 6);
    *(int *)(puVar11 + 6) = iVar1 + -1;
    if (iVar1 + -1 != 0) goto LAB_004425f4;
    if (puVar11[2] != 0) {
      FUN_004047f0(*(undefined4 *)(puVar5 + 0x18));
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      if (*(int *)(puVar11 + 6) != 0) goto LAB_004425f4;
    }
    if (puVar13 == (undefined8 *)0x0) {
      *(undefined8 *)(*(long *)(param_1 + 0x70) + uVar12 * 8) = *puVar11;
      lVar10 = puVar11[4];
    }
    else {
      *puVar13 = *puVar11;
      lVar10 = puVar11[4];
    }
    if (lVar10 != 0) {
      *(undefined4 *)(puVar11 + 5) = 0;
      FUN_00404870(*(undefined4 *)puVar4);
      puVar11[4] = 0;
      *(undefined4 *)((long)puVar11 + 0x2c) = 0;
    }
    FUN_00404870(*(undefined4 *)puVar4,puVar11);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
    iVar1 = *(int *)(param_2 + 0x48);
  } while( true );
}


