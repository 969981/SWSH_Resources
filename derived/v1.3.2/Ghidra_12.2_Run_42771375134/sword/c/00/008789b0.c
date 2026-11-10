/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008789b0; name: FUN_008789b0
 */


void FUN_008789b0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_008694e0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00880780(uVar2,0);
  *param_2 = uVar1;
  uVar2 = FUN_008694e0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00880780(uVar2,1);
  param_2[1] = uVar1;
  uVar2 = FUN_008694e0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00880780(uVar2,2);
  param_2[2] = uVar1;
  uVar2 = FUN_008694e0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00880780(uVar2,3);
  param_2[3] = uVar1;
  uVar2 = FUN_008694e0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00880780(uVar2,4);
  param_2[4] = uVar1;
  uVar2 = FUN_008694e0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00880780(uVar2,5);
  param_2[5] = uVar1;
  return;
}


