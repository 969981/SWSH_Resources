/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045b710; name: FUN_0045b710
 */


undefined8 FUN_0045b710(undefined4 *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  void *__dest;
  
  if (*(long *)(param_1 + 2) != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (param_3 != 0) {
    __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)param_3);
    *(void **)(param_1 + 2) = __dest;
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    memcpy(__dest,param_2,(ulong)param_3);
  }
  *param_1 = param_4;
  return 1;
}


