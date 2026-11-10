/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047f3a0; name: FUN_0047f3a0
 */


undefined4 FUN_0047f3a0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0047f560();
  if (iVar1 == 2) {
    return 1;
  }
  uVar2 = FUN_004881d0(param_1);
  uVar3 = 2;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


