/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00911a00; name: FUN_00911a00
 */


void FUN_00911a00(long param_1)

{
  undefined4 *puVar1;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined4 *)FUN_00915240();
    *(undefined4 *)(param_1 + 0x90) = *puVar1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined4 *)FUN_00915240();
    *(undefined4 *)(param_1 + 0xa8) = *puVar1;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined4 *)FUN_00915240();
    *(undefined4 *)(param_1 + 0xc0) = *puVar1;
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined4 *)FUN_00915240();
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_009c50b0();
    puVar1 = (undefined4 *)FUN_00915240();
    *(undefined4 *)(param_1 + 0xf0) = *puVar1;
  }
  return;
}


