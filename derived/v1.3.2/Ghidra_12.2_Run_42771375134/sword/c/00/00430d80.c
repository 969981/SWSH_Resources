/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430d80; name: FUN_00430d80
 */


undefined8 FUN_00430d80(short param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02712df8;
  if (param_1 == 0) {
    return 0x1f;
  }
  if (*(int *)PTR_DAT_02712d80 < param_2) {
    return 1;
  }
  *(int *)PTR_DAT_02712d80 = param_2;
  *(short *)(puVar1 + 0x10) = param_1;
  return 1;
}


