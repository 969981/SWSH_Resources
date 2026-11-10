/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004538d0; name: FUN_004538d0
 */


void FUN_004538d0(undefined8 param_1,long *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  float *pfVar5;
  float *pfVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  size_t __n;
  float fVar10;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  fVar10 = (float)param_1;
  if (param_3 < 6) {
    local_80 = (ulong)local_80._4_4_ << 0x20;
    pfVar5 = (float *)param_2[0x12];
    pfVar6 = pfVar5;
    if (pfVar5 != (float *)0x0) {
      uVar9 = 0;
      pfVar6 = (float *)((long)pfVar5 + ((ulong)(*(byte *)pfVar5 + 4) & 0x1fc));
      do {
        if ((uint)*(byte *)((long)pfVar5 + uVar9 + 1) == (param_3 & 0xff)) goto LAB_00453948;
        uVar9 = uVar9 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar9 < *(byte *)pfVar5);
      pfVar6 = (float *)0x0;
    }
LAB_00453948:
    pfVar5 = (float *)&local_80;
    if (pfVar6 != (float *)0x0) {
      pfVar5 = pfVar6;
    }
    if (fVar10 - *pfVar5 == 0.0) {
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
    puVar3 = (undefined4 *)PTR_DAT_02712a90;
    pbVar7 = (byte *)param_2[0x12];
    if (pbVar7 == (byte *)0x0) {
      __n = 0;
    }
    else {
      __n = (size_t)*pbVar7;
      uVar9 = 0;
      pfVar6 = (float *)(pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc));
      do {
        if ((uint)pbVar7[uVar9 + 1] == (param_3 & 0xff)) {
          if (pfVar6 != (float *)0x0) goto LAB_00453bb4;
          break;
        }
        uVar9 = uVar9 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar9 < __n);
    }
    uVar2 = (int)__n + 5U & 0x1fc;
    lVar1 = __n + 1;
    puVar4 = (undefined1 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)lVar1 * 4);
    if (puVar4 == (undefined1 *)0x0) {
      return;
    }
    lVar8 = param_2[0x12];
  }
  else {
    if (2 < param_3 - 0xc) {
      FUN_00484830(param_1,param_2,param_3);
      return;
    }
    local_80 = (ulong)local_80._4_4_ << 0x20;
    pfVar5 = (float *)param_2[0x12];
    pfVar6 = pfVar5;
    if (pfVar5 != (float *)0x0) {
      uVar9 = 0;
      pfVar6 = (float *)((long)pfVar5 + ((ulong)(*(byte *)pfVar5 + 4) & 0x1fc));
      do {
        if ((uint)*(byte *)((long)pfVar5 + uVar9 + 1) == (param_3 & 0xff)) goto LAB_00453a34;
        uVar9 = uVar9 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar9 < *(byte *)pfVar5);
      pfVar6 = (float *)0x0;
    }
LAB_00453a34:
    pfVar5 = (float *)&local_80;
    if (pfVar6 != (float *)0x0) {
      pfVar5 = pfVar6;
    }
    if (fVar10 - *pfVar5 == 0.0) {
      return;
    }
    (**(code **)(*param_2 + 0x1f8))
              (param_1,param_2,*(undefined4 *)(PTR_DAT_02712b48 + (ulong)param_3 * 4),0,0);
    puVar3 = (undefined4 *)PTR_DAT_02712a90;
    pbVar7 = (byte *)param_2[0x12];
    if (pbVar7 == (byte *)0x0) {
      __n = 0;
    }
    else {
      __n = (size_t)*pbVar7;
      uVar9 = 0;
      pfVar6 = (float *)(pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc));
      do {
        if ((uint)pbVar7[uVar9 + 1] == (param_3 & 0xff)) {
          if (pfVar6 != (float *)0x0) goto LAB_00453bb4;
          break;
        }
        uVar9 = uVar9 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar9 < __n);
    }
    uVar2 = (int)__n + 5U & 0x1fc;
    lVar1 = __n + 1;
    puVar4 = (undefined1 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)lVar1 * 4);
    if (puVar4 == (undefined1 *)0x0) {
      return;
    }
    lVar8 = param_2[0x12];
  }
  if (lVar8 != 0) {
    memcpy(puVar4 + 1,(void *)(lVar8 + 1),__n);
    memcpy(puVar4 + uVar2,(void *)(param_2[0x12] + (ulong)((int)__n + 4U & 0x1fc)),
           (ulong)(uint)((int)__n << 2));
    FUN_00404870(*puVar3,param_2[0x12]);
  }
  pfVar6 = (float *)(puVar4 + uVar2 + __n * 4);
  puVar4[lVar1] = (char)param_3;
  *puVar4 = (char)lVar1;
  param_2[0x12] = (long)puVar4;
  if (pfVar6 != (float *)0x0) {
LAB_00453bb4:
    *pfVar6 = fVar10;
  }
  return;
}


