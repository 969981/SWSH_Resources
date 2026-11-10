/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880a40; name: FUN_00880a40
 */


int FUN_00880a40(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  if (2 < (param_2 & 0xff)) {
    param_2 = 3;
  }
  FUN_00881490(DAT_029f6120,param_1);
  uVar1 = FUN_00881850(DAT_029f6120);
  return ((uVar1 & 0xff) * (param_2 * 0x14 & 0xfc)) / 100 + uVar1;
}


