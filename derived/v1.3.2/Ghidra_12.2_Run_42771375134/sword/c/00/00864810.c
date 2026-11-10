/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864810; name: FUN_00864810
 */


undefined4 FUN_00864810(undefined8 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_029f59e0;
  uVar1 = 0;
  if (param_2 < 0x385) {
    if (param_3 - 1 < 10) {
      uVar1 = FUN_0087f600(param_2,0);
      uVar1 = FUN_0077e740((&DAT_029f5b48)[param_3],uVar1,uVar2);
    }
  }
  uVar2 = FUN_0077d470(DAT_029f59e0);
  FUN_0077d7e0(param_1,uVar2,0xd);
  return uVar1;
}


