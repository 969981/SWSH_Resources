/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075fc70; name: FUN_0075fc70
 */


void FUN_0075fc70(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_0075fcd0();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_3;
  if ((param_4 & 1) == 0) {
    lVar1 = 0;
  }
  FUN_0075fb10(param_1,lVar2,param_2 - lVar1,param_3);
  return;
}


