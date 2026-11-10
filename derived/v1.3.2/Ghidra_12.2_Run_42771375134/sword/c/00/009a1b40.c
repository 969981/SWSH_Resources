/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a1b40; name: FUN_009a1b40
 */


void FUN_009a1b40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  iVar1 = FUN_008e19f0(param_2);
  if (iVar1 == 3) {
    uVar3 = FUN_00880a00(*param_3,10);
    if ((uVar3 & 1) != 0) {
      FUN_009a2190(param_1,param_2,*param_3);
      return;
    }
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_009423b0(param_1);
    FUN_009367b0(uVar2,param_2,*param_3,2);
    uVar2 = FUN_009423b0(param_1);
    FUN_00937200(uVar2,param_2,0x2a);
    return;
  }
  return;
}


