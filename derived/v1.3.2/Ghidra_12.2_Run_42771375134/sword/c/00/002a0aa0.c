/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a0aa0; name: FUN_002a0aa0
 */


long * FUN_002a0aa0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_02711f98;
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  *(undefined4 *)(plVar2 + 3) = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[2] = (long)(puVar1 + 0xd0);
                    /* try { // try from 002a0ae8 to 002a0af3 has its CatchHandler @ 002a0b2c */
  FUN_002a1400(plVar2 + 0x14,0);
  *param_1 = *param_1 + 0x100;
  FUN_002a1460(plVar2 + 0x14,param_2);
  FUN_002a0370(plVar2,param_2);
  return plVar2;
}


