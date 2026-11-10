/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65d30; name: FUN_00e65d30
 */


void FUN_00e65d30(long param_1,uint param_2)

{
  float fVar1;
  
  if (((*(int *)(param_1 + 0x520) != 0) && (param_2 != 0)) && (*(int *)(param_1 + 0x524) != 0)) {
    fVar1 = 1.0 / (float)param_2;
    *(uint *)(param_1 + 0x590) = param_2;
    *(ulong *)(param_1 + 0x5a8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x518) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_1 + 0x518) * fVar1);
    *(ulong *)(param_1 + 0x5a0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x510) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_1 + 0x510) * fVar1);
  }
  return;
}


