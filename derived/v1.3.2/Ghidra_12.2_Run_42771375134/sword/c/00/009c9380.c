/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9380; name: FUN_009c9380
 */


undefined4 FUN_009c9380(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (2 < param_2) {
    return 0;
  }
  lVar2 = FUN_009c93c0(param_1 + (long)param_2 * 0x28 + 0x58);
  uVar1 = (undefined4)lVar2;
  if (lVar2 < 1) {
    uVar1 = 0;
  }
  return uVar1;
}


