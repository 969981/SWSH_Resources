/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109a960; name: FUN_0109a960
 */


void FUN_0109a960(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
  if (0 < (int)uVar2) {
    uVar5 = 0;
    bVar1 = true;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x78) + uVar5 * 8 + 0x698);
      uVar4 = FUN_0087d610(*(undefined8 *)(lVar6 + 0x128),2);
      if ((uVar4 & 1) == 0) {
        bVar1 = (bool)(bVar1 & *(char *)(lVar6 + 0x15c) == '\0');
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
    if ((!bVar1) &&
       (iVar3 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40)), iVar3 != 0)) {
      uVar5 = 0;
      do {
        lVar6 = *(long *)(*(long *)(param_1 + 0x78) + uVar5 * 8 + 0x698);
        uVar4 = FUN_0087d610(*(undefined8 *)(lVar6 + 0x128),2);
        if ((uVar4 & 1) == 0) {
          FUN_0109fa40(lVar6);
        }
        uVar5 = uVar5 + 1;
        uVar4 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x40));
      } while (uVar5 < (uVar4 & 0xffffffff));
    }
  }
  return;
}


