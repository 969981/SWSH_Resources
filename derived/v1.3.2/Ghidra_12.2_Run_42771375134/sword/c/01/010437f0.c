/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010437f0; name: FUN_010437f0
 */


void FUN_010437f0(long param_1,char param_2,char param_3)

{
  char *param3;
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  pcVar1 = "unselect_header_color";
  if (param_2 != '\0') {
    pcVar1 = "select_header_color";
  }
  param3 = (char *)(param_1 + 0x138);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    snprintf((char *)&local_c8,100,"anime_%s",pcVar1);
  }
  else {
    snprintf((char *)&local_c8,100,"anime_%s_%s",param3,pcVar1);
  }
  uVar3 = local_c8 & 0xff;
  uVar7 = 0xcbf29ce484222645;
  uVar5 = 0xcbf29ce484222645;
  if ((char)local_c8 != '\0') {
    uVar5 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_c8 | 1);
    do {
      uVar5 = (uVar5 ^ uVar3) * 0x100000001b3;
      bVar2 = *pbVar4;
      uVar3 = (ulong)bVar2;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_c8 = uVar5;
  FUN_0167bb70(uVar6,&local_c8);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  pcVar1 = "select_header_color";
  if (param_2 != '\0') {
    pcVar1 = "unselect_header_color";
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (*param3 == '\0') {
    snprintf((char *)&local_c8,100,"anime_%s",pcVar1);
  }
  else {
    snprintf((char *)&local_c8,100,"anime_%s_%s",param3,pcVar1);
  }
  if ((char)local_c8 != '\0') {
    local_c8 = local_c8 & 0xff;
    pbVar4 = (byte *)((ulong)&local_c8 | 1);
    do {
      uVar7 = (uVar7 ^ local_c8) * 0x100000001b3;
      bVar2 = *pbVar4;
      local_c8 = (ulong)bVar2;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  local_c8 = uVar7;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x18),&local_c8);
  if (param_3 == '\x01') {
    FUN_0167bf30(*(undefined8 *)(param_1 + 0x18),&local_c8);
    FUN_0167bdb0(*(undefined8 *)(param_1 + 0x18),&local_c8);
  }
  return;
}


