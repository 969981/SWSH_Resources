/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012adb00; name: FUN_012adb00
 */


void FUN_012adb00(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[3];
  *param_1 = (long)(PTR_DAT_02727320 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[4];
    if (puVar1 == puVar2) {
      puVar1 = puVar2;
    }
    else {
      do {
        puVar1 = puVar1 + -0xb;
        (**(code **)*puVar1)(puVar1);
      } while (puVar2 != puVar1);
      puVar1 = (undefined8 *)param_1[3];
    }
    param_1[4] = (long)puVar2;
    FUN_017cd7a0(puVar1);
  }
  *param_1 = (long)(PTR_DAT_02727388 + 0x10);
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


