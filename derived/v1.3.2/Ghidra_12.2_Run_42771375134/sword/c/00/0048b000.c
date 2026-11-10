/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048b000; name: FUN_0048b000
 */


undefined8 FUN_0048b000(undefined8 param_1,int *param_2)

{
  if (*param_2 == 1) {
    FUN_00489b10(param_2,*(undefined4 *)(*(long *)PTR_DAT_02712de0 + 0x78));
    return 1;
  }
  return 0x26;
}


