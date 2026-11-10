/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01196700; name: FUN_01196700
 */


uint FUN_01196700(long param_1,int param_2)

{
  uint uVar1;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 local_84;
  undefined1 local_70;
  undefined1 local_5c;
  undefined1 local_48;
  undefined1 local_34;
  undefined8 local_20;
  undefined2 local_18;
  
  if (param_2 == 0) {
    return 0;
  }
  local_a0 = 0xea75;
  local_a8 = 2;
  switch(param_2) {
  case 1:
    goto switchD_01196728_caseD_1;
  case 2:
    local_a0 = 0xea61;
    break;
  case 3:
    local_a0 = 0xea62;
    break;
  case 4:
    local_a0 = 0xea63;
    break;
  case 5:
    local_a0 = 0xea64;
    local_a8 = 4;
    goto switchD_01196728_caseD_1;
  default:
    local_a0 = 0xea65;
  }
  local_a8 = 2;
switchD_01196728_caseD_1:
  local_9c = 8;
  local_98 = 0;
  local_84 = 0;
  local_70 = 0;
  local_5c = 0;
  local_48 = 0;
  local_34 = 0;
  local_20 = *(undefined8 *)(param_1 + 0x74);
  local_18 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a4 = local_a8;
  uVar1 = FUN_011fcfc0(*(undefined8 *)PTR_DAT_02718f20,&local_a8,&uStack_b0,&local_b8,0);
  return uVar1 & 1;
}


