/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105ddb0; name: FUN_0105ddb0
 */


undefined8 FUN_0105ddb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((*(long *)(lVar1 + 0x20) != 0) && (*(long *)(*(long *)(lVar1 + 0x20) + 0x48) != 0)) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x40) != 0) && (*(long *)(*(long *)(lVar1 + 0x40) + 0x48) != 0)) {
    return 0;
  }
  if ((*(long *)(lVar1 + 0x60) == 0) || (*(long *)(*(long *)(lVar1 + 0x60) + 0x48) == 0)) {
    return 1;
  }
  return 0;
}


