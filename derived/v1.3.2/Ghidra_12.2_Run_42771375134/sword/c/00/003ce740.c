/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ce740; name: FUN_003ce740
 */


void FUN_003ce740(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x48) == 0) {
    lVar1 = FUN_003ce7a0(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                         *(uint *)(param_2 + 0x40) & 0x1dc);
    *(short *)(lVar1 + 4) = *(short *)(lVar1 + 4) + 1;
    *(long *)(param_2 + 0x48) = lVar1;
    return;
  }
  return;
}


