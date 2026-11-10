/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00965b50; name: FUN_00965b50
 */


undefined1 FUN_00965b50(int param_1,short param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_0214b8d2;
  while ((*(int *)(puVar2 + -6) != param_1 || (*(short *)(puVar2 + -2) != param_2))) {
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0xc;
    if (0x29 < uVar1) {
      return 0x12;
    }
  }
  return *puVar2;
}


