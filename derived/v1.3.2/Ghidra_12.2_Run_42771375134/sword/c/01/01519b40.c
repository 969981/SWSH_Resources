/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01519b40; name: FUN_01519b40
 */


void FUN_01519b40(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 400) = 1;
  uVar1 = FUN_01029ba0(*(undefined8 *)PTR_DAT_027108c0);
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  return;
}


