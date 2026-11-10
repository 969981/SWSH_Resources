/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b670; name: FUN_0087b670
 */


void FUN_0087b670(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
  uVar2 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),0);
  uVar1 = FUN_00880a40(uVar1,uVar2);
  FUN_0087b770(param_1,0,uVar1);
  uVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1);
  uVar2 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),1);
  uVar1 = FUN_00880a40(uVar1,uVar2);
  FUN_0087b770(param_1,1,uVar1);
  uVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
  uVar2 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),2);
  uVar1 = FUN_00880a40(uVar1,uVar2);
  FUN_0087b770(param_1,2,uVar1);
  uVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),3);
  uVar2 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),3);
  uVar1 = FUN_00880a40(uVar1,uVar2);
  FUN_0087b770(param_1,3,uVar1);
  return;
}


