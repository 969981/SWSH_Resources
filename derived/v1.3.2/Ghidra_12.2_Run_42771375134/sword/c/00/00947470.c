/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947470; name: FUN_00947470
 */


undefined8 FUN_00947470(undefined8 param_1,int param_2,long param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_2 == 8) {
    FUN_00942390(param_1);
    FUN_00931930();
    cVar1 = FUN_00933080();
    FUN_00942380(param_1);
    cVar2 = FUN_008f8f80();
    if (cVar1 == cVar2) {
      return 0;
    }
  }
  uVar3 = FUN_009423b0(param_1);
  if (param_3 == 0) {
    uVar3 = FUN_00936e40(uVar3,param_2);
    return uVar3;
  }
  uVar3 = FUN_00936f30(uVar3,param_3,param_2);
  return uVar3;
}


