/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01323050; name: FUN_01323050
 */


undefined8 FUN_01323050(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 != puVar1) {
    do {
      uVar2 = FUN_01323a30(*puVar3);
      if ((uVar2 & 1) == 0) {
        if ((code *)*param_2 == (code *)0x0) {
LAB_013230b8:
          return *puVar3;
        }
        local_38 = *puVar3;
        uVar2 = (*(code *)*param_2)(param_2 + 4,&local_38);
        if ((uVar2 & 1) != 0) goto LAB_013230b8;
      }
      puVar3 = puVar3 + 4;
    } while (puVar1 != puVar3);
  }
  return 0;
}


