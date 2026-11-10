/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ac840; name: FUN_007ac840
 */


undefined8 FUN_007ac840(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_007ae7c0();
    puVar2 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_017cd7a0(puVar2);
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


