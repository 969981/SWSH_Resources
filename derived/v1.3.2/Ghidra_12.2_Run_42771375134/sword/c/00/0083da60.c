/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083da60; name: FUN_0083da60
 */


long * FUN_0083da60(long param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = operator_new(0x58);
  lVar3 = FUN_007e2680();
  lVar4 = FUN_008185e0();
  plVar2[2] = param_2;
  puVar1 = PTR_DAT_027171a0;
  plVar2[4] = param_3;
  *(undefined4 *)(plVar2 + 5) = param_4;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = param_1;
  *(undefined4 *)(plVar2 + 7) = param_8;
  *(undefined4 *)((long)plVar2 + 0x3c) = param_9;
  *(undefined4 *)(plVar2 + 6) = param_5;
  *(undefined4 *)((long)plVar2 + 0x34) = param_6;
  *(undefined4 *)(plVar2 + 8) = param_7;
  if (lVar3 == 0) {
    lVar3 = FUN_007e2680();
  }
  plVar2[9] = lVar3;
  plVar2[10] = lVar4;
  return plVar2;
}


