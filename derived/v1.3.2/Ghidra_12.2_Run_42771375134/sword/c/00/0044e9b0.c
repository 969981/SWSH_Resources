/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044e9b0; name: FUN_0044e9b0
 */


void FUN_0044e9b0(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x140);
  if (lVar9 != 0) {
    lVar8 = *(long *)(lVar9 + 0x50);
    if (lVar8 == 0) {
      lVar8 = *(long *)PTR_DAT_02712ae8;
      uVar2 = *(uint *)(lVar9 + 0xc);
      pMVar1 = (MutexType *)(lVar8 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar8 + 0x178);
      if (uVar3 != 0) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar2 / uVar3;
        }
        for (lVar8 = *(long *)(*(long *)(lVar8 + 0x170) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
            lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
          if (*(uint *)(lVar8 + 0x10) == uVar2) {
            *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long *)(lVar9 + 0x50) = lVar8;
            if (*(int *)(lVar8 + 0xb0) == 0) goto LAB_0044ea74;
            goto LAB_0044e9e0;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      *(undefined8 *)(lVar9 + 0x50) = 0;
    }
    else if (*(int *)(lVar8 + 0xb0) != 0) {
LAB_0044e9e0:
      puVar6 = PTR_DAT_02712b50;
      lVar9 = *(long *)(lVar8 + 0xa8);
      do {
        FUN_0049b7f0(*(undefined8 *)puVar6,param_1,*(undefined4 *)(lVar9 + 0xc));
        lVar9 = lVar9 + 0x28;
      } while (lVar9 != *(long *)(lVar8 + 0xa8) + (ulong)*(uint *)(lVar8 + 0xb0) * 0x28);
    }
LAB_0044ea74:
    puVar7 = *(undefined8 **)(param_1 + 0x140);
    if (puVar7 != (undefined8 *)0x0) {
      uVar4 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar7)(puVar7);
      FUN_00404870(uVar4,puVar7);
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(ushort *)(param_1 + 0x154) = *(ushort *)(param_1 + 0x154) | 0x400;
  return;
}


