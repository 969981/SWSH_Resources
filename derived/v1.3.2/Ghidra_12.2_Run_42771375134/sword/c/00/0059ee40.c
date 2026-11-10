/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059ee40; name: FUN_0059ee40
 */


undefined8 FUN_0059ee40(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != param_2) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (param_2 != 0) {
      lVar1 = param_2;
    }
    *(long *)(param_1 + 0x20) = lVar1;
    FUN_0059ee70();
  }
  return 0;
}


