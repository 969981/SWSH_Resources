/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155ab10; name: FUN_0155ab10
 */


undefined8 FUN_0155ab10(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  MutexType *pMVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 local_44;
  
  pMVar4 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar4);
  nn::os::LockMutex(pMVar4);
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == *(long *)(param_1 + 0x10)) {
    lVar15 = 0;
  }
  else {
    uVar13 = (*(long *)(param_1 + 0x10) + -0x20) - lVar9;
    uVar12 = uVar13 >> 5;
    uVar3 = (int)uVar12 + 1;
    uVar10 = (ulong)uVar3 & 3;
    if (uVar13 < 0x60) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      lVar11 = (uVar10 - 1) - uVar12;
      do {
        plVar7 = (long *)(lVar9 + 0x18);
        plVar8 = (long *)(lVar9 + 0x38);
        plVar1 = (long *)(lVar9 + 0x58);
        plVar2 = (long *)(lVar9 + 0x78);
        lVar9 = lVar9 + 0x80;
        lVar15 = lVar15 + *plVar7 + *plVar8 + *plVar1 + *plVar2 + 0x10;
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0);
    }
    if ((uVar3 & 3) != 0) {
      lVar11 = -uVar10;
      plVar7 = (long *)(lVar9 + 0x18);
      do {
        lVar15 = lVar15 + *plVar7 + 4;
        lVar11 = lVar11 + 1;
        plVar7 = plVar7 + 4;
      } while (lVar11 != 0);
    }
  }
  nn::os::UnlockMutex(pMVar4);
  plVar7 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  plVar8 = (long *)(**(code **)(*plVar7 + 0x28))();
  uVar10 = (**(code **)(*plVar8 + 0x18))(plVar8,lVar15,plVar7[1]);
  if ((uVar10 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    for (puVar5 = *(undefined4 **)(param_1 + 8); puVar5 != puVar6; puVar5 = puVar5 + 8) {
      local_44 = *puVar5;
      plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      plVar8 = (long *)(**(code **)(*plVar7 + 0x28))();
      uVar10 = (**(code **)(*plVar8 + 0x18))(plVar8,4,plVar7[1]);
      if ((uVar10 & 1) != 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_44,4,0);
      }
      lVar9 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 4;
      lVar15 = *(long *)(puVar5 + 2);
      lVar9 = *(long *)(puVar5 + 6);
      plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      if (lVar15 != 0) {
        plVar8 = (long *)(**(code **)(*plVar7 + 0x28))();
        uVar10 = (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,plVar7[1]);
        if ((uVar10 & 1) != 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar15,lVar9,0);
        }
      }
      lVar15 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + lVar9;
    }
    uVar14 = 1;
  }
  nn::os::UnlockMutex(pMVar4);
  return uVar14;
}


