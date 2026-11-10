/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00970a70; name: FUN_00970a70
 */


void FUN_00970a70(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar3 = FUN_008daa40(param_1);
  lVar4 = FUN_008dd0a0(uVar3,0,uVar1);
  if (lVar4 != 0) {
    do {
      while (uVar2 = FUN_008dba00(lVar4), (uVar2 & 0xffff) == param_3) {
        FUN_008daae0(param_1,lVar4);
        lVar4 = FUN_008dd0a0(uVar3,0,uVar1);
        if (lVar4 == 0) {
          return;
        }
      }
      lVar4 = FUN_008dd130(uVar3,lVar4,0);
    } while (lVar4 != 0);
  }
  return;
}


