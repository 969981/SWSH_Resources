/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ab190; name: FUN_007ab190
 */


bool FUN_007ab190(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(bool **)(param_1 + 0xca0) != (bool *)0x0) {
    iVar2 = nn::account::AsyncContext::HasDone(*(bool **)(param_1 + 0xca0));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


