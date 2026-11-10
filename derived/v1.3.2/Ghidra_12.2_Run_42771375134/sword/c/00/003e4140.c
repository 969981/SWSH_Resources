/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e4140; name: FUN_003e4140
 */


void FUN_003e4140(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  *(int *)(param_1 + 0x7c4) = *(int *)(param_1 + 0x7c4) + 1;
  FUN_00133030(*(undefined8 *)(param_1 + 0x728),param_2,0);
  iVar1 = *(int *)(*(long *)(param_1 + 0x738) + 0xb4);
  FUN_003e0ba0(param_1,iVar1 + 1,param_2);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x830) != 0)) {
    lVar6 = *(long *)(param_1 + 0x728);
    uVar5 = 0;
    do {
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x828) + uVar5 * 8) + 0x38);
      while (lVar4 = lVar7, lVar4 != 0) {
        uVar2 = *(uint *)(lVar4 + 0x18);
        lVar7 = *(long *)(lVar4 + 8);
        if (((uVar2 & 0x60000000) == 0) && ((*(byte *)(*(long *)(lVar4 + 0x40) + 0x40) & 5) != 0)) {
          uVar3 = (uVar2 & 0x1fffffff) + 0x20 >> 5;
          if ((*(uint *)(lVar6 + 0x78) & 0x7fffffff) < uVar3) {
            __dest = (void *)(**(code **)(**(long **)(lVar6 + 0x80) + 0x10))
                                       (*(long **)(lVar6 + 0x80),uVar3 << 2,
                                        "./../../Common/src\\CmBitMap.h",0x1b7);
            if (((*(void **)(lVar6 + 0x70) != (void *)0x0) &&
                (memcpy(__dest,*(void **)(lVar6 + 0x70),(ulong)(uint)(*(int *)(lVar6 + 0x78) << 2)),
                -1 < *(int *)(lVar6 + 0x78))) && (*(long *)(lVar6 + 0x70) != 0)) {
              (**(code **)(**(long **)(lVar6 + 0x80) + 0x18))();
            }
                    /* WARNING: Subroutine does not return */
            memset((void *)((long)__dest + ((ulong)*(uint *)(lVar6 + 0x78) & 0x7fffffff) * 4),0,
                   (ulong)((uVar3 - *(uint *)(lVar6 + 0x78)) * 4));
          }
          lVar4 = (ulong)((uVar2 & 0x1fffffff) >> 5) * 4;
          *(uint *)(*(long *)(lVar6 + 0x70) + lVar4) =
               *(uint *)(*(long *)(lVar6 + 0x70) + lVar4) | 1 << (ulong)(uVar2 & 0x1f);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x830));
  }
  return;
}


