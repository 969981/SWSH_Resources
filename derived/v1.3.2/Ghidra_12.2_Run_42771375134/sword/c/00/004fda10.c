/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fda10; name: FUN_004fda10
 */


uint FUN_004fda10(long param_1,uint param_2)

{
  ulong uVar1;
  MutexType *pMVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0xa0) == 0)) {
    uVar16 = 0;
  }
  else {
    pMVar2 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e0);
    nn::os::LockMutex(pMVar2);
    puVar6 = PTR_DAT_027137c8;
    puVar15 = *(undefined8 **)(param_1 + 0xa8);
    if (puVar15 == (undefined8 *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        plVar10 = (long *)puVar15[1];
        puVar14 = *(undefined8 **)(param_1 + 0xb0);
        uVar4 = *(uint *)(plVar10 + 3);
        uVar5 = *(uint *)(puVar15 + 2);
        if (puVar14 == (undefined8 *)0x0 || puVar15 == puVar14) {
          puVar12 = (undefined8 *)0x0;
          puVar13 = puVar14;
          if (puVar14 == (undefined8 *)0x0) goto LAB_004fda88;
LAB_004fdab0:
          if (puVar13 == puVar14) {
            *(undefined8 *)(param_1 + 0xb0) = *puVar13;
            puVar14 = puVar15;
          }
          else {
            *puVar12 = *puVar13;
            puVar14 = *(undefined8 **)(param_1 + 0xa8);
          }
          if (puVar14 == puVar13) {
            *(undefined8 **)(param_1 + 0xa8) = puVar12;
          }
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
          plVar10 = (long *)puVar15[1];
          uVar11 = *(uint *)(puVar15 + 2);
          uVar9 = *(uint *)(plVar10 + 3);
        }
        else {
          puVar13 = puVar14;
          do {
            puVar12 = puVar13;
            puVar13 = (undefined8 *)*puVar12;
          } while (puVar13 != (undefined8 *)0x0 && puVar15 != puVar13);
          if (puVar13 != (undefined8 *)0x0) goto LAB_004fdab0;
LAB_004fda88:
          uVar9 = uVar4;
          uVar11 = uVar5;
        }
        uVar16 = (uVar4 + uVar16) - uVar5;
        uVar4 = *(uint *)(param_1 + 0x8c);
        uVar1 = *plVar10 + (ulong)uVar11;
        iVar3 = uVar9 - uVar11;
        if (uVar1 < uVar4 && (ulong)uVar4 < *plVar10 + (ulong)uVar9) {
          iVar3 = uVar4 - (int)uVar1;
        }
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - iVar3;
        lVar8 = *(long *)(param_1 + 0x50);
        lVar7 = puVar15[1];
        puVar15[1] = 0;
        if (lVar7 != 0) {
          FUN_004fe6b0(lVar8 + 0x2a0);
        }
        FUN_00404870(*(undefined4 *)puVar6,puVar15);
      } while ((uVar16 < param_2) &&
              (puVar15 = *(undefined8 **)(param_1 + 0xa8), puVar15 != (undefined8 *)0x0));
    }
    nn::os::UnlockMutex(pMVar2);
  }
  return uVar16;
}


