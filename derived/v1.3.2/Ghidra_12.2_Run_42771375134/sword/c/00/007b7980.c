/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b7980; name: FUN_007b7980
 */


undefined8 FUN_007b7980(long param_1)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  long *__dest;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    return 1;
  }
  do {
    __dest = *(long **)(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x4f6) = 0;
    *(undefined4 *)(param_1 + 0x4f1) = 0;
    *(long *)(*__dest + 8) = param_1;
    uVar1 = (**(code **)(*(long *)*__dest + 0x20))();
    if ((uVar1 & 1) == 0) {
      uVar1 = (*(code *)**(undefined8 **)*__dest)();
      if ((uVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x98) = 0;
        return 0;
      }
      return 1;
    }
    lVar2 = *(long *)(param_1 + 0x98);
    __n = (*(long *)(param_1 + 0x90) + lVar2 * 8) - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
      lVar2 = *(long *)(param_1 + 0x98);
    }
    *(long *)(param_1 + 0x98) = lVar2 + -1;
  } while (lVar2 + -1 != 0);
  return 1;
}


