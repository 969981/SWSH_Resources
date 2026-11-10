/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004843f0; name: FUN_004843f0
 */


void FUN_004843f0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint local_34;
  
  while ((((*(byte *)(param_1 + 0x9d) >> 5 & 1) == 0 && (*(long *)(param_1 + 0x78) != 0)) &&
         (*(long *)(param_1 + 0x80) == 0))) {
    param_1 = *(long *)(param_1 + 0x78);
  }
  local_34 = *(uint *)(PTR_DAT_02712b40 + 0xe4);
  puVar5 = *(uint **)(param_1 + 0x90);
  puVar6 = puVar5;
  if (puVar5 != (uint *)0x0) {
    uVar7 = 0;
    puVar6 = (uint *)((long)puVar5 + ((ulong)((byte)*puVar5 + 4) & 0x1fc));
    do {
      if (*(char *)((long)puVar5 + uVar7 + 1) == '9') goto LAB_00484470;
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 < (byte)*puVar5);
    puVar6 = (uint *)0x0;
  }
LAB_00484470:
  puVar5 = &local_34;
  if (puVar6 != (uint *)0x0) {
    puVar5 = puVar6;
  }
  uVar1 = *puVar5;
  if (uVar1 == 0xffffffff) {
    plVar4 = (long *)*param_2;
    *param_2 = 0;
  }
  else {
    lVar8 = *(long *)PTR_DAT_02712ae8;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x268));
    uVar2 = *(uint *)(lVar8 + 0x290);
    if (uVar2 == 0) {
      lVar9 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar9 = *(long *)(*(long *)(lVar8 + 0x288) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
        if (*(uint *)(lVar9 + 0x10) == uVar1) {
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x268));
    plVar4 = (long *)*param_2;
    *param_2 = lVar9;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}


