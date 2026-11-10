/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c56970; name: FUN_00c56970
 */


void FUN_00c56970(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  *param_1 = 0xcbf29ce484222645;
  param_1[1] = &DAT_01d38550;
  param_1[5] = 0xcbf29ce484222645;
  param_1[6] = &DAT_01d38550;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_50 = 0xddcf2c31dadbab65;
  local_48 = "PostEvent";
  local_40 = 9;
  local_38 = 0;
  uVar2 = FUN_006a1d60(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar2 & 0xff) != 0) {
    FUN_006a1fe0(&local_50,param_2,uVar2);
    *param_1 = local_50;
    param_1[1] = local_48;
    param_1[2] = local_40;
    if (param_1[3] != 0) {
      (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
      param_1[3] = 0;
    }
    param_1[3] = local_38;
  }
  local_50 = 0x414d79c394373f2f;
  local_48 = "Attribute";
  local_40 = 9;
  local_38 = 0;
  uVar2 = FUN_006a1d60(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar2 & 0xff) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_006a1f50(param_2,uVar2);
    bVar1 = bVar1 & 1;
  }
  *(byte *)(param_1 + 4) = bVar1;
  local_50 = 0x41cf93aa9130942f;
  local_48 = "Fllow";
  local_40 = 5;
  local_38 = 0;
  uVar2 = FUN_006a1d60(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar2 & 0xff) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_006a1f50(param_2,uVar2);
    bVar1 = bVar1 & 1;
  }
  *(byte *)((long)param_1 + 0x21) = bVar1;
  local_50 = 0x898cad3048cf9517;
  local_48 = "Joint";
  local_40 = 5;
  local_38 = 0;
  uVar2 = FUN_006a1d60(param_2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar2 & 0xff) != 0) {
    FUN_006a1fe0(&local_50,param_2,uVar2);
    param_1[5] = local_50;
    param_1[6] = local_48;
    param_1[7] = local_40;
    if (param_1[8] != 0) {
      (**(code **)(*(long *)(param_1[8] + 0x48) + 0x18))();
      param_1[8] = 0;
    }
    param_1[8] = local_38;
  }
  return;
}


