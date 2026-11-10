/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00944c20; name: FUN_00944c20
 */


void FUN_00944c20(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_009424e0(param_1,*param_3);
  sVar1 = FUN_008e2d10();
  if (sVar1 == 0) {
    return;
  }
  uVar3 = FUN_009423e0(param_1);
  FUN_0092b300(uVar3,uVar2,param_3[1]);
  return;
}


