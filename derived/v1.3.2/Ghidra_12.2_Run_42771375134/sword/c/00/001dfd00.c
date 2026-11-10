/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001dfd00; name: FUN_001dfd00
 */


long * FUN_001dfd00(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_027110c0;
  plVar3 = (long *)*param_1;
  *(undefined2 *)((long)plVar3 + 10) = 0;
  plVar3[4] = 0;
  plVar3[6] = 0;
  plVar3[0xb] = 0;
  plVar3[0x11] = 0;
  *(undefined2 *)(plVar3 + 0x15) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  *(uint *)(plVar3 + 5) = *(uint *)(plVar3 + 5) & 0xf000000;
  *param_1 = *param_1 + 0xb8;
  if (plVar3[2] != 0) {
    lVar2 = (**(code **)*param_2)(param_2,0x80000000);
    plVar3[2] = lVar2;
  }
  if (plVar3[3] != 0) {
    lVar2 = (**(code **)*param_2)(param_2,0x80000000);
    plVar3[3] = lVar2;
  }
  return plVar3;
}


