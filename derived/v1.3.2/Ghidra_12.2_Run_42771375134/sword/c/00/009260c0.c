/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009260c0; name: FUN_009260c0
 */


undefined4 FUN_009260c0(long param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),2,param_2);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x7c,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x7d,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x7e,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xe9);
  uVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x7c);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x7d);
  *param_3 = uVar2;
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x7e);
  param_3[1] = uVar2;
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return uVar1;
}


