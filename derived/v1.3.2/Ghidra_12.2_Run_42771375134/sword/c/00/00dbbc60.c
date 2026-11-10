/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbbc60; name: FUN_00dbbc60
 */


void FUN_00dbbc60(long param_1,long *param_2)

{
  size_t __n;
  long lVar1;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(param_1 + 0xe0);
  if (*(undefined8 **)(param_1 + 0xe8) != __dest) {
    do {
      while (lVar1 = (**(code **)(*(long *)*__dest + 0x48))(), lVar1 != *param_2) {
        __dest = __dest + 1;
        if (*(undefined8 **)(param_1 + 0xe8) == __dest) {
          return;
        }
      }
      __n = *(long *)(param_1 + 0xe8) - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(param_1 + 0xe8) = __dest + ((long)__n >> 3);
    } while (__dest + ((long)__n >> 3) != __dest);
  }
  return;
}


