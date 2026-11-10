/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014461c0; name: FUN_014461c0
 */


void FUN_014461c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  *param_1 = (long)&PTR_FUN_026a18e0;
  param_1[9] = (long)&PTR_LAB_026a1948;
  param_1[10] = (long)&PTR_LAB_026a1988;
  if (param_1[0x78] != 0) {
    (**(code **)(*(long *)(param_1[0x78] + 0x48) + 0x18))();
    param_1[0x78] = 0;
  }
  puVar1 = PTR_DAT_027299b8 + 0x78;
  puVar2 = PTR_DAT_027299b8 + 0xb8;
  *param_1 = (long)(PTR_DAT_027299b8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  pcVar3 = (code *)param_1[0x67];
  if (pcVar3 != (code *)0x0) {
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    param_1[0x67] = 0;
    param_1[0x66] = 0;
    (*pcVar3)(param_1 + 0x6a);
  }
  pcVar3 = (code *)param_1[0x55];
  if (pcVar3 != (code *)0x0) {
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    (*pcVar3)(param_1 + 0x58);
  }
  pcVar3 = (code *)param_1[0x45];
  if (pcVar3 != (code *)0x0) {
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    (*pcVar3)(param_1 + 0x48);
  }
  pcVar3 = (code *)param_1[0x35];
  if (pcVar3 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar3)(param_1 + 0x38);
  }
  pcVar3 = (code *)param_1[0x25];
  if (pcVar3 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar3)(param_1 + 0x28);
  }
  pcVar3 = (code *)param_1[0x15];
  if (pcVar3 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar3)(param_1 + 0x18);
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
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


