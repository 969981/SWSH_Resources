/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6650; name: FUN_00df6650
 */


void FUN_00df6650(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0271ee38 + 0x48;
  *param_1 = (long)(PTR_DAT_0271ee38 + 0x10);
  param_1[9] = (long)puVar1;
  lVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = param_1[0x17];
  param_1[0x17] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = param_1[0x27];
  param_1[0x27] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    if (param_1[0x27] != 0) {
      (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
      param_1[0x27] = 0;
    }
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  if (param_1[0x1d] != 0) {
    (**(code **)(*(long *)(param_1[0x1d] + 0x48) + 0x18))();
    param_1[0x1d] = 0;
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
    param_1[0x14] = 0;
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  return;
}


