/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115c300; name: FUN_0115c300
 */


void FUN_0115c300(long param_1,char param_2)

{
  undefined8 uVar1;
  ulong local_28;
  
  if (param_2 == '\x02') {
    uVar1 = *(undefined8 *)(param_1 + 0x5d0);
    local_28 = 0x27a0ffd3a5bf;
  }
  else if (param_2 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x5d0);
    local_28 = 0x28a0ffd3a772;
  }
  else {
    if (param_2 != '\0') {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x5d0);
    local_28 = 0x29a0ffd3a925;
  }
  local_28 = local_28 | 0x437d000000000000;
  FUN_0077eb10(uVar1,&local_28,*(undefined8 *)(param_1 + 0x708));
  uVar1 = FUN_0077d470(*(undefined8 *)(param_1 + 0x708));
  FUN_00ffd6a0(param_1 + 0x100,"pane_T_net_title_00",uVar1,10);
  return;
}


