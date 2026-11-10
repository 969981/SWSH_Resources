/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093f9f0; name: FUN_0093f9f0
 */


undefined1 FUN_0093f9f0(long param_1)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  
  local_20[0] = 0x1f;
  uVar1 = FUN_00925630(*(undefined8 *)(param_1 + 0x20));
  FUN_00945320(uVar1,local_18,local_20);
  return local_18[0];
}


