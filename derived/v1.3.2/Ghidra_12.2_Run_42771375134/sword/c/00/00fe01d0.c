/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe01d0; name: FUN_00fe01d0
 */


void FUN_00fe01d0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 2;
  if (param_2 != 4) {
    iVar1 = param_2;
  }
  iVar2 = 2;
  if (iVar1 != 5) {
    iVar2 = iVar1;
  }
  FUN_00fd67d0(*(undefined8 *)(param_1 + (long)iVar2 * 8 + 8));
  return;
}


