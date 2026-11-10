/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937790; name: FUN_00937790
 */


void FUN_00937790(long param_1,long param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return;
  }
  FUN_008e4e10(param_2,param_3);
  uVar1 = FUN_008e2ef0(param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_008e0a00(param_2);
  FUN_00916b10(uVar3,0x33,uVar2,param_3 & 0xff,uVar1);
  return;
}


