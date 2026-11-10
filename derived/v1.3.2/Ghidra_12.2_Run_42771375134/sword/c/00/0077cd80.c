/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077cd80; name: FUN_0077cd80
 */


undefined8 FUN_0077cd80(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x10) - 1U < 2) {
    nn::fs::FlushFile(uVar1);
  }
  nn::fs::CloseFile(uVar1);
  return 1;
}


