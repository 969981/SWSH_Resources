/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069a680; name: FUN_0069a680
 */


void FUN_0069a680(float param_1,uint *param_2)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  float fVar2;
  
  fVar2 = (float)NEON_ucvtf(param_2[1]);
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[3] = (uint)((float)param_2[3] + (float)param_2[2] * fVar2 * param_1);
  UNRECOVERED_JUMPTABLE =
       (code *)(&PTR_LAB_02606320)[(ulong)((float)param_2[2] < 0.0) * 4 + (ulong)*param_2 * 2];
  puVar1 = (&PTR_LAB_02606320 + (ulong)((float)param_2[2] < 0.0) * 4 + (ulong)*param_2 * 2)[1];
  if (((ulong)puVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)param_2 + ((long)puVar1 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0069a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


