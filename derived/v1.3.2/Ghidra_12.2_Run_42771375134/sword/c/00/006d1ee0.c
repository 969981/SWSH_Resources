/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d1ee0; name: FUN_006d1ee0
 */


void FUN_006d1ee0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  for (puVar2 = *(undefined8 **)(param_1 + 0x90); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x38))((long *)*puVar2,param_2);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 8);
  FUN_006d2060(param_1 + 0x1f8,param_2);
  return;
}


