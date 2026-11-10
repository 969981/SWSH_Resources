/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e99e0; name: FUN_004e99e0
 */


void FUN_004e99e0(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined4 local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined8 local_60;
  float local_58;
  
  if (*(uint *)(*(long *)(param_3 + 8) + 0x40) < 3) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 8) + 0x38) + 0x10);
  }
  local_70 = *(float *)(lVar3 + 0x78);
  fStack_6c = *(float *)(lVar3 + 0x7c);
  local_90 = *(undefined8 *)(lVar3 + 0x78);
  local_88 = *(float *)(lVar3 + 0x80);
  local_80 = *(undefined4 *)(lVar3 + 0x6c);
  local_7c = *(undefined4 *)(lVar3 + 0x70);
  uStack_78 = *(undefined4 *)(lVar3 + 0x74);
  uStack_84 = 0xffffffff;
  local_a0 = *(undefined4 *)(param_1 + 1);
  local_a8 = *param_1;
  local_9c = *(undefined8 *)((long)param_1 + 0xc);
  local_94 = *(undefined4 *)((long)param_1 + 0x14);
  local_b0 = 0;
  local_ac = 100.0;
  uVar2 = *(uint *)(param_1 + 6);
  local_68 = local_88;
  if (uVar2 < 2) {
    if ((uVar2 == 0) || (lVar3 = *(long *)param_1[5], *(char *)(lVar3 + 0x98) == '\0'))
    goto LAB_004e9b90;
  }
  else {
    plVar4 = (long *)param_1[5];
    lVar5 = 0;
    plVar7 = plVar4;
    fVar9 = DAT_01d4c18c;
    do {
      lVar6 = *plVar7;
      lVar3 = lVar5;
      if (*(char *)(lVar6 + 0x98) != '\0') {
        FUN_004eafa0(&local_60,lVar6,&local_70);
        fVar8 = ((float)local_60 - local_70) * ((float)local_60 - local_70) +
                (local_60._4_4_ - fStack_6c) * (local_60._4_4_ - fStack_6c) +
                (local_58 - local_68) * (local_58 - local_68);
        bVar1 = fVar9 <= fVar8;
        fVar9 = (float)NEON_fminnm(fVar8,fVar9);
        plVar4 = (long *)param_1[5];
        uVar2 = *(uint *)(param_1 + 6);
        lVar3 = lVar6;
        if (bVar1) {
          lVar3 = lVar5;
        }
      }
      plVar7 = plVar7 + 1;
      lVar5 = lVar3;
    } while (plVar7 != plVar4 + uVar2);
  }
  if (lVar3 != 0) {
    FUN_004eb320(&local_60,lVar3,param_1[7],&local_70,*(undefined8 *)(param_3 + 0x30));
    local_90 = local_60;
    local_88 = local_58;
    fVar9 = (float)FUN_004eb070(lVar3,&local_70,&local_80);
    local_ac = DAT_01d4c6b8 - fVar9 * DAT_01d4be7c;
    if (*(long *)(param_3 + 0x30) != param_1[7]) {
      local_ac = fVar9 * DAT_01d4be7c;
    }
  }
LAB_004e9b90:
  local_60 = 0;
  FUN_004e9c00(0,param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 8) + 0x48),&local_70,0,
               &local_60,&local_a8,&local_ac,&local_b0,1,param_4);
  return;
}


