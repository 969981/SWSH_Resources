/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044faf0; name: FUN_0044faf0
 */


undefined1  [16] FUN_0044faf0(undefined1 param_1 [16],long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  ulong uVar9;
  undefined8 uVar10;
  
  uVar10 = param_1._8_8_;
  uVar9 = param_1._0_8_;
  lVar6 = *(long *)(param_2 + 0x140);
  lVar7 = *(long *)(lVar6 + 0x50);
  if (lVar7 == 0) {
    lVar7 = *(long *)PTR_DAT_02712ae8;
    uVar2 = *(uint *)(lVar6 + 0xc);
    pMVar1 = (MutexType *)(lVar7 + 0x150);
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(lVar7 + 0x178);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (lVar7 = *(long *)(*(long *)(lVar7 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
        if (*(uint *)(lVar7 + 0x10) == uVar2) {
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          *(long *)(lVar6 + 0x50) = lVar7;
          uVar5 = (ulong)*(byte *)(lVar7 + 0xa0);
          if (uVar5 == 0xff) goto LAB_0044fbac;
          goto LAB_0044fb20;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined8 *)(lVar6 + 0x50) = 0;
  }
  else {
    uVar5 = (ulong)*(byte *)(lVar7 + 0xa0);
    if (uVar5 != 0xff) {
LAB_0044fb20:
      lVar7 = lVar7 + uVar5 * 0x10;
      lVar6 = *(long *)(lVar7 + 0x30);
      if (lVar6 != 0) {
        uVar9 = (ulong)(uint)(param_1._0_4_ * DAT_01d4c4d4 *
                             *(float *)(lVar6 + (ulong)(*(int *)(lVar7 + 0x38) - 1) * 0xc));
        uVar10 = 0;
      }
    }
  }
LAB_0044fbac:
  auVar8._8_8_ = uVar10;
  auVar8._0_8_ = uVar9;
  return auVar8;
}


