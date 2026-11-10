/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008afd50; name: FUN_008afd50
 */


void FUN_008afd50(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_68 [5];
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_68[2] = DAT_02144c58;
  local_68[3] = DAT_02144c60;
  local_68[0] = DAT_02144c48;
  local_68[1] = DAT_02144c50;
  local_38 = DAT_02144c78;
  local_68[4] = DAT_02144c68;
  uStack_40 = DAT_02144c70;
  *(undefined8 *)(param_1 + 0x80) = 0x300000002;
  if (*(int *)(*(long *)(param_1 + 0xa0) + (long)*(int *)(*(long *)(param_1 + 0xa0) + 0x640) * 4 +
              0x64c) == 5) {
    local_68[0] = 0x5d35bdd8a373d7ff;
    *(undefined4 *)(param_1 + 0x80) = 6;
  }
  uVar2 = FUN_008c7c50();
  if ((uVar2 & 1) == 0) {
    uVar2 = 2;
    uVar3 = FUN_008c7c60(*(undefined8 *)(param_1 + 0xa0));
  }
  else {
    local_68[2] = 0x5d35bcd8a373d64c;
    uVar2 = 3;
    *(undefined4 *)(param_1 + 0x88) = 4;
    uVar3 = FUN_008c7c60(*(undefined8 *)(param_1 + 0xa0));
  }
  if ((uVar3 & 1) != 0) {
    local_68[uVar2] = 0x5d35bad8a373d2e6;
    lVar1 = uVar2 * 4;
    uVar2 = (ulong)((int)uVar2 + 1);
    *(undefined4 *)(param_1 + lVar1 + 0x80) = 5;
  }
  local_68[uVar2] = 0x5d35bbd8a373d499;
  *(undefined4 *)(param_1 + uVar2 * 4 + 0x80) = 7;
  FUN_008c86c0(*(undefined8 *)(param_1 + 0xa0),local_68,0);
  FUN_008c8930(*(undefined8 *)(param_1 + 0xa0),(int)uVar2 + 1);
  FUN_008c8a30(*(undefined8 *)(param_1 + 0xa0),uVar2);
  return;
}


