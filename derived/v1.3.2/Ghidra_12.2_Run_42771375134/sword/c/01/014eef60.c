/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014eef60; name: FUN_014eef60
 */


void FUN_014eef60(long param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  char *param3;
  long lVar6;
  ulong uVar7;
  ulong local_b8;
  undefined8 uStack_b0;
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
  undefined4 local_58;
  long local_48;
  
  *(byte *)(*(long *)(param_1 + 0x98) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x98) + 0x58) & 0xfe | param_2 != 0;
  if (param_2 != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    local_58 = 0;
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
    local_b8 = 0;
    uStack_b0 = 0;
    param3 = (char *)(param_1 + 0x20);
    if (*param3 == '\0') {
      snprintf((char *)&local_b8,100,"pane_%s","T_rental_skill_00");
    }
    else {
      snprintf((char *)&local_b8,100,"pane_%s_%s",param3,"T_rental_skill_00");
    }
    uVar7 = 0xcbf29ce484222645;
    uVar3 = 0xcbf29ce484222645;
    if ((byte)local_b8 != 0) {
      uVar3 = 0xcbf29ce484222645;
      pbVar4 = (byte *)((ulong)&local_b8 | 1);
      do {
        uVar3 = (uVar3 ^ (byte)local_b8) * 0x100000001b3;
        local_b8._0_1_ = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while ((byte)local_b8 != 0);
    }
    local_48 = *(long *)(param_1 + 0x88);
    local_b8 = uVar3;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00a429c0(lVar5,&local_b8,&local_48,param_1 + 0x90,0,param_2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar6 = *(long *)(lVar5 + 0x438);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    uVar2 = FUN_00880ae0(param_2);
    FUN_016a7910(lVar6,uVar2,0,*(undefined8 *)(param_1 + 0xa0),0,0);
    local_58 = 0;
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
    local_b8 = 0;
    uStack_b0 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      snprintf((char *)&local_b8,100,"anime_%s","skill_color_pattern");
    }
    else {
      snprintf((char *)&local_b8,100,"anime_%s_%s",param3,"skill_color_pattern");
    }
    if ((byte)local_b8 != '\0') {
      local_b8 = local_b8 & 0xff;
      pbVar4 = (byte *)((ulong)&local_b8 | 1);
      do {
        uVar7 = (uVar7 ^ local_b8) * 0x100000001b3;
        bVar1 = *pbVar4;
        local_b8 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    local_b8 = uVar7;
    bVar1 = FUN_00880ae0(param_2);
    FUN_00ffd510((float)bVar1,lVar5,&local_b8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  return;
}


