/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f3e40; name: FUN_011f3e40
 */


undefined * FUN_011f3e40(undefined8 param_1,long param_2)

{
  void *pvVar1;
  size_t __n;
  undefined *puVar2;
  void *__dest;
  undefined1 auStack_3248 [12808];
  
  puVar2 = PTR_DAT_02725ce8;
  __dest = *(void **)(PTR_DAT_02725ce8 + 8);
  pvVar1 = *(void **)(PTR_DAT_02725ce8 + 0x10);
  if (__dest == pvVar1) {
LAB_011f3e9c:
    if (__dest != pvVar1) {
      __n = (long)pvVar1 - ((long)__dest + 0x80);
      if (__n != 0) {
        memmove(__dest,(void *)((long)__dest + 0x80),__n);
      }
      *(void **)(puVar2 + 0x10) = (void *)((long)__dest + ((long)__n >> 7) * 0x80);
                    /* WARNING: Subroutine does not return */
      memset(auStack_3248,0,0x3208);
    }
  }
  else {
    do {
      if ((*(long *)(param_2 + 0x20) == *(long *)((long)__dest + 0x20)) &&
         (*(long *)(param_2 + 0x28) == *(long *)((long)__dest + 0x28))) goto LAB_011f3e9c;
      __dest = (void *)((long)__dest + 0x80);
    } while (pvVar1 != __dest);
  }
  return PTR_DAT_02725ce8 + 8;
}


