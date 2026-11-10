/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec9d0; name: FUN_008ec9d0
 */


undefined4 FUN_008ec9d0(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_008e29c0(param_1,7);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 7;
  }
  return uVar2;
}


