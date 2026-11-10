/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093fa30; name: FUN_0093fa30
 */


undefined1 FUN_0093fa30(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  
  local_20[0] = param_2;
  uVar1 = FUN_00925630(*(undefined8 *)(param_1 + 0x20));
  FUN_00945320(uVar1,local_18,local_20);
  return local_18[0];
}


