/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e083b0; name: FUN_00e083b0
 */


undefined8 FUN_00e083b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x290) != '\0')) && (*(long *)(lVar1 + 0x68) != 0)) &&
     (*(char *)(*(long *)(lVar1 + 0x68) + 0x170) != '\0')) {
    uVar2 = FUN_00e09710();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


