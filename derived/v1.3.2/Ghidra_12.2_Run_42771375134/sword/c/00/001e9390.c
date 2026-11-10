/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e9390; name: FUN_001e9390
 */


long * FUN_001e9390(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  plVar2[5] = 0;
  plVar2[7] = 0;
  *plVar2 = (long)(PTR_DAT_02711128 + 0x10);
  *(uint *)(plVar2 + 6) = *(uint *)(plVar2 + 6) & 0xf000000;
  plVar2[8] = 0;
  *(undefined1 *)((long)plVar2 + 0x4e) = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0x10] = 0;
  plVar2[0x11] = 0;
  *(undefined2 *)(plVar2 + 0x12) = 0;
  puVar1 = PTR_DAT_02711130;
  plVar2[0x1a] = (long)plVar2;
  *(undefined4 *)(plVar2 + 0x1b) = 0;
  plVar2[0x17] = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)plVar2 + 0xdc) = 1;
  *param_1 = *param_1 + 0xe0;
  FUN_003b0bf0(plVar2 + 8);
  (**(code **)(*plVar2 + 0x3f8))(plVar2,param_2);
  return plVar2;
}


