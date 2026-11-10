/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00123790; name: FUN_00123790
 */


void FUN_00123790(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + 0xb0) = param_3 & 1;
  *(undefined4 *)(*(long *)(param_1 + 0x1c0) + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(*(long *)(param_1 + 0x1b8) + 0x6a0),0,
         (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x1b8) + 0x6a8) << 2));
}


