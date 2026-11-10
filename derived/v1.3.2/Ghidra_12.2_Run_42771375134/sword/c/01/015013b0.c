/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015013b0; name: FUN_015013b0
 */


void FUN_015013b0(long param_1,uint param_2,uint param_3)

{
  void *__dest;
  undefined1 *__src;
  long lVar1;
  
  if ((param_3 | param_2) < 2) {
    lVar1 = param_1 + (ulong)param_2 * 0x2b8;
    __dest = (void *)(lVar1 + 0x60);
    *(undefined1 *)((long)__dest + (ulong)param_3 * 0x149) = 0;
    if ((*(char *)(lVar1 + 0x60) == '\0') &&
       (param_1 = param_1 + (ulong)param_2 * 0x2b8, *(char *)(param_1 + 0x1a9) != '\0')) {
      __src = (undefined1 *)(param_1 + 0x1a9);
      memcpy(__dest,__src,0x149);
      *__src = 0;
    }
  }
  return;
}


