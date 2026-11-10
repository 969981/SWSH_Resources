/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012285c0; name: FUN_012285c0
 */


void FUN_012285c0(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[0x23];
  *param_1 = (long)(PTR_DAT_027260e0 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x24];
    if (puVar2 == puVar3) {
      puVar2 = puVar3;
    }
    else {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar3 != puVar2);
      puVar2 = (undefined8 *)param_1[0x23];
    }
    param_1[0x24] = (long)puVar3;
    FUN_017cd7a0(puVar2);
  }
  puVar3 = (undefined8 *)param_1[0x1e];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x1f];
    if (puVar2 == puVar3) {
      puVar2 = puVar3;
    }
    else {
      do {
        puVar2 = puVar2 + -7;
        (**(code **)*puVar2)(puVar2);
      } while (puVar3 != puVar2);
      puVar2 = (undefined8 *)param_1[0x1e];
    }
    param_1[0x1f] = (long)puVar3;
    FUN_017cd7a0(puVar2);
  }
  puVar3 = (undefined8 *)param_1[0x1b];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x1c];
    if (puVar2 == puVar3) {
      puVar2 = puVar3;
    }
    else {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar3 != puVar2);
      puVar2 = (undefined8 *)param_1[0x1b];
    }
    param_1[0x1c] = (long)puVar3;
    FUN_017cd7a0(puVar2);
  }
  puVar1 = PTR_DAT_02726100 + 0x10;
  param_1[0x14] = (long)puVar1;
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    FUN_017cd7a0();
  }
  param_1[0xf] = (long)puVar1;
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    FUN_017cd7a0();
  }
  FUN_017e37d0(param_1 + 8);
  param_1[2] = (long)(PTR_DAT_027167e8 + 0x10);
  FUN_017d0720(param_1 + 2);
  return;
}


