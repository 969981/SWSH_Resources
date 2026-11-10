/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009888a0; name: FUN_009888a0
 */


void FUN_009888a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_008daa40();
  uVar1 = FUN_008e0a00(param_2);
  lVar4 = FUN_008dd0a0(uVar3,4,uVar1);
  if (lVar4 != 0) {
    do {
      iVar2 = FUN_008db860(lVar4,4);
      if (iVar2 != 0) {
        return;
      }
      FUN_008daae0(param_1,lVar4);
      lVar4 = FUN_008dd0a0(uVar3,4,uVar1);
    } while (lVar4 != 0);
  }
  return;
}


