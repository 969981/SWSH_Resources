/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00190f50; name: FUN_00190f50
 */


void FUN_00190f50(void *param_1)

{
  *(undefined8 *)((long)param_1 + 0x2218) = 0x4000000000;
  *(undefined1 *)((long)param_1 + 0x2208) = 1;
  *(long *)((long)param_1 + 0x2210) = (long)param_1 + 0x2008;
  *(undefined8 *)((long)param_1 + 0x2220) = 0x100;
  *(undefined4 *)((long)param_1 + 0x2228) = 0x3800;
  *(undefined8 *)((long)param_1 + 0x2230) = 0;
  *(undefined4 *)((long)param_1 + 0x2238) = 0;
                    /* try { // try from 00190f98 to 00190fa3 has its CatchHandler @ 00190fb0 */
                    /* WARNING: Subroutine does not return */
  memset(param_1,0,0x2000);
}


