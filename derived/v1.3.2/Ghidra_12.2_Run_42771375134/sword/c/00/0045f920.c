/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f920; name: FUN_0045f920
 */


undefined8 FUN_0045f920(long param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar10;
  uint *puVar9;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  puVar7 = PTR_DAT_02712ae8;
  bVar4 = *(byte *)(param_2 + 4);
  puVar9 = (uint *)(param_2 + 5);
  uVar8 = bVar4 & 0x7f;
  puVar10 = puVar9;
  if ((char)bVar4 < '\0') {
    do {
      puVar9 = (uint *)((long)puVar10 + 1);
      uVar11 = *puVar10;
      uVar8 = (byte)uVar11 & 0x7f | uVar8 << 7;
      puVar10 = puVar9;
    } while ((char)(byte)uVar11 < '\0');
    if (uVar8 == 0) {
      return 1;
    }
  }
  else if ((bVar4 & 0x7f) == 0) {
    return 1;
  }
  uVar11 = 0;
  lVar12 = 0;
  while( true ) {
    uVar3 = *puVar9;
    if (uVar3 == 0) {
      return 0xe;
    }
    lVar13 = *(long *)puVar7;
    pMVar1 = (MutexType *)(lVar13 + 0xe0);
    nn::os::LockMutex(pMVar1);
    uVar2 = *(uint *)(lVar13 + 0x108);
    if (uVar2 == 0) break;
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar3 / uVar2;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0x100) + (ulong)(uVar3 - uVar5 * uVar2) * 8);
    while( true ) {
      if (lVar13 == 0) goto LAB_0045fa14;
      if (*(uint *)(lVar13 + 0x10) == uVar3) break;
      lVar13 = *(long *)(lVar13 + 8);
    }
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    nn::os::UnlockMutex(pMVar1);
    uVar11 = uVar11 + 1;
    lVar6 = param_1;
    if (lVar12 != 0) {
      lVar6 = lVar12;
    }
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(long *)(lVar6 + 0x18) = lVar13;
    puVar9 = puVar9 + 1;
    lVar12 = lVar13;
    if (uVar8 <= uVar11) {
      return 1;
    }
  }
LAB_0045fa14:
  nn::os::UnlockMutex(pMVar1);
  return 2;
}


