/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e7d60; name: FUN_004e7d60
 */


undefined8 FUN_004e7d60(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *__dest;
  void *__src;
  long lVar2;
  
  if (param_2 <= *(uint *)(param_1 + 8) && *(long *)(param_1 + 0x10) != 0 ||
      param_2 <= *(uint *)(param_1 + 8)) {
    return 1;
  }
  uVar1 = FUN_004e4050();
  __dest = (undefined8 *)FUN_00404690(uVar1,param_2 << 6 | 0x10);
  uVar1 = 0;
  if (__dest != (undefined8 *)0x0) {
    __src = *(void **)(param_1 + 0x10);
    if ((__src == (void *)0x0) || (*(int *)((long)__src + 8) == 0)) {
      *__dest = 0xffffffffffffffff;
      *(undefined4 *)(__dest + 1) = 0;
      lVar2 = *(long *)(param_1 + 0x10);
    }
    else {
      memcpy(__dest,__src,(ulong)(*(int *)((long)__src + 8) << 6 | 0x10));
      lVar2 = *(long *)(param_1 + 0x10);
    }
    if (lVar2 != 0) {
      uVar1 = FUN_004e4050();
      FUN_00404870(uVar1,*(undefined8 *)(param_1 + 0x10));
    }
    uVar1 = 1;
    *(undefined8 **)(param_1 + 0x10) = __dest;
    *(uint *)(param_1 + 8) = param_2;
  }
  return uVar1;
}


