/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044ffe0; name: FUN_0044ffe0
 */


undefined1  [16] FUN_0044ffe0(undefined8 param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined4 local_44;
  
  lVar9 = *(long *)(param_2 + 0x140);
  uVar12 = 0;
  auVar11 = ZEXT816(0);
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x50);
    if (lVar10 == 0) {
      lVar10 = *(long *)PTR_DAT_02712ae8;
      uVar2 = *(uint *)(lVar9 + 0xc);
      pMVar1 = (MutexType *)(lVar10 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar10 + 0x178);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar10 = *(long *)(*(long *)(lVar10 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
          if (*(uint *)(lVar10 + 0x10) == uVar2) {
            *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar12;
            *(long *)(lVar9 + 0x50) = lVar10;
            uVar8 = (ulong)*(byte *)(lVar10 + 0xa6);
            if (uVar8 == 0xff) {
              return auVar6 << 0x40;
            }
            goto LAB_0045001c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar12;
      auVar11 = auVar5 << 0x40;
      *(undefined8 *)(lVar9 + 0x50) = 0;
    }
    else {
      uVar8 = (ulong)*(byte *)(lVar10 + 0xa6);
      auVar11 = ZEXT816(0);
      if (uVar8 != 0xff) {
LAB_0045001c:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar12;
        auVar11 = auVar11 << 0x40;
        plVar7 = (long *)(lVar10 + uVar8 * 0x10 + 0x30);
        if (*plVar7 != 0) {
          local_44 = 0;
          auVar11 = FUN_0042e770(param_1,plVar7,0,&local_44);
        }
      }
    }
  }
  return auVar11;
}


