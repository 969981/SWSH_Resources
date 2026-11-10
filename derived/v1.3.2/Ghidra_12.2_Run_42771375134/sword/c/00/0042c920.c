/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c920; name: FUN_0042c920
 */


void FUN_0042c920(float param_1,long param_2,long param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  if (param_2 == 0) {
    *param_4 = 1.0;
    *param_5 = 1.0;
    *param_6 = 1.0;
    *param_7 = 1.0;
    return;
  }
  uVar8 = *(undefined4 *)(param_3 + 0x24);
  fVar7 = 1.0;
  if (((ulong)*(byte *)(param_2 + 0xa0) == 0xff) ||
     (plVar6 = (long *)(param_2 + (ulong)*(byte *)(param_2 + 0xa0) * 0x10 + 0x30), *plVar6 == 0)) {
    plVar6 = (long *)0x0;
    *param_5 = 1.0;
    uVar4 = (ulong)*(byte *)(param_2 + 0xa1);
    if (uVar4 != 0xff) goto LAB_0042cad8;
LAB_0042c9b0:
    plVar2 = (long *)0x0;
    if (plVar6 != (long *)0x0) goto LAB_0042caf4;
LAB_0042c9c0:
    *param_6 = fVar7;
    bVar1 = *(byte *)(param_2 + 0xa2);
joined_r0x0042cb18:
    uVar4 = (ulong)bVar1;
    if (uVar4 != 0xff) goto LAB_0042c9d0;
LAB_0042cb1c:
    plVar2 = (long *)0x0;
    if (plVar6 != (long *)0x0) goto LAB_0042c9e8;
  }
  else {
    local_68 = 0;
    fVar7 = (float)FUN_0042e770(uVar8,plVar6,0,&local_68);
    *param_5 = fVar7;
    uVar4 = (ulong)*(byte *)(param_2 + 0xa1);
    if (uVar4 == 0xff) goto LAB_0042c9b0;
LAB_0042cad8:
    plVar5 = (long *)(param_2 + uVar4 * 0x10 + 0x30);
    plVar2 = (long *)0x0;
    if (*plVar5 != 0) {
      plVar2 = plVar5;
    }
    if (plVar2 == plVar6) goto LAB_0042c9c0;
LAB_0042caf4:
    if (plVar2 != (long *)0x0) {
      local_64 = 0;
      fVar9 = (float)FUN_0042e770(uVar8,plVar2,0,&local_64);
      *param_6 = fVar9;
      bVar1 = *(byte *)(param_2 + 0xa2);
      goto joined_r0x0042cb18;
    }
    *param_6 = 1.0;
    uVar4 = (ulong)*(byte *)(param_2 + 0xa2);
    if (uVar4 == 0xff) goto LAB_0042cb1c;
LAB_0042c9d0:
    plVar5 = (long *)(param_2 + uVar4 * 0x10 + 0x30);
    plVar2 = (long *)0x0;
    if (*plVar5 != 0) {
      plVar2 = plVar5;
    }
    if (plVar2 != plVar6) {
LAB_0042c9e8:
      if (plVar2 == (long *)0x0) {
        *param_7 = 1.0;
        bVar1 = *(byte *)(param_2 + 0xa7);
      }
      else {
        local_6c = 0;
        fVar7 = (float)FUN_0042e770(uVar8,plVar2,0,&local_6c);
        *param_7 = fVar7;
        bVar1 = *(byte *)(param_2 + 0xa7);
      }
      goto joined_r0x0042ca0c;
    }
  }
  *param_7 = fVar7;
  bVar1 = *(byte *)(param_2 + 0xa7);
joined_r0x0042ca0c:
  if ((bVar1 & 1) == 0) {
    *param_4 = 1.0;
  }
  else {
    fVar9 = 0.0;
    fVar7 = (float)FUN_00469580(*(undefined4 *)(param_2 + 0x18),0,*(undefined4 *)(param_2 + 0x1c),
                                0x3f800000,*(undefined4 *)(param_3 + 0x28));
    *param_4 = fVar7;
    if (DAT_01d4c2ec <= fVar7 * param_1 * DAT_01d4c158) {
      uVar3 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar7 * param_1);
      fVar7 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      fVar9 = (DAT_01d4c23c + fVar7 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar7)) *
              (float)(uVar3 & 0xff800000);
    }
    *param_5 = *param_5 * fVar9;
  }
  return;
}


