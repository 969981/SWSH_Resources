/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e69e0; name: FUN_003e69e0
 */


void FUN_003e69e0(undefined1 *param_1,long param_2,uint param_3)

{
  *param_1 = *(undefined1 *)
              (*(long *)(*(long *)(param_2 + 0x10f0) + (ulong)(param_3 & 0xff) * 8) + 0x40);
  return;
}


