/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015292f0; name: FUN_015292f0
 */


undefined8 FUN_015292f0(ulong param_1)

{
  if (0x33 < (uint)param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)
          ((long)&PTR_s_egg_hatching_026a9208 +
          (-(param_1 >> 0x1f & 1) & 0xfffffff000000000 | (param_1 & 0xffffffff) << 4));
}


