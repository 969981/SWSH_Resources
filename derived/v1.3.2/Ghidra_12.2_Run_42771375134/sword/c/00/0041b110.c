/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b110; name: FUN_0041b110
 */


int FUN_0041b110(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004193b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  iVar2 = FUN_0040eaa0(*(undefined8 *)(param_1 + 0x78));
  return iVar2 + iVar1;
}


