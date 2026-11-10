/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd9870; name: FUN_00bd9870
 */


void FUN_00bd9870(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_0271b850;
  *param_1 = (long)(PTR_DAT_0271b850 + 0x10);
  param_1[9] = (long)(puVar1 + 0xa0);
  param_1[10] = (long)(puVar1 + 0xe0);
  param_1[0xc] = (long)(puVar1 + 0x108);
  FUN_007ad160(*(undefined8 *)PTR_DAT_02716748,param_1 + 799);
  if ((char)param_1[0x150] != '\0') {
    FUN_008e6f10(param_1 + 0x152);
  }
  if (param_1[0x31b] != 0) {
    (**(code **)(*(long *)(param_1[0x31b] + 0x48) + 0x18))();
    param_1[0x31b] = 0;
  }
  if ((char)param_1[0x316] != '\0') {
    *(undefined1 *)(param_1 + 0x316) = 0;
  }
  if ((char)param_1[0x2f2] != '\0') {
    *(undefined1 *)(param_1 + 0x2f2) = 0;
  }
  if ((char)param_1[0x150] != '\0') {
    FUN_01003170(param_1 + 0x152);
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  if ((char)param_1[0x148] != '\0') {
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  if (param_1[0x3b] != 0) {
    (**(code **)(*(long *)(param_1[0x3b] + 0x48) + 0x18))();
    param_1[0x3b] = 0;
  }
  if (param_1[0x3a] != 0) {
    (**(code **)(*(long *)(param_1[0x3a] + 0x48) + 0x18))();
    param_1[0x3a] = 0;
  }
  if ((char)param_1[0xe] != '\0') {
    if (param_1[0x12] != 0) {
      (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
      param_1[0x12] = 0;
    }
    if (param_1[0x10] != 0) {
      (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
      param_1[0x10] = 0;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


