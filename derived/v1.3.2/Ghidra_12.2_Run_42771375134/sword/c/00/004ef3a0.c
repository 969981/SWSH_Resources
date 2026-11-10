/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ef3a0; name: FUN_004ef3a0
 */


undefined8
FUN_004ef3a0(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,int *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  int local_60;
  int iStack_5c;
  int local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  int *local_48;
  int *local_38;
  
  uVar1 = FUN_004ef610(param_1,param_2,*param_3,&local_38,param_4,param_5);
  if ((uVar1 & 1) != 0) {
    for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[0x1ec]) {
      if (puVar2[0x1ee] != 0) goto LAB_004ef488;
    }
    puVar2 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,0xf78);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0x52] = puVar2 + 0x29;
      puVar2[0x7b] = puVar2 + 0x52;
      puVar2[0xa4] = puVar2 + 0x7b;
      puVar2[0xf6] = puVar2 + 0xcd;
      puVar2[0xcd] = puVar2 + 0xa4;
      puVar2[0x148] = puVar2 + 0x11f;
      puVar2[0x11f] = puVar2 + 0xf6;
      puVar2[0x19a] = puVar2 + 0x171;
      puVar2[0x171] = puVar2 + 0x148;
      puVar2[0x1ee] = puVar2 + 0x1c3;
      puVar2[0x1ec] = 0;
      *puVar2 = 0;
      puVar2[0x29] = puVar2;
      puVar2[0x1c3] = puVar2 + 0x19a;
      *(undefined4 *)(puVar2 + 0x1ed) = 0xc;
      if (*(long *)(param_1 + 0x18) == 0) {
        *(undefined8 **)(param_1 + 0x18) = puVar2;
        puVar2[0x1ec] = 0;
        plVar5 = (long *)puVar2[0x1ee];
      }
      else {
        puVar2[0x1ec] = *(long *)(param_1 + 0x18);
        *(undefined8 **)(param_1 + 0x18) = puVar2;
LAB_004ef488:
        plVar5 = (long *)puVar2[0x1ee];
      }
      if (plVar5 != (long *)0x0) {
        if (*plVar5 == 0) {
          puVar2[0x1ee] = 0;
        }
        else {
          puVar2[0x1ee] = *plVar5;
        }
        *(int *)(puVar2 + 0x1ed) = *(int *)(puVar2 + 0x1ed) + -1;
        *plVar5 = -0x100000000;
        if (*param_5 != 1) {
          return 0;
        }
        *(int *)((long)plVar5 + 4) = *(int *)(*param_3 + 4) + 1;
        local_48 = (int *)*param_3;
        local_60 = local_48[2];
        iStack_5c = local_48[3];
        local_58 = local_48[4];
        fStack_54 = (float)local_48[5];
        local_50 = (float)local_48[6];
        fStack_4c = (float)local_48[7];
        if (1 < *local_48) {
          lVar3 = (long)*local_48 + -1;
          pfVar4 = (float *)(local_48 + 0x11);
          do {
            iStack_5c = NEON_fminnm(iStack_5c,pfVar4[-4]);
            local_60 = NEON_fminnm(local_60,pfVar4[-5]);
            if (local_50 <= pfVar4[-1]) {
              local_50 = pfVar4[-1];
            }
            if (fStack_54 <= pfVar4[-2]) {
              fStack_54 = pfVar4[-2];
            }
            local_58 = NEON_fminnm(local_58,pfVar4[-3]);
            if (fStack_4c <= *pfVar4) {
              fStack_4c = *pfVar4;
            }
            lVar3 = lVar3 + -1;
            pfVar4 = pfVar4 + 10;
          } while (lVar3 != 0);
        }
        FUN_004ef850(param_1,&local_60,plVar5,0,param_5);
        local_60 = local_38[2];
        iStack_5c = local_38[3];
        local_58 = local_38[4];
        fStack_54 = (float)local_38[5];
        local_50 = (float)local_38[6];
        fStack_4c = (float)local_38[7];
        if (1 < *local_38) {
          lVar3 = (long)*local_38 + -1;
          pfVar4 = (float *)(local_38 + 0x11);
          do {
            iStack_5c = NEON_fminnm(iStack_5c,pfVar4[-4]);
            local_60 = NEON_fminnm(local_60,pfVar4[-5]);
            if (local_50 <= pfVar4[-1]) {
              local_50 = pfVar4[-1];
            }
            if (fStack_54 <= pfVar4[-2]) {
              fStack_54 = pfVar4[-2];
            }
            local_58 = NEON_fminnm(local_58,pfVar4[-3]);
            if (fStack_4c <= *pfVar4) {
              fStack_4c = *pfVar4;
            }
            lVar3 = lVar3 + -1;
            pfVar4 = pfVar4 + 10;
          } while (lVar3 != 0);
        }
        local_48 = local_38;
        FUN_004ef850(param_1,&local_60,plVar5,0,param_5);
        *param_3 = (long)plVar5;
        return 1;
      }
    }
    *param_5 = 0x34;
  }
  return 0;
}


