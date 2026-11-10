/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01095b70; name: FUN_01095b70
 */


void FUN_01095b70(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *param3;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_b8;
  long local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  param3 = (char *)(param_1 + 0x18);
  if (*param3 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","T_00");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param3,"T_00");
  }
  uVar5 = 0xcbf29ce484222645;
  uVar3 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar3 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar3 = (uVar3 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while ((byte)local_a8 != 0);
  }
  local_b0 = *(long *)(param_1 + 0x80);
  local_a8 = uVar3;
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
  }
  if (*param_2 - 1 < 0x11) {
    local_b8 = *(undefined8 *)(&DAT_02163720 + (long)(char)(*param_2 - 1) * 8);
  }
  else {
    local_b8 = 0x9e088f7197883b11;
  }
  FUN_008c4e70(uVar4,&local_a8,&local_b0,&local_b8,10);
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  if (*param3 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","ptn_comp");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param3,"ptn_comp");
  }
  if ((byte)local_a8 != '\0') {
    local_a8 = local_a8 & 0xff;
    pbVar2 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ local_a8) * 0x100000001b3;
      bVar1 = *pbVar2;
      local_a8 = (ulong)bVar1;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  uVar6 = NEON_ucvtf((uint)param_2[1]);
  local_a8 = uVar5;
  FUN_00ffd510(uVar6,uVar4,&local_a8);
  return;
}


