/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00970b20; name: FUN_00970b20
 */


void FUN_00970b20(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_008daa40(param_1);
  lVar3 = FUN_008dd0a0(uVar2,0,uVar1);
  if (lVar3 != 0) {
    do {
      FUN_008daae0(param_1,lVar3);
      lVar3 = FUN_008dd0a0(uVar2,0,uVar1);
    } while (lVar3 != 0);
  }
  return;
}


