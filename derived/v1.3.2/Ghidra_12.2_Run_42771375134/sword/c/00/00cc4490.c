/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc4490; name: FUN_00cc4490
 */


undefined8 FUN_00cc4490(long param_1,byte param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  uint local_18;
  byte local_14 [4];
  
  uVar1 = 0;
  if (((param_2 < 2) && (param_3 < 0x10)) &&
     (local_18 = param_3, local_14[0] = param_2,
     lVar2 = FUN_00c97270(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 600),param_4), uVar1 = 0,
     lVar2 != 0)) {
    if (param_5 != 0) {
      FUN_00cc4260(lVar2,param_5,lVar2,local_14,&local_18);
    }
    uVar1 = 1;
  }
  return uVar1;
}


