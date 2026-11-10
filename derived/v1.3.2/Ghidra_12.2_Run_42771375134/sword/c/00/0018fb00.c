/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018fb00; name: FUN_0018fb00
 */


void FUN_0018fb00(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0x98));
  lVar2 = (ulong)(*(uint *)(param_2 + 8) >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 0x88) + lVar2) =
       *(uint *)(*(long *)(param_1 + 0x88) + lVar2) &
       (1 << ((ulong)*(uint *)(param_2 + 8) & 0x1f) ^ 0xffffffffU);
  uVar1 = *(uint *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = uVar1 + 1;
  *(long *)(*(long *)(param_1 + 0x68) + (ulong)uVar1 * 8) = param_2;
                    /* try { // try from 0018fb5c to 0018fb5f has its CatchHandler @ 0018fb6c */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x98));
  return;
}


