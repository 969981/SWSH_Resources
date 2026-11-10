/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003098f0; name: FUN_003098f0
 */


void FUN_003098f0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_027121f8 + 0x10;
  param_1[3] = (long)(PTR_DAT_027121f8 + 0x1a0);
  *param_1 = (long)puVar1;
  if (((*(byte *)((long)param_1 + 10) & 1) != 0) && (lVar3 = param_1[0xd], lVar3 != 0)) {
                    /* try { // try from 00309928 to 0030993b has its CatchHandler @ 0030995c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
                    /* try { // try from 0030993c to 0030994f has its CatchHandler @ 00309960 */
  plVar2 = (long *)FUN_00400d30();
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  return;
}


