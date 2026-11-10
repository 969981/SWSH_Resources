/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b86390; name: FUN_00b86390
 */


long FUN_00b86390(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 *param_6,undefined8 *param_7,undefined4 *param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
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
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x1c0,0x10);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar4 = *param_3;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,auStack_d0);
    local_f0 = *param_4;
    local_e8 = (code *)param_4[1];
    local_e0 = param_4[2];
    uStack_d8 = param_4[3];
  }
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_150);
    local_170 = *param_5;
    local_168 = (code *)param_5[1];
    local_160 = param_5[2];
    uStack_158 = param_5[3];
  }
  FUN_00ab0b10(*param_6,*param_7,lVar3,uVar4,&local_f0,&local_170,*param_8);
  pcVar1 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
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
  *(undefined8 *)(lVar3 + 0x18) = 0x1c0;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return lVar3;
}


