/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00987bf0; name: FUN_00987bf0
 */


void FUN_00987bf0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_008daa40();
  lVar3 = FUN_008dd030(uVar2,3);
  if (lVar3 != 0) {
    do {
      lVar4 = FUN_008dd130(uVar2,lVar3,1);
      uVar1 = FUN_008dba00(lVar3);
      if ((uVar1 & 0xffff) == param_2) {
        FUN_008daae0(param_1,lVar3);
      }
      lVar3 = lVar4;
    } while (lVar4 != 0);
  }
  return;
}


