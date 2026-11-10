/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092c5a0; name: FUN_0092c5a0
 */


void FUN_0092c5a0(long param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),2,param_2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x66,param_3);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x27,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xd5);
  iVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x27);
  if (0 < iVar1) {
    FUN_008ed3c0(param_4,iVar1);
    FUN_008ed2a0(param_4,iVar1);
  }
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


