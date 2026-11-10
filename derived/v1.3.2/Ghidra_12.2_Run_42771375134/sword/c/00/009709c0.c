/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009709c0; name: FUN_009709c0
 */


void FUN_009709c0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar4 = FUN_008daa40(param_1);
  lVar5 = FUN_008dd0a0(uVar4,0,uVar1);
  if (lVar5 != 0) {
    do {
      while( true ) {
        lVar6 = FUN_008dd130(uVar4,lVar5,0);
        uVar2 = FUN_008dba00(lVar5);
        if (((uVar2 & 0xffff) == param_3) && (iVar3 = FUN_008db860(lVar5,6), iVar3 == 0)) break;
        lVar5 = lVar6;
        if (lVar6 == 0) {
          return;
        }
      }
      FUN_008daae0(param_1,lVar5);
      lVar5 = lVar6;
    } while (lVar6 != 0);
  }
  return;
}


