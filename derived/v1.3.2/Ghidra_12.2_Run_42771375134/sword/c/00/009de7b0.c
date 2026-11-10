/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de7b0; name: FUN_009de7b0
 */


bool FUN_009de7b0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  FUN_008f8110();
  uVar2 = FUN_008f0ca0();
  if ((uVar2 & 1) == 0) {
    return false;
  }
  iVar1 = FUN_008f3790(param_1);
  return iVar1 == 3;
}


