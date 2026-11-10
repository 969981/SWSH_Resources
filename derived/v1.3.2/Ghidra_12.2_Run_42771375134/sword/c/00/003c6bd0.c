/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6bd0; name: FUN_003c6bd0
 */


void FUN_003c6bd0(long param_1)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  FUN_00131350(*(undefined8 *)(lVar4 + 0x728),*(uint *)(param_1 + 0x18) & 0x1fffffff);
  lVar5 = *(long *)(lVar4 + 0x728);
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1fffffff;
  uVar2 = uVar1 + 0x20 >> 5;
  if (uVar2 <= (*(uint *)(lVar5 + 0x78) & 0x7fffffff)) {
    lVar3 = (ulong)(uVar1 >> 5) * 4;
    *(uint *)(*(long *)(lVar5 + 0x70) + lVar3) =
         *(uint *)(*(long *)(lVar5 + 0x70) + lVar3) &
         (1 << (ulong)(*(uint *)(param_1 + 0x18) & 0x1f) ^ 0xffffffffU);
    uVar1 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar1 & 0x7fffffff;
    lVar4 = *(long *)(lVar4 + 0x1100) + (ulong)(uVar1 >> 0x1d & 3) * 4;
    *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
    return;
  }
  __dest = (void *)(**(code **)(**(long **)(lVar5 + 0x80) + 0x10))
                             (*(long **)(lVar5 + 0x80),uVar2 << 2,"./../../Common/src/CmBitMap.h",
                              0x1b7);
  if (((*(void **)(lVar5 + 0x70) != (void *)0x0) &&
      (memcpy(__dest,*(void **)(lVar5 + 0x70),(ulong)(uint)(*(int *)(lVar5 + 0x78) << 2)),
      -1 < *(int *)(lVar5 + 0x78))) && (*(long *)(lVar5 + 0x70) != 0)) {
    (**(code **)(**(long **)(lVar5 + 0x80) + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)__dest + ((ulong)*(uint *)(lVar5 + 0x78) & 0x7fffffff) * 4),0,
         (ulong)((uVar2 - *(uint *)(lVar5 + 0x78)) * 4));
}


