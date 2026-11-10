/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fd140; name: FUN_013fd140
 */


void FUN_013fd140(long param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long lStack_c0;
  int local_b8;
  ulong local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  local_60 = 0xc069dbfd32deed09;
  local_58 = "Play_UI_Camp_Cooking_NutsOnBoard";
  local_50 = 0x20;
  local_48 = 0;
  FUN_012d6d40(&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_60 = 0xcbf29ce484222645;
  pbVar4 = *(byte **)(PTR_PTR_027295f0 + (long)param_2 * 8);
  bVar1 = *pbVar4;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    local_60 = (local_60 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar4;
  }
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_60);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
  local_e0 = &LAB_013fdca0;
  local_d8 = FUN_013fdd40;
  local_d0 = &LAB_013fdd50;
  local_c8 = &LAB_013fdd60;
  lStack_c0 = param_1;
  local_b8 = param_2;
  FUN_00ffd030(param_1 + 0x100,*(undefined8 *)(PTR_PTR_027295f8 + (long)param_2 * 0x10),&local_e0);
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar2)(&lStack_c0);
  }
  FUN_0141bdf0(param_1 + (long)param_2 * 0x3d0 + 0x5e0,param_3);
  return;
}


