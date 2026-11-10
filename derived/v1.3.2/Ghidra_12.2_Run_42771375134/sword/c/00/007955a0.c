/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007955a0; name: FUN_007955a0
 */


void FUN_007955a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_027164d0 + 0xa8;
  puVar2 = PTR_DAT_027164d0 + 0x118;
  *param_1 = (long)(PTR_DAT_027164d0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x4e] != 0) {
    (**(code **)(*(long *)(param_1[0x4e] + 0x48) + 0x18))();
    param_1[0x4e] = 0;
  }
  if (param_1[0x49] != 0) {
    (**(code **)(*(long *)(param_1[0x49] + 0x48) + 0x18))();
    param_1[0x49] = 0;
  }
  if (param_1[0x45] != 0) {
    (**(code **)(*(long *)(param_1[0x45] + 0x48) + 0x18))();
    param_1[0x45] = 0;
  }
  param_1[0x20] = (long)(PTR_DAT_027164e0 + 0x10);
  if (param_1[0x21] == 0) {
    param_1[0x21] = 0;
    pcVar4 = (code *)param_1[0x33];
  }
  else {
    FUN_006e2100(param_1[0x21],param_1 + 0x20);
    lVar3 = param_1[0x21];
    param_1[0x21] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x33];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar4)(param_1 + 0x36);
  }
  pcVar4 = (code *)param_1[0x23];
  if (pcVar4 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar4)(param_1 + 0x26);
  }
  if (param_1[0x21] != 0) {
    (**(code **)(*(long *)(param_1[0x21] + 0x48) + 0x18))();
    param_1[0x21] = 0;
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
    param_1[0x1f] = 0;
  }
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


