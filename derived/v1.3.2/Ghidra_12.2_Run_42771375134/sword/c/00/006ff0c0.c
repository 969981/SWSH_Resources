/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ff0c0; name: FUN_006ff0c0
 */


void FUN_006ff0c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_02715880 + 0xa8;
  puVar2 = PTR_DAT_02715880 + 0xe8;
  *param_1 = (long)(PTR_DAT_02715880 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x3d] != 0) {
    (**(code **)(*(long *)(param_1[0x3d] + 0x48) + 0x18))();
    param_1[0x3d] = 0;
  }
  if (param_1[0x3c] != 0) {
    (**(code **)(*(long *)(param_1[0x3c] + 0x48) + 0x18))();
    param_1[0x3c] = 0;
  }
  if (param_1[0x2a] != 0) {
    (**(code **)(*(long *)(param_1[0x2a] + 0x48) + 0x18))();
    param_1[0x2a] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
    param_1[0x24] = 0;
  }
  if (param_1[0x22] != 0) {
    (**(code **)(*(long *)(param_1[0x22] + 0x48) + 0x18))();
    param_1[0x22] = 0;
  }
  if (param_1[0x20] != 0) {
    (**(code **)(*(long *)(param_1[0x20] + 0x48) + 0x18))();
    param_1[0x20] = 0;
  }
  if (param_1[0x1e] != 0) {
    (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
    param_1[0x1e] = 0;
  }
  if (param_1[0x1c] != 0) {
    (**(code **)(*(long *)(param_1[0x1c] + 0x48) + 0x18))();
    param_1[0x1c] = 0;
  }
  if (param_1[0x1a] != 0) {
    (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
    param_1[0x1a] = 0;
  }
  if (param_1[0x18] != 0) {
    (**(code **)(*(long *)(param_1[0x18] + 0x48) + 0x18))();
    param_1[0x18] = 0;
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
  }
  FUN_00700320(param_1);
  return;
}


