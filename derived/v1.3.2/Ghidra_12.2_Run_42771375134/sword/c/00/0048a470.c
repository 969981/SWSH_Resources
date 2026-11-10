/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048a470; name: FUN_0048a470
 */


void FUN_0048a470(undefined8 param_1,long param_2)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    do {
      puVar2 = puVar1 + 1;
      FUN_0048a4d0(param_1,*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 8)
            );
  }
  return;
}


