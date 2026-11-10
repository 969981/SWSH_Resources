/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01399c30; name: FUN_01399c30
 */


void FUN_01399c30(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 auStack_18 [8];
  
  puVar1 = PTR_DAT_02728d78 + 0xb8;
  puVar2 = PTR_DAT_02728d78 + 0x128;
  *param_1 = (long)(PTR_DAT_02728d78 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xd4] != 0) {
    FUN_015bee50(param_1[0xd4],auStack_18);
    FUN_00794740();
  }
  if (param_1[0x101] != 0) {
    FUN_00794740();
    if (param_1[0x101] != 0) {
      (**(code **)(*(long *)(param_1[0x101] + 0x48) + 0x18))();
      param_1[0x101] = 0;
    }
  }
  pcVar3 = (code *)param_1[0xf1];
  if (pcVar3 != (code *)0x0) {
    param_1[0xf3] = 0;
    param_1[0xf2] = 0;
    param_1[0xf1] = 0;
    param_1[0xf0] = 0;
    (*pcVar3)(param_1 + 0xf4);
  }
  pcVar3 = (code *)param_1[0xe1];
  if (pcVar3 != (code *)0x0) {
    param_1[0xe3] = 0;
    param_1[0xe2] = 0;
    param_1[0xe1] = 0;
    param_1[0xe0] = 0;
    (*pcVar3)(param_1 + 0xe4);
  }
  FUN_01399d70(param_1 + 0xd5);
  if (param_1[0xd4] != 0) {
    (**(code **)(*(long *)(param_1[0xd4] + 0x48) + 0x18))();
    param_1[0xd4] = 0;
  }
  FUN_01377130(param_1 + 0x10);
  puVar1 = PTR_DAT_02715098 + 0x90;
  puVar2 = PTR_DAT_02715098 + 0x100;
  *param_1 = (long)(PTR_DAT_02715098 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  puVar1 = PTR_DAT_027150a0 + 0x50;
  puVar2 = PTR_DAT_027150a0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027150a0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


