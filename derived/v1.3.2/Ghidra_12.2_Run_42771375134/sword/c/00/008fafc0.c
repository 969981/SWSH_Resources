/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fafc0; name: FUN_008fafc0
 */


bool FUN_008fafc0(long param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_008eef90(*(undefined4 *)(param_1 + 0x150),param_2);
  cVar2 = FUN_008eef90(*(undefined4 *)(param_1 + 0x150),param_3);
  return cVar1 == cVar2;
}


