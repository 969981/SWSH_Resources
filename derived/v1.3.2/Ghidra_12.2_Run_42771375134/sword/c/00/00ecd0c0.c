/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecd0c0; name: FUN_00ecd0c0
 */


bool FUN_00ecd0c0(long param_1)

{
  if ((((((*(long *)(param_1 + 0x58) == 0) && (*(long *)(param_1 + 200) == 0)) &&
        (*(long *)(param_1 + 0x138) == 0)) &&
       ((*(long *)(param_1 + 0x1a8) == 0 && (*(long *)(param_1 + 0x218) == 0)))) &&
      ((*(long *)(param_1 + 0x288) == 0 &&
       ((*(long *)(param_1 + 0x2f8) == 0 && (*(long *)(param_1 + 0x368) == 0)))))) &&
     (*(long *)(param_1 + 0x3d8) == 0)) {
    return *(long *)(param_1 + 0x448) != 0;
  }
  return true;
}


