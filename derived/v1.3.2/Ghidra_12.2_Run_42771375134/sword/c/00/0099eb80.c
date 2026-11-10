/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099eb80; name: FUN_0099eb80
 */


void FUN_0099eb80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0099ebf0(param_1,*param_3);
  uVar3 = *param_3;
  iVar1 = FUN_008e2e80(uVar3);
  while (iVar1 != 0x19) {
    uVar2 = FUN_009423b0(param_1);
    FUN_00937630(uVar2,uVar3,iVar1);
    iVar1 = FUN_008e2e80(uVar3);
  }
  return;
}


