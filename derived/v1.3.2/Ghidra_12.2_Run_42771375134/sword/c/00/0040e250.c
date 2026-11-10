/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040e250; name: FUN_0040e250
 */


long FUN_0040e250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xa0);
    if (lVar2 == 0) {
      return 0;
    }
    FUN_00419e20(lVar2,param_1,param_2);
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    iVar1 = FUN_0041a130(lVar2,param_3,param_4,param_5 & 1);
    if (iVar1 == 1) {
      return lVar2;
    }
    FUN_00409430(lVar2);
    FUN_00408b50(lVar2);
  }
  return 0;
}


