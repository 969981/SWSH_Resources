/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004be310; name: FUN_004be310
 */


void FUN_004be310(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x3c) == 3) {
    uVar1 = 4;
  }
  else {
    if (*(int *)(param_2 + 0x3c) != 2) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  return;
}


