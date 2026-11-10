/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b2da0; name: FUN_007b2da0
 */


void FUN_007b2da0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x13];
  *param_1 = (long)(PTR_DAT_027169b8 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x14];
    if (puVar1 == puVar2) {
      puVar1 = puVar2;
    }
    else {
      do {
        puVar1 = puVar1 + -8;
        (**(code **)*puVar1)(puVar1);
      } while (puVar2 != puVar1);
      puVar1 = (undefined8 *)param_1[0x13];
    }
    param_1[0x14] = (long)puVar2;
    FUN_017cd7a0(puVar1);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    FUN_017cd7a0();
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    FUN_017cd7a0();
  }
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[8];
    if (puVar1 == puVar2) {
      puVar1 = puVar2;
    }
    else {
      do {
        puVar1 = puVar1 + -0xe;
        (**(code **)*puVar1)(puVar1);
      } while (puVar2 != puVar1);
      puVar1 = (undefined8 *)param_1[7];
    }
    param_1[8] = (long)puVar2;
    FUN_017cd7a0(puVar1);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


