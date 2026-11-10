/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087a850; name: FUN_0087a850
 */


void FUN_0087a850(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0087a6e0();
  uVar2 = iVar1 + param_3;
  if (0xfb < uVar2) {
    uVar2 = 0xfc;
  }
  FUN_0087a8a0(param_1,param_2,uVar2);
  return;
}


