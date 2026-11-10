/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109e8b0; name: FUN_0109e8b0
 */


void FUN_0109e8b0(long param_1,undefined4 param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *param3;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_c0;
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
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x138) + 0x2b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar6 + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  lVar9 = *(long *)(param_1 + 0x138);
  uStack_c0 = *(undefined8 *)(lVar9 + 0x690);
  lVar6 = *(long *)(lVar9 + 0x2b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar6 + 0x2e0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  FUN_014ca220(lVar7,1,param_2,7,0,1);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x130),&uStack_c0,lVar5);
  lVar6 = *(long *)(lVar9 + 0x2b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
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
  param3 = (char *)(param_1 + 0x60);
  if (*param3 == '\0') {
    snprintf((char *)&local_b8,100,"pane_%s","T_exp_00");
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",param3,"T_exp_00");
  }
  uVar2 = local_b8 & 0xff;
  uVar8 = 0xcbf29ce484222645;
  uVar4 = 0xcbf29ce484222645;
  if ((char)local_b8 != '\0') {
    uVar4 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar4 = (uVar4 ^ uVar2) * 0x100000001b3;
      bVar1 = *pbVar3;
      uVar2 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_b8 = uVar4;
  FUN_0167cce0(lVar6,&local_b8,10);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
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
  if (*param3 == '\0') {
    snprintf((char *)&local_b8,100,"anime_%s","exp_in");
  }
  else {
    snprintf((char *)&local_b8,100,"anime_%s_%s",param3,"exp_in");
  }
  if ((char)local_b8 != '\0') {
    local_b8 = local_b8 & 0xff;
    pbVar3 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar8 = (uVar8 ^ local_b8) * 0x100000001b3;
      bVar1 = *pbVar3;
      local_b8 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_b8 = uVar8;
  FUN_00ffd010(lVar9 + 0x100,&local_b8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


