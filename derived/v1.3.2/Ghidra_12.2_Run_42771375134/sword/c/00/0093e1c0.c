/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093e1c0; name: FUN_0093e1c0
 */


bool FUN_0093e1c0(undefined8 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_008daa40();
  lVar3 = FUN_008dd0a0(uVar2,1,param_3);
  while ((lVar3 != 0 && (uVar1 = FUN_008dba00(lVar3), (uVar1 & 0xffff) != param_2))) {
    lVar3 = FUN_008dd130(uVar2,lVar3,0);
  }
  return lVar3 != 0;
}


