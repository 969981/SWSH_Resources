/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e5b30; name: FUN_001e5b30
 */


long * FUN_001e5b30(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  *(uint *)(plVar2 + 6) = *(uint *)(plVar2 + 6) & 0xf000000;
  plVar2[5] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  *(undefined1 *)((long)plVar2 + 0x4e) = 0;
  plVar2[0x1a] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  *(undefined1 *)(plVar2 + 0x1d) = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1f] = 0;
  puVar1 = PTR_DAT_027110e8;
  *(undefined1 *)(plVar2 + 0x20) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *param_1 = *param_1 + 0x108;
  FUN_003a9950(plVar2 + 8);
  (**(code **)(*plVar2 + 0x220))(plVar2,param_2);
  return plVar2;
}


