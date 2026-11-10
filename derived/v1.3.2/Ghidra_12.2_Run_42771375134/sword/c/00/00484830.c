/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00484830; name: FUN_00484830
 */


void FUN_00484830(undefined8 param_1,long *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  float *pfVar5;
  float *pfVar6;
  byte *pbVar7;
  ulong uVar8;
  int iVar9;
  size_t sVar10;
  float fVar11;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_02712a90;
  fVar11 = (float)param_1;
  if ((param_3 < 0x1b) && ((1 << (ulong)(param_3 & 0x1f) & 0x7f8003fU) != 0)) {
    local_80 = (ulong)local_80._4_4_ << 0x20;
    pfVar5 = (float *)param_2[0x12];
    pfVar6 = pfVar5;
    if (pfVar5 != (float *)0x0) {
      uVar8 = 0;
      pfVar6 = (float *)((long)pfVar5 + ((ulong)(*(byte *)pfVar5 + 4) & 0x1fc));
      do {
        if ((uint)*(byte *)((long)pfVar5 + uVar8 + 1) == (param_3 & 0xff)) goto LAB_004848c0;
        uVar8 = uVar8 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar8 < *(byte *)pfVar5);
      pfVar6 = (float *)0x0;
    }
LAB_004848c0:
    pfVar5 = (float *)&local_80;
    if (pfVar6 != (float *)0x0) {
      pfVar5 = pfVar6;
    }
    if (fVar11 - *pfVar5 == 0.0) {
      return;
    }
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0xff;
    local_68 = 0xff;
    local_58 = 0;
    (**(code **)(*param_2 + 0xc0))
              (param_2,*(undefined4 *)(PTR_DAT_02712b48 + (ulong)param_3 * 4),&local_80,0);
    pbVar7 = (byte *)param_2[0x12];
    if (pbVar7 == (byte *)0x0) goto LAB_00484af4;
    sVar10 = (size_t)*pbVar7;
    uVar8 = 0;
    pfVar6 = (float *)(pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc));
    do {
      if ((uint)pbVar7[uVar8 + 1] == (param_3 & 0xff)) goto LAB_00484afc;
      uVar8 = uVar8 + 1;
      pfVar6 = pfVar6 + 1;
    } while (uVar8 < sVar10);
  }
  else if ((param_3 & 0xfffffffe) == 0xc) {
    local_80 = (ulong)local_80._4_4_ << 0x20;
    pfVar5 = (float *)param_2[0x12];
    pfVar6 = pfVar5;
    if (pfVar5 != (float *)0x0) {
      uVar8 = 0;
      pfVar6 = (float *)((long)pfVar5 + ((ulong)(*(byte *)pfVar5 + 4) & 0x1fc));
      do {
        if ((uint)*(byte *)((long)pfVar5 + uVar8 + 1) == (param_3 & 0xff)) goto LAB_004849ac;
        uVar8 = uVar8 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar8 < *(byte *)pfVar5);
      pfVar6 = (float *)0x0;
    }
LAB_004849ac:
    pfVar5 = (float *)&local_80;
    if (pfVar6 != (float *)0x0) {
      pfVar5 = pfVar6;
    }
    if (fVar11 - *pfVar5 == 0.0) {
      return;
    }
    (**(code **)(*param_2 + 0x1f8))
              (param_2,*(undefined4 *)(PTR_DAT_02712b48 + (ulong)param_3 * 4),0,0);
    pbVar7 = (byte *)param_2[0x12];
    if (pbVar7 == (byte *)0x0) {
LAB_00484af4:
      sVar10 = 0;
    }
    else {
      sVar10 = (size_t)*pbVar7;
      uVar8 = 0;
      pfVar6 = (float *)(pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc));
      do {
        if ((uint)pbVar7[uVar8 + 1] == (param_3 & 0xff)) goto LAB_00484afc;
        uVar8 = uVar8 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar8 < sVar10);
    }
  }
  else {
    if (param_3 != 0xe) {
      local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(PTR_DAT_02712b40 + (ulong)param_3 * 4));
      pbVar7 = (byte *)param_2[0x12];
      if (pbVar7 != (byte *)0x0) {
        uVar8 = 0;
        pfVar6 = (float *)(pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc));
        do {
          if ((uint)pbVar7[uVar8 + 1] == (param_3 & 0xff)) goto LAB_00484bfc;
          uVar8 = uVar8 + 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar8 < *pbVar7);
      }
      pfVar6 = (float *)0x0;
