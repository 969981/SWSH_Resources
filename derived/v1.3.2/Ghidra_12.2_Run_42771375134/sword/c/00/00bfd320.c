/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfd320; name: FUN_00bfd320
 */


void FUN_00bfd320(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 local_28;
  
  local_28 = 0x163bd0f6181d587c;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5f8),&local_28);
  if ((param_2 & 1) == 0) {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = 0;
  }
  FUN_0167bdb0(uVar1,*(undefined8 *)(param_1 + 0x5f8),&local_28);
  return;
}


