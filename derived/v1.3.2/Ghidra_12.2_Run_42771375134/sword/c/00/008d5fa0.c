/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5fa0; name: FUN_008d5fa0
 */


undefined2 FUN_008d5fa0(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  byte local_38;
  undefined2 local_28 [4];
  
  FUN_009317d0(param_1[1],*param_1);
  FUN_008da630(param_1[5]);
  FUN_00915300();
  local_40 = param_2;
  local_38 = param_3 & 1;
  FUN_008da670(param_1[5]);
  uVar1 = FUN_00925500();
  FUN_009501e0(uVar1,local_28,&local_40);
  return local_28[0];
}


