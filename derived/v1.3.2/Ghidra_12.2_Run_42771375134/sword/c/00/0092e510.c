/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092e510; name: FUN_0092e510
 */


void FUN_0092e510(long param_1,undefined1 param_2)

{
  int iVar1;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x3e,param_2);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x9c);
  iVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  if (iVar1 == 0) {
    FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x9d);
    FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


