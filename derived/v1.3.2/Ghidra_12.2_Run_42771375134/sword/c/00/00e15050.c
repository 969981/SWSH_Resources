/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e15050; name: FUN_00e15050
 */


void FUN_00e15050(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb0);
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3 != puVar1) {
    do {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x30))();
      if (lVar2 != 0) {
        local_38 = lVar2;
        (*(code *)*param_2)(param_2 + 4,&local_38);
      }
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
  }
  return;
}


