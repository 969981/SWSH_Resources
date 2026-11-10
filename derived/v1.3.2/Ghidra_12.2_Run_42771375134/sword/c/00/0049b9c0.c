/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049b9c0; name: FUN_0049b9c0
 */


undefined8
FUN_0049b9c0(ulong param_1,long *param_2,uint param_3,long *param_4,long param_5,int param_6,
            ulong param_7)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  uint *puVar7;
  float fVar8;
  undefined1 local_5c [4];
  float *local_58;
  
  local_58 = (float *)0x0;
  local_5c[0] = 0;
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = param_3 / uVar3;
    }
    for (puVar7 = *(uint **)(*param_2 + (ulong)(param_3 - uVar1 * uVar3) * 8); puVar7 != (uint *)0x0
        ; puVar7 = *(uint **)(puVar7 + 2)) {
      if (*puVar7 == param_3) {
        pfVar4 = (float *)FUN_0049f150(puVar7 + 8,param_4,&local_58,local_5c);
        if ((pfVar4 == (float *)0x0) && ((param_7 & 1) != 0)) {
          pfVar4 = (float *)0x0;
          *(undefined1 *)(param_5 + 8) = 1;
        }
        goto joined_r0x0049bba8;
      }
    }
  }
  puVar7 = (uint *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x68);
  puVar2 = PTR_DAT_02713378;
  if (puVar7 == (uint *)0x0) {
    return 2;
  }
  *puVar7 = param_3;
  *(undefined **)(puVar7 + 8) = puVar2 + 0x10;
  puVar7[10] = 0;
  *(undefined1 *)(puVar7 + 0xb) = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  uVar3 = *(uint *)(param_2 + 1);
  if ((uVar3 == 0) ||
     (fVar8 = (float)NEON_ucvtf((int)param_2[2]), DAT_01d4bee0 < fVar8 / (float)uVar3)) {
    FUN_004a1540(param_2);
    uVar3 = *(uint *)(param_2 + 1);
    if (uVar3 == 0) goto LAB_0049baec;
    param_3 = *puVar7;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = param_3 / uVar3;
  }
  lVar5 = (ulong)(param_3 - uVar1 * uVar3) * 8;
  *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(*param_2 + lVar5);
  *(uint **)(*param_2 + lVar5) = puVar7;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
LAB_0049baec:
  FUN_0049f150(puVar7 + 8,param_4,&local_58,local_5c);
  pfVar4 = (float *)0x0;
joined_r0x0049bba8:
  if (param_6 == 2) {
    if (pfVar4 == (float *)0x0) {
      pfVar6 = (float *)(puVar7 + 4);
      if (local_58 != (float *)0x0) {
        pfVar6 = local_58;
      }
    }
    else {
      lVar5 = *(long *)(puVar7 + 0x10);
      if (lVar5 != 0) {
        do {
          if ((((*(long *)(lVar5 + 0x20) == *param_4) && (*(int *)(lVar5 + 0x28) == 0)) &&
              (*(int *)(lVar5 + 0x30) == 0)) &&
             (((*(char *)(lVar5 + 0x38) == -1 && (*(char *)(lVar5 + 0x40) == -1)) &&
              (*(long *)(lVar5 + 0x48) == 0)))) {
            pfVar6 = (float *)(*(long *)(lVar5 + 0x10) + 0xc);
            goto LAB_0049bbbc;
          }
          lVar5 = *(long *)(lVar5 + 8);
        } while (lVar5 != 0);
      }
      pfVar6 = pfVar4;
    }
LAB_0049bbbc:
    param_1 = (ulong)(uint)(*pfVar6 + (float)param_1);
  }
  FUN_0049bc10(param_1,puVar7,pfVar4,local_58,param_4,param_5,0,local_5c[0]);
  return 1;
}


