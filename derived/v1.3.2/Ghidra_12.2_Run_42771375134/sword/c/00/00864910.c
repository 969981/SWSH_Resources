/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864910; name: FUN_00864910
 */


undefined8 FUN_00864910(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_00866030();
  if (param_2 < 0x385) {
    bVar1 = *(byte *)(lVar3 + 0x278);
    if (bVar1 - 1 < 10) {
      uVar2 = FUN_0087f600(param_2,0);
      uVar4 = FUN_0077e740((&DAT_029f5b48)[bVar1],uVar2,param_1);
      return uVar4;
    }
  }
  return 0;
}


