/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937200; name: FUN_00937200
 */


void FUN_00937200(long param_1,undefined8 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar3 = FUN_009319a0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_00913e70(uVar3,uVar1);
  if ((uVar2 & 0xff) == 5) {
    return;
  }
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xa3,uVar2,param_3);
  return;
}


