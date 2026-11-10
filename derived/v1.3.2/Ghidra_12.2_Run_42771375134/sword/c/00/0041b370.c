/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b370; name: FUN_0041b370
 */


void FUN_0041b370(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_DAT_02712a90;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      if (puVar3[1] == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = puVar3[1];
      }
      uVar1 = *(undefined4 *)puVar2;
      (**(code **)*puVar3)(puVar3);
      FUN_00404870(uVar1,puVar3);
      puVar3 = *(undefined8 **)(param_1 + 0x10);
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}


