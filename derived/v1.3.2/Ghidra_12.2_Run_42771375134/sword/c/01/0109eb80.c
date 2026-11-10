/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109eb80; name: FUN_0109eb80
 */


void FUN_0109eb80(long param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  char *param3;
  long lVar6;
  ulong uVar7;
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
  
  lVar6 = *(long *)(param_1 + 0x138);
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
  param3 = (char *)(param_1 + 0x60);
  if (*param3 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_grptxt_lvup_00");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param3,"P_grptxt_lvup_00");
  }
  uVar3 = local_a8 & 0xff;
  uVar7 = 0xcbf29ce484222645;
  uVar5 = 0xcbf29ce484222645;
  if ((char)local_a8 != '\0') {
    uVar5 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  local_a8 = uVar5;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(lVar6 + 0x2b0),&local_a8);
  if ((*(byte *)(lVar2 + 0x58) & 1) == 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  lVar6 = lVar6 + 0x100;
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
    snprintf((char *)&local_a8,100,"anime_%s","levelup_in");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param3,"levelup_in");
  }
  if ((char)local_a8 != '\0') {
    local_a8 = local_a8 & 0xff;
    pbVar4 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ local_a8) * 0x100000001b3;
      bVar1 = *pbVar4;
      local_a8 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  local_a8 = uVar7;
  FUN_00ffd010(lVar6,&local_a8);
  if ((param_2 & 1) == 0) {
    FUN_00ffd600(lVar6,&local_a8);
    FUN_00ffd510(lVar6,&local_a8);
  }
  return;
}


