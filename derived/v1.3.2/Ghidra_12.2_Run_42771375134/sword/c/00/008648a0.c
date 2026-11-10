/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008648a0; name: FUN_008648a0
 */


undefined8 FUN_008648a0(undefined8 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x385) {
    if (param_3 - 1 < 10) {
      uVar1 = FUN_0087f600(param_2,0);
      uVar2 = FUN_0077e740((&DAT_029f5b48)[param_3],uVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}


