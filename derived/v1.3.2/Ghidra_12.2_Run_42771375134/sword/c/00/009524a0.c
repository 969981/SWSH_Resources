/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009524a0; name: FUN_009524a0
 */


void FUN_009524a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_009423b0();
  FUN_00937200(uVar2,param_3[1],0x76);
  uVar2 = FUN_009423b0(param_1);
  uVar1 = FUN_008e0a00(param_3[1]);
  FUN_009360c0(uVar2,0x2c2,uVar1);
  uVar2 = FUN_009423e0(param_1);
  FUN_0092a380(uVar2,*param_3,param_3[1],param_3[2]);
  return;
}


