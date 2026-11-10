/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029fad0; name: FUN_0029fad0
 */


long * FUN_0029fad0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_02711f88;
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  *(undefined4 *)(plVar2 + 3) = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[2] = (long)(puVar1 + 0xd0);
                    /* try { // try from 0029fb18 to 0029fb23 has its CatchHandler @ 0029fb80 */
  FUN_0029f710(plVar2 + 0x1a,0);
  *param_1 = *param_1 + 0x118;
  FUN_0029f780(plVar2 + 0x1a,param_2);
  FUN_002a0370(plVar2,param_2);
  if ((*(byte *)((long)plVar2 + 0x5c) >> 1 & 1) == 0) {
    plVar2[0x17] = plVar2[6];
    plVar2[0x18] = 0;
  }
  else {
    plVar2[0x17] = 0;
    plVar2[0x18] = plVar2[6];
  }
  plVar2[0x15] = plVar2[5];
  plVar2[0x1a] = (long)(plVar2 + 0x14);
  return plVar2;
}


