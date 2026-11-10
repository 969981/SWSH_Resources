/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418f90; name: FUN_00418f90
 */


void FUN_00418f90(long param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)param_2[1] + 0xe8))();
  *(byte *)(param_1 + 0x129) = ~bVar1 & 1;
  *(undefined8 *)(param_1 + 0x110) = param_2[1];
  *(undefined8 *)(param_1 + 0x108) = *param_2;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  return;
}


