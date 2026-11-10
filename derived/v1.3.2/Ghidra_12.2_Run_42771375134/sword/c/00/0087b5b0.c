/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b5b0; name: FUN_0087b5b0
 */


void FUN_0087b5b0(long param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_0086a1a0(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar3 = FUN_00880a40(uVar1,uVar2);
  if ((param_3 & 0xff) <= (uVar3 & 0xff)) {
    uVar3 = param_3;
  }
  FUN_00870d20(*(undefined8 *)(param_1 + 0x98),param_2,uVar3);
  return;
}


