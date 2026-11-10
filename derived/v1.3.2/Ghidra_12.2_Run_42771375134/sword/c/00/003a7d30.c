/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a7d30; name: FUN_003a7d30
 */


void FUN_003a7d30(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(int *)(param_1 + 0x1f18) != 0) {
    lVar3 = *(long *)(param_1 + 0x1f10);
    lVar5 = 0;
    uVar6 = 0;
    do {
      FUN_00397700(*(undefined8 *)(lVar3 + lVar5),1);
      lVar3 = *(long *)(param_1 + 0x1f10);
      lVar1 = lVar3 + lVar5;
      lVar5 = lVar5 + 0x10;
      *(undefined8 *)(lVar1 + 8) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x1f18));
  }
  uVar2 = *(uint *)(param_1 + 0x1ecc);
  if ((uVar2 == 0) || (*(int *)(param_1 + 0x1edc) == 0)) {
    *(undefined4 *)(param_1 + 0x1f18) = 0;
    FUN_00397700(*(undefined8 *)(param_1 + 0x1ee0),1);
    return;
  }
  uVar6 = 0;
  do {
    uVar4 = *(uint *)((long)*(void **)(param_1 + 0x1ec0) + uVar6 * 4);
    if (uVar4 != 0xffffffff) {
      do {
        uVar4 = *(uint *)(*(long *)(param_1 + 0x1eb8) + (ulong)uVar4 * 4);
      } while (uVar4 != 0xffffffff);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != uVar2);
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x1ec0),-1,(ulong)(uVar2 << 2));
}