LAB_00484bfc:
      pfVar5 = (float *)&local_80;
      if (pfVar6 != (float *)0x0) {
        pfVar5 = pfVar6;
      }
      if (*pfVar5 == fVar11) {
        return;
      }
      if (pbVar7 == (byte *)0x0) {
        sVar10 = 0;
      }
      else {
        sVar10 = (size_t)*pbVar7;
        uVar8 = 0;
        pfVar6 = (float *)(pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc));
        do {
          if ((uint)pbVar7[uVar8 + 1] == (param_3 & 0xff)) {
            if (pfVar6 != (float *)0x0) goto LAB_00484ce4;
            break;
          }
          uVar8 = uVar8 + 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar8 < sVar10);
      }
      iVar9 = (int)sVar10;
      uVar2 = iVar9 + 5U & 0x1fc;
      lVar1 = sVar10 + 1;
      puVar4 = (undefined1 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)lVar1 * 4);
      if (puVar4 != (undefined1 *)0x0) {
        if (param_2[0x12] != 0) {
          memcpy(puVar4 + 1,(void *)(param_2[0x12] + 1),sVar10);
          memcpy(puVar4 + uVar2,(void *)(param_2[0x12] + (ulong)(iVar9 + 4U & 0x1fc)),
                 (ulong)(uint)(iVar9 << 2));
          FUN_00404870(*(undefined4 *)puVar3,param_2[0x12]);
        }
        pfVar6 = (float *)(puVar4 + sVar10 * 4 + (ulong)uVar2);
        puVar4[lVar1] = (char)param_3;
        *puVar4 = (char)lVar1;
        param_2[0x12] = (long)puVar4;
        if (pfVar6 != (float *)0x0) {
LAB_00484ce4:
          *pfVar6 = fVar11;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00484d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x180))(param_2,0);
      return;
    }
    local_80 = (ulong)local_80._4_4_ << 0x20;
    pfVar5 = (float *)param_2[0x12];
    pfVar6 = pfVar5;
    if (pfVar5 != (float *)0x0) {
      uVar8 = 0;
      pfVar6 = (float *)((long)pfVar5 + ((ulong)(*(byte *)pfVar5 + 4) & 0x1fc));
      do {
        if (*(byte *)((long)pfVar5 + uVar8 + 1) == 0xe) goto LAB_00484a78;
        uVar8 = uVar8 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar8 < *(byte *)pfVar5);
      pfVar6 = (float *)0x0;
    }
LAB_00484a78:
    pfVar5 = (float *)&local_80;
    if (pfVar6 != (float *)0x0) {
      pfVar5 = pfVar6;
    }
    if (fVar11 - *pfVar5 == 0.0) {
      return;
    }
    (**(code **)(*param_2 + 0x1f8))(param_1,param_2,0x18,0,0);
    pbVar7 = (byte *)param_2[0x12];
    if (pbVar7 == (byte *)0x0) goto LAB_00484af4;
    sVar10 = (size_t)*pbVar7;
    uVar8 = 0;
    pfVar6 = (float *)(pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc));
    do {
      if (pbVar7[uVar8 + 1] == 0xe) goto LAB_00484afc;
      uVar8 = uVar8 + 1;
      pfVar6 = pfVar6 + 1;
    } while (uVar8 < sVar10);
  }
LAB_00484b00:
  puVar3 = PTR_DAT_02712a90;
  iVar9 = (int)sVar10;
  uVar2 = iVar9 + 5U & 0x1fc;
  lVar1 = sVar10 + 1;
  puVar4 = (undefined1 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)lVar1 * 4);
  if (puVar4 == (undefined1 *)0x0) {
    return;
  }
  if (param_2[0x12] != 0) {
    memcpy(puVar4 + 1,(void *)(param_2[0x12] + 1),sVar10);
    memcpy(puVar4 + uVar2,(void *)(param_2[0x12] + (ulong)(iVar9 + 4U & 0x1fc)),
           (ulong)(uint)(iVar9 << 2));
    FUN_00404870(*(undefined4 *)puVar3,param_2[0x12]);
  }
  pfVar6 = (float *)(puVar4 + sVar10 * 4 + (ulong)uVar2);
  puVar4[lVar1] = (char)param_3;
  *puVar4 = (char)lVar1;
  param_2[0x12] = (long)puVar4;
  if (pfVar6 == (float *)0x0) {
    return;
  }
LAB_00484b88:
  *pfVar6 = fVar11;
  return;
LAB_00484afc:
  if (pfVar6 != (float *)0x0) goto LAB_00484b88;
  goto LAB_00484b00;
}


