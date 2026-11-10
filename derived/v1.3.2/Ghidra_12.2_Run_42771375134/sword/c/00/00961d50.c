/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00961d50; name: FUN_00961d50
 */


bool FUN_00961d50(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_008f35c0(param_1,0x40000);
  if ((uVar1 & 1) != 0) {
    return true;
  }
  uVar1 = FUN_008f89c0(param_1,0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_008f7fc0(param_1);
    return *(char *)(lVar2 + 0x1a4) == '\x06';
  }
  return true;
}


