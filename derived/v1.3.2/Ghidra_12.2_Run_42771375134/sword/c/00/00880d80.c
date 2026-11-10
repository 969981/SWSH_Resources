/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880d80; name: FUN_00880d80
 */


uint FUN_00880d80(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00881490(DAT_029f6120,param_1);
  uVar2 = FUN_00881bd0(DAT_029f6120);
  uVar1 = uVar2 & 0xf;
  if (uVar2 != 0) {
    uVar2 = FUN_00881cd0(DAT_029f6120);
    iVar3 = FUN_00881c50(DAT_029f6120);
    uVar1 = uVar1 | (uVar2 & 0x3f) << 4 | iVar3 << 10;
  }
  return uVar1 & 0xffff;
}


