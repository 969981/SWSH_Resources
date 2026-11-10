/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093e120; name: FUN_0093e120
 */


undefined8 FUN_0093e120(undefined8 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_008daa40();
  lVar3 = FUN_008dd0a0(uVar2,1,param_3);
  if (lVar3 != 0) {
    do {
      uVar1 = FUN_008dba00(lVar3);
      if ((uVar1 & 0xffff) == param_2) {
        FUN_008daae0(param_1,lVar3);
        return 1;
      }
      lVar3 = FUN_008dd130(uVar2,lVar3,0);
    } while (lVar3 != 0);
  }
  return 0;
}


