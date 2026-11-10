/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a113e0; name: FUN_00a113e0
 */


void FUN_00a113e0(long param_1,char *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  float fVar9;
  ulong local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
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
  
  if (*(long *)(param_1 + 0x1d0) == 0) {
    uVar2 = FUN_00ff93d0();
    lVar3 = FUN_00a11b50(&local_130,uVar2);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x1d0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
    *(long *)(param_1 + 0x1d0) = lVar3;
    sVar4 = strlen(param_2);
    if (sVar4 != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
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
      if (*param_2 == '\0') {
        snprintf((char *)&local_b8,100,"pane_%s","P_body_01");
      }
      else {
        snprintf((char *)&local_b8,100,"pane_%s_%s",param_2,"P_body_01");
      }
      uVar6 = local_b8 & 0xff;
      uVar8 = 0xcbf29ce484222645;
      local_130 = 0xcbf29ce484222645;
      if ((char)local_b8 != '\0') {
        local_130 = 0xcbf29ce484222645;
        pbVar7 = (byte *)((ulong)&local_b8 | 1);
        do {
          local_130 = (local_130 ^ uVar6) * 0x100000001b3;
          bVar1 = *pbVar7;
          uVar6 = (ulong)bVar1;
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
      }
      lVar5 = FUN_0167b6b0(*(undefined8 *)(lVar3 + 0x1b0),&local_130);
      if (lVar5 != 0) {
        fVar9 = *(float *)(lVar5 + 0x54);
        if (*(float *)(lVar5 + 0x54) <= *(float *)(lVar5 + 0x50)) {
          fVar9 = *(float *)(lVar5 + 0x50);
        }
        *(float *)(param_1 + 0x1d8) = fVar9;
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_130 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      local_120 = 0;
      lVar3 = *(long *)(lVar3 + 0x1b0);
      if ((lVar3 != 0) && ((**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(), local_128 != 0)) {
        (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
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
      local_128 = lVar3;
      if (*param_2 == '\0') {
        snprintf((char *)&local_b8,100,"anime_%s","gauge_scale_01");
      }
      else {
        snprintf((char *)&local_b8,100,"anime_%s_%s",param_2,"gauge_scale_01");
      }
      if ((char)local_b8 != '\0') {
        uVar6 = local_b8 & 0xff;
        pbVar7 = (byte *)((ulong)&local_b8 | 1);
        do {
          uVar8 = (uVar8 ^ uVar6) * 0x100000001b3;
          bVar1 = *pbVar7;
          uVar6 = (ulong)bVar1;
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
      }
      local_f8 = uVar8;
      FUN_016a84e0(*(undefined8 *)(param_1 + 0x1d0),&local_130);
      if (local_120 != 0) {
        (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
        local_120 = 0;
      }
      if (local_128 != 0) {
        (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
        local_128 = 0;
      }
      if (local_130 != 0) {
        (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


