/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01347060; name: FUN_01347060
 */


void FUN_01347060(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  lVar2 = FUN_01311d00();
  uVar3 = FUN_00d3fea0(lVar2 + 0x50);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((uVar3 & 1) == 0) {
    lVar2 = 0;
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_90);
    local_b0 = *param_3;
    local_a8 = (code *)param_3[1];
    local_a0 = param_3[2];
    uStack_98 = param_3[3];
  }
  FUN_012e5260(lVar2,param_2,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  return;
}


