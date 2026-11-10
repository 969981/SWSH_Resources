/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009122a0; name: FUN_009122a0
 */


undefined8 FUN_009122a0(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008f35c0(param_1,0x800);
  if (((((uVar1 & 1) == 0) && (uVar1 = FUN_008f35c0(param_1,0x1000), (uVar1 & 1) == 0)) &&
      (uVar1 = FUN_008f35c0(param_1,0x40000), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_008f89c0(param_1,0x10), (uVar1 & 1) == 0)) {
    uVar2 = FUN_008f89c0(param_1,0x20);
    return uVar2;
  }
  return 1;
}


