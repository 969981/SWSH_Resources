/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f3240; name: FUN_003f3240
 */


void FUN_003f3240(long *param_1,uint param_2,void *param_3)

{
  long lVar1;
  void *__dest;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_003f32e0(param_1,param_2);
  }
  if (*(uint *)(param_1 + 1) < param_2) {
    lVar1 = *param_1;
    __dest = (void *)(lVar1 + (ulong)*(uint *)(param_1 + 1) * 0x28);
    do {
      memcpy(__dest,param_3,0x24);
      *(undefined1 *)((long)__dest + 0x24) = *(undefined1 *)((long)param_3 + 0x24);
      __dest = (void *)((long)__dest + 0x28);
    } while (__dest < (void *)(lVar1 + (ulong)param_2 * 0x28));
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}


