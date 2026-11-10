/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00400530; name: FUN_00400530
 */


void FUN_00400530(long *param_1)

{
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = (long)(PTR_DAT_027129f0 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) &&
     ((*(uint *)((long)param_1 + 0x9c) & 0x7fffffff) != 0)) {
    if (param_1 + 1 == (long *)param_1[0x12]) {
      *(undefined1 *)(param_1 + 0x11) = 0;
      return;
    }
    if ((long *)param_1[0x12] != (long *)0x0) {
                    /* try { // try from 00400584 to 00400587 has its CatchHandler @ 0040059c */
      (**(code **)(*(long *)(*(long *)PTR_DAT_027129e0 + 0x18) + 0x18))();
    }
  }
  return;
}


