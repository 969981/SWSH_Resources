/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a389a0; name: FUN_00a389a0
 */


void FUN_00a389a0(long param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  memcpy((void *)(param_1 + 0x18),param_2,0xe8);
  local_28 = uVar1;
  FUN_00a38a00(&local_28,param_1 + 0x108,(void *)(param_1 + 0x18));
  FUN_00a38a00(&local_28,param_1 + 0x140,param_1 + 0x88);
  return;
}


