/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141e150; name: FUN_0141e150
 */


undefined8 FUN_0141e150(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if (*(code **)(param_2 + 0x2c0) != (code *)0x0) {
    (**(code **)(param_2 + 0x2c0))(param_2 + 0x2d0,auStack_90);
    local_b0 = *(undefined8 *)(param_2 + 0x2b0);
    local_a8 = *(code **)(param_2 + 0x2b8);
    local_a0 = *(undefined8 *)(param_2 + 0x2c0);
    uStack_98 = *(undefined8 *)(param_2 + 0x2c8);
  }
  uVar2 = FUN_0141d800(uVar3,param_2,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_0141e220(param_1 + 0x80);
    if ((uVar2 & 1) == 0) {
      FUN_0141db50(param_1 + 0x80,param_2);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


