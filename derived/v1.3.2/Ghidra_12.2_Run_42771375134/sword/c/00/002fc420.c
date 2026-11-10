/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002fc420; name: FUN_002fc420
 */


void FUN_002fc420(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_027121b8 + 0x10;
  param_1[3] = (long)(PTR_DAT_027121b8 + 0x188);
  *param_1 = (long)puVar1;
  if (((*(byte *)((long)param_1 + 10) & 1) != 0) && (lVar3 = param_1[0xd], lVar3 != 0)) {
                    /* try { // try from 002fc458 to 002fc46b has its CatchHandler @ 002fc48c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
  }
                    /* try { // try from 002fc46c to 002fc47f has its CatchHandler @ 002fc490 */
  plVar2 = (long *)FUN_00400d30();
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  return;
}


