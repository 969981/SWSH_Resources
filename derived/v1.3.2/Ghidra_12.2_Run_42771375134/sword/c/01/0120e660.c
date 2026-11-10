/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120e660; name: FUN_0120e660
 */


void FUN_0120e660(undefined1 *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)PTR_DAT_027104b0 == 0) {
    *param_1 = 0;
    return;
  }
  uVar1 = FUN_007b5710();
  *param_1 = 0;
  FUN_007a2d60(param_1 + 0x10,uVar1);
  *param_1 = 1;
  return;
}


