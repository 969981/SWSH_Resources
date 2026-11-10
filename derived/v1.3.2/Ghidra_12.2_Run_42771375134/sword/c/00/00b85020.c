/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b85020; name: FUN_00b85020
 */


long FUN_00b85020(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,
                 undefined4 *param_13)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [96];
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x220,0x10);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar4 = *param_3;
  uVar5 = *param_4;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_d0);
    local_f0 = *param_5;
    local_e8 = (code *)param_5[1];
    local_e0 = param_5[2];
    uStack_d8 = param_5[3];
  }
  local_160 = 0;
  local_170 = 0;
  local_158 = 0;
  local_168 = (code *)0x0;
  if ((code *)param_6[2] != (code *)0x0) {
    (*(code *)param_6[2])(param_6 + 4,auStack_150);
    local_170 = *param_6;
    local_168 = (code *)param_6[1];
    local_160 = param_6[2];
    local_158 = param_6[3];
  }
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = (code *)0x0;
  if ((code *)param_7[2] != (code *)0x0) {
    (*(code *)param_7[2])(param_7 + 4,auStack_1d0);
    local_1f0 = *param_7;
    local_1e8 = (code *)param_7[1];
    local_1e0 = param_7[2];
    uStack_1d8 = param_7[3];
  }
  FUN_00ab0770(*param_8,*param_9,*param_10,*param_11,lVar3,uVar4,uVar5,&local_f0,&local_170,
               &local_1f0,*param_12,*param_13);
  pcVar1 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    (*pcVar1)(auStack_1d0);
  }
  pcVar1 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar1)(auStack_150);
  }
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x220;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return lVar3;
}


