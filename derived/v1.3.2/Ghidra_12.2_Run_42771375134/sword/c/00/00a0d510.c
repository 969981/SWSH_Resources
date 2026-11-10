/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0d510; name: FUN_00a0d510
 */


int FUN_00a0d510(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  char *param3;
  ulong uVar8;
  long lVar9;
  undefined8 local_a8;
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
  
  param3 = (char *)(param_1 + 0x18);
  *(undefined8 *)param3 = *param_2;
  uVar4 = param_2[1];
  uVar7 = param_2[2];
  lVar9 = *(long *)(param_1 + 0x10);
  uVar1 = param_2[4];
  uVar8 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x30) = param_2[3];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar4 = param_2[5];
  uVar7 = param_2[6];
  uVar1 = param_2[8];
  *(undefined8 *)(param_1 + 0x50) = param_2[7];
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  uVar7 = param_2[0xb];
  uVar4 = param_2[10];
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x60) = param_2[9];
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  if (*param3 == '\0') {
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
    snprintf((char *)&local_a8,100,"pane_%s","all");
    uVar5 = 0xcbf29ce484222645;
    if ((byte)local_a8 != 0) {
      uVar5 = 0xcbf29ce484222645;
      pbVar6 = (byte *)((ulong)&local_a8 | 1);
      do {
        uVar5 = (uVar5 ^ (byte)local_a8) * 0x100000001b3;
        local_a8._0_1_ = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while ((byte)local_a8 != 0);
    }
  }
  else {
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
    snprintf((char *)&local_a8,100,"pane_%s",param3);
    uVar5 = 0xcbf29ce484222645;
    if ((byte)local_a8 != 0) {
      uVar5 = 0xcbf29ce484222645;
      pbVar6 = (byte *)((ulong)&local_a8 | 1);
      do {
        uVar5 = (uVar5 ^ (byte)local_a8) * 0x100000001b3;
        local_a8._0_1_ = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while ((byte)local_a8 != 0);
    }
  }
  local_a8 = uVar5;
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar9 + 0x1b0),&local_a8);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
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
    snprintf((char *)&local_a8,100,"anime_%s","in");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param3,"in");
  }
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((long)&local_a8 + 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x88) = uVar5;
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
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar3 = snprintf((char *)&local_a8,100,"anime_%s","out");
  }
  else {
    iVar3 = snprintf((char *)&local_a8,100,"anime_%s_%s",param3,"out");
  }
  if ((byte)local_a8 != 0) {
    pbVar6 = (byte *)((long)&local_a8 + 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x90) = uVar8;
  *(byte *)(*(long *)(param_1 + 0x80) + 0x58) = *(byte *)(*(long *)(param_1 + 0x80) + 0x58) & 0xfe;
  return iVar3;
}


