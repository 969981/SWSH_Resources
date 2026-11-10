/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152aae0; name: FUN_0152aae0
 */


void FUN_0152aae0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = 0;
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  iVar3 = memcmp(&local_58,(undefined8 *)(param_2 + 0x6830),0x38);
  if (iVar3 == 0) {
    FUN_0102ad30(&local_58);
    *param_1 = local_58;
    param_1[1] = local_50;
    param_1[2] = local_48;
    param_1[5] = local_30;
    param_1[6] = local_28;
    param_1[3] = local_40;
    param_1[4] = local_38;
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x6830);
  uVar4 = *(undefined8 *)(param_2 + 0x6840);
  param_1[1] = *(undefined8 *)(param_2 + 0x6838);
  param_1[2] = uVar4;
  *param_1 = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x6848);
  uVar4 = *(undefined8 *)(param_2 + 0x6850);
  uVar2 = *(undefined8 *)(param_2 + 0x6860);
  param_1[5] = *(undefined8 *)(param_2 + 0x6858);
  param_1[6] = uVar2;
  param_1[3] = uVar1;
  param_1[4] = uVar4;
  return;
}


