/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00469260; name: FUN_00469260
 */


undefined8 FUN_00469260(long param_1,uint param_2,void *param_3,uint param_4)

{
  void *__dest;
  undefined8 uVar1;
  
  __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,param_4 + 1);
  if (__dest == (void *)0x0) {
    uVar1 = 0x34;
  }
  else {
    memcpy(__dest,param_3,(ulong)param_4);
    *(undefined1 *)((long)__dest + (ulong)param_4) = 0;
    uVar1 = 1;
    *(void **)(*(long *)(param_1 + 8) + (ulong)param_2 * 0x10 + 8) = __dest;
  }
  return uVar1;
}


