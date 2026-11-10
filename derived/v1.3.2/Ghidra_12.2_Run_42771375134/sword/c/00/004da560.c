/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004da560; name: FUN_004da560
 */


void FUN_004da560(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (*(long **)(param_1 + 0x2b0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2b0) + 0x58))();
    puVar2 = *(undefined8 **)(param_1 + 0x2b0);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar2)(puVar2);
      FUN_00404870(uVar1,puVar2);
    }
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  if (*(long **)(param_1 + 0x2b8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2b8) + 0x58))();
    puVar2 = *(undefined8 **)(param_1 + 0x2b8);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar2)(puVar2);
      FUN_00404870(uVar1,puVar2);
    }
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  if (*(long **)(param_1 + 0x2c0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2c0) + 0x58))();
    puVar2 = *(undefined8 **)(param_1 + 0x2c0);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar2)(puVar2);
      FUN_00404870(uVar1,puVar2);
    }
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  if (*(long **)(param_1 + 0x2c8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2c8) + 0x58))();
    puVar2 = *(undefined8 **)(param_1 + 0x2c8);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar2)(puVar2);
      FUN_00404870(uVar1,puVar2);
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  FUN_004d6d50(param_1);
  FUN_004cd520(param_1 + 0x110);
  return;
}


