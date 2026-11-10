/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fcac0; name: FUN_003fcac0
 */


void FUN_003fcac0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (-1 < (int)uVar2) {
    return;
  }
  uVar1 = uVar2 & 0x1fffffff;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x728);
  *(undefined4 *)(*(long *)(*(long *)(lVar4 + 0xa8) + 8) + (ulong)uVar1 * 4) =
       *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x3c);
  *(undefined1 *)(lVar4 + 0x1dd) = 1;
  uVar3 = uVar1 + 0x20 >> 5;
  if (uVar3 <= (*(uint *)(lVar4 + 0x78) & 0x7fffffff)) {
    lVar5 = (ulong)(uVar1 >> 5) * 4;
    *(uint *)(*(long *)(lVar4 + 0x70) + lVar5) =
         *(uint *)(*(long *)(lVar4 + 0x70) + lVar5) | 1 << (ulong)(uVar2 & 0x1f);
    return;
  }
  __dest = (void *)(**(code **)(**(long **)(lVar4 + 0x80) + 0x10))
                             (*(long **)(lVar4 + 0x80),uVar3 << 2,"./../../Common/src\\CmBitMap.h",
                              0x1b7);
  if (((*(void **)(lVar4 + 0x70) != (void *)0x0) &&
      (memcpy(__dest,*(void **)(lVar4 + 0x70),(ulong)(uint)(*(int *)(lVar4 + 0x78) << 2)),
      -1 < *(int *)(lVar4 + 0x78))) && (*(long *)(lVar4 + 0x70) != 0)) {
    (**(code **)(**(long **)(lVar4 + 0x80) + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)__dest + ((ulong)*(uint *)(lVar4 + 0x78) & 0x7fffffff) * 4),0,
         (ulong)((uVar3 - *(uint *)(lVar4 + 0x78)) * 4));
}


