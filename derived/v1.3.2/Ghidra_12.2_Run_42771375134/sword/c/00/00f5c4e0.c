/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f5c4e0; name: FUN_00f5c4e0
 */


undefined8 FUN_00f5c4e0(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_01760060(param_1,0xfff0b9d5);
  plVar1 = (long *)(*(long *)(lVar2 + 0x38) + (long)param_3 * 0x10);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    FUN_01760310(param_1);
  }
  else {
    FUN_01760c90(lVar3,0xfff0b9d8,(long)*(int *)(*(long *)(lVar2 + 0x38) + (long)param_3 * 0x10 + 8)
                );
    lVar2 = *plVar1;
    if (lVar2 != param_1) {
      FUN_0175edc0(lVar2,param_1,1);
    }
  }
  return 1;
}


