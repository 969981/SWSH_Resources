/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c04d20; name: FUN_00c04d20
 */


void FUN_00c04d20(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong local_18;
  
  switch(param_1) {
  case 0:
    uVar1 = *param_3;
    local_18 = 0x41e1fbeefbd8;
    break;
  case 1:
    uVar1 = *param_3;
    local_18 = 0x42e1fbeefd8b;
    break;
  case 2:
    uVar1 = *param_3;
    local_18 = 0x43e1fbeeff3e;
    break;
  case 3:
    uVar1 = *param_3;
    local_18 = 0x44e1fbef00f1;
    break;
  case 4:
    uVar1 = *param_3;
    local_18 = 0x45e1fbef02a4;
    break;
  default:
    goto switchD_00c04d48_default;
  }
  local_18 = local_18 | 0x2432000000000000;
  FUN_0077eb10(uVar1,&local_18,*param_2);
switchD_00c04d48_default:
  return;
}


