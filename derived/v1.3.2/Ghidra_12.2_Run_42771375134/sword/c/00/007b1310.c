/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b1310; name: FUN_007b1310
 */


void FUN_007b1310(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[2];
  *param_1 = (long)(PTR_DAT_02716928 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[3];
    if (puVar1 == puVar2) {
      puVar1 = puVar2;
    }
    else {
      do {
        puVar1 = puVar1 + -0xe;
        (**(code **)*puVar1)(puVar1);
      } while (puVar2 != puVar1);
      puVar1 = (undefined8 *)param_1[2];
    }
    param_1[3] = (long)puVar2;
    FUN_017cd7a0(puVar1);
  }
  FUN_017cb220(param_1);
  return;
}


