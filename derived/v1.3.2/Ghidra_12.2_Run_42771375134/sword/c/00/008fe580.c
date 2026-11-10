/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fe580; name: FUN_008fe580
 */


void FUN_008fe580(long param_1,undefined2 param_2)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 0x2b6) = 0;
  *(byte *)(param_1 + 0x2b5) = *(byte *)(param_1 + 0x2b5) & 0xbf;
  FUN_009af580(*(undefined8 *)(param_1 + 0xb8));
  FUN_009c50e0(*(undefined8 *)(param_1 + 0xf0));
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 200) = param_2;
  puVar1 = PTR_LAB_02717cf8;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) & 0xf8 | 1;
  *(undefined **)(param_1 + 0xd0) = puVar1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}


