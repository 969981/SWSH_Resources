/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00448ea0; name: FUN_00448ea0
 */


void FUN_00448ea0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x48));
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_2 / uVar1;
    }
    uVar1 = param_2 - uVar3 * uVar1;
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x70) + (ulong)uVar1 * 8);
    if (puVar5 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
LAB_00448f10:
      if ((puVar5 != (undefined8 *)0x0) &&
         (iVar2 = *(int *)(puVar5 + 6), *(int *)(puVar5 + 6) = iVar2 + -1, iVar2 + -1 == 0)) {
        if (puVar5[2] != 0) {
          FUN_004047f0(*(undefined4 *)(PTR_DAT_02712b90 + 0x18));
          puVar5[2] = 0;
          *(undefined4 *)(puVar5 + 3) = 0;
          if (*(int *)(puVar5 + 6) != 0) goto LAB_00448fa4;
        }
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)uVar1 * 8);
        }
        *puVar6 = *puVar5;
        if (puVar5[4] != 0) {
          *(undefined4 *)(puVar5 + 5) = 0;
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
          puVar5[4] = 0;
          *(undefined4 *)((long)puVar5 + 0x2c) = 0;
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar5);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      }
    }
    else {
      puVar4 = puVar5;
      puVar6 = (undefined8 *)0x0;
      do {
        puVar5 = puVar4;
        if (*(uint *)(puVar5 + 1) == param_2) goto LAB_00448f10;
        puVar4 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
  }
LAB_00448fa4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x48));
  return;
}


