/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0114ed80; name: FUN_0114ed80
 */


void FUN_0114ed80(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02724cc0 + 0x78;
  puVar2 = PTR_DAT_02724cc0 + 0xb8;
  *param_1 = (long)(PTR_DAT_02724cc0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x1d] != 0) {
    (**(code **)(*(long *)(param_1[0x1d] + 0x48) + 0x18))();
    param_1[0x1d] = 0;
  }
  if (param_1[0x1c] != 0) {
    (**(code **)(*(long *)(param_1[0x1c] + 0x48) + 0x18))();
    param_1[0x1c] = 0;
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)(param_1[0x1b] + 0x48) + 0x18))();
    param_1[0x1b] = 0;
  }
  if (param_1[0x1a] != 0) {
    (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
    param_1[0x1a] = 0;
  }
  lVar3 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x38) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 0x38) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 0x38) = 0;
    }
    if (*(long *)(lVar3 + 0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 0x28) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 0x28) = 0;
    }
    if (*(long *)(lVar3 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 8) = 0;
    }
    (**(code **)(*(long *)param_1[0x17] + 0x18))
              ((long *)param_1[0x17],lVar3,param_1[0x18],param_1[0x19]);
  }
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
    param_1[0x15] = 0;
  }
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
    param_1[0x14] = 0;
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  FUN_01018d40(param_1);
  return;
}


