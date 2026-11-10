/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ac130; name: FUN_006ac130
 */


void FUN_006ac130(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_2 + 0x20))();
  puVar1 = (undefined8 *)param_2[3];
  for (puVar2 = (undefined8 *)param_2[2]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_006ac130(param_1,*puVar2);
  }
  return;
}


