/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e6bc0; name: FUN_004e6bc0
 */


void FUN_004e6bc0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_02713650;
  if (*param_1 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(*(long *)PTR_DAT_02713650 + 0x28));
  lVar9 = *(long *)puVar4;
  uVar5 = *(uint *)(lVar9 + 0x18);
  if (uVar5 == 0) {
    puVar7 = (undefined8 *)0x0;
    uVar5 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = uVar1 / uVar5;
    }
    uVar5 = uVar1 - uVar3 * uVar5;
    puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x10) + (ulong)uVar5 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
      do {
        puVar8 = puVar7;
        puVar7 = puVar8;
        if (*(uint *)(puVar8 + 1) == uVar1) break;
        puVar7 = (undefined8 *)*puVar8;
        puVar6 = puVar8;
      } while (puVar7 != (undefined8 *)0x0);
      iVar2 = *(int *)(puVar7 + 4) + -1;
      *(int *)(puVar7 + 4) = iVar2;
      goto joined_r0x004e6cc0;
    }
  }
  puVar6 = (undefined8 *)0x0;
  iVar2 = *(int *)(puVar7 + 4) + -1;
  *(int *)(puVar7 + 4) = iVar2;
joined_r0x004e6cc0:
  if (iVar2 == 0) {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)(*(long *)(lVar9 + 0x10) + (ulong)uVar5 * 8);
    }
    *puVar6 = *puVar7;
    if ((puVar7[2] != 0) && (*(char *)(puVar7 + 3) != '\0')) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    puVar7[2] = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640,puVar7);
    *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + -1;
    lVar9 = *(long *)puVar4;
  }
  nn::os::UnlockMutex((MutexType *)(lVar9 + 0x28));
  *param_1 = 0;
  return;
}


