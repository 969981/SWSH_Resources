/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075ffc0; name: FUN_0075ffc0
 */


void FUN_0075ffc0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_0075f300(param_2);
  lVar1 = FUN_0075f310(param_2);
  if ((lVar1 != param_2) && (uVar2 = FUN_0075f5c0(), (uVar2 & 1) == 0)) {
    FUN_00760150(param_1,param_2);
    uVar3 = FUN_0075f360(param_2);
    FUN_00760150(param_1,uVar3);
    FUN_0075f7c0(param_1,param_2);
  }
  lVar1 = FUN_0075f340(param_2);
  if ((lVar1 != param_2) && (uVar2 = FUN_0075f5c0(), (uVar2 & 1) == 0)) {
    FUN_00760150(param_1,lVar1);
    uVar3 = FUN_0075f360(lVar1);
    FUN_00760150(param_1,uVar3);
    FUN_0075f7c0(param_1,lVar1);
    param_2 = lVar1;
  }
  FUN_0075f7c0(param_1,param_2);
  return;
}


