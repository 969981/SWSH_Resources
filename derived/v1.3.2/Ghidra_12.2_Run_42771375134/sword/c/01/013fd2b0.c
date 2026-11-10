/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fd2b0; name: FUN_013fd2b0
 */


void FUN_013fd2b0(long param_1,int param_2)

{
  code *pcVar1;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long lStack_80;
  int local_78;
  
  local_a0 = &LAB_013fdd70;
  local_98 = FUN_013fde70;
  local_90 = &LAB_013fde80;
  local_88 = &LAB_013fde90;
  lStack_80 = param_1;
  local_78 = param_2;
  FUN_00ffd030(param_1 + 0x100,*(undefined8 *)(PTR_PTR_027295f8 + (long)param_2 * 0x10 + 8),
               &local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&lStack_80);
  }
  local_c0 = 0x1e757674ecb45b6e;
  local_b8 = "Play_UI_Camp_Cooking_NutsOut";
  local_b0 = 0x1c;
  local_a8 = 0;
  FUN_012d6d40(&local_c0);
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
  }
  return;
}


