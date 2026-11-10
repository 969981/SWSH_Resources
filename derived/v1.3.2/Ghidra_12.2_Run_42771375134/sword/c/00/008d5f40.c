/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5f40; name: FUN_008d5f40
 */


undefined1 FUN_008d5f40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined1 local_18 [8];
  
  FUN_009317d0(param_1[1],*param_1);
  FUN_008da630(param_1[5]);
  FUN_00915300();
  local_18[0] = 0x1f;
  FUN_008da670(param_1[5]);
  uVar1 = FUN_00925630();
  FUN_00945320(uVar1,local_28,local_18);
  return local_28[0];
}


