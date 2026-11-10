/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ef850; name: FUN_004ef850
 */


undefined8 FUN_004ef850(long param_1,void *param_2,int *param_3,undefined8 *param_4,int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int local_268 [9];
  int local_244;
  int *local_70 [2];
  
  if (*param_3 < 8) {
    memcpy(param_3 + (long)*param_3 * 10 + 2,param_2,0x28);
    *param_3 = *param_3 + 1;
    return 0;
  }
  FUN_004efc10(param_1,param_3,param_2,local_268);
  FUN_004efed0(param_1,local_268,4);
  for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)puVar2[0x1ec]) {
    if (puVar2[0x1ee] != 0) goto LAB_004ef988;
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
      plVar4 = (long *)puVar2[0x1ee];
    }
    else {
      puVar2[0x1ec] = *(long *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x18) = puVar2;
LAB_004ef988:
      plVar4 = (long *)puVar2[0x1ee];
    }
    if (plVar4 != (long *)0x0) {
      if (*plVar4 == 0) {
        puVar2[0x1ee] = 0;
      }
      else {
        puVar2[0x1ee] = *plVar4;
      }
      *(int *)(puVar2 + 0x1ed) = *(int *)(puVar2 + 0x1ed) + -1;
      *plVar4 = -0x100000000;
      *param_4 = plVar4;
      iVar1 = *param_5;
      goto joined_r0x004ef9f8;
    }
  }
  plVar4 = (long *)0x0;
  *param_5 = 0x34;
  *param_4 = 0;
  iVar1 = *param_5;
joined_r0x004ef9f8:
  if (iVar1 == 1) {
    *(int *)((long)plVar4 + 4) = param_3[1];
    *param_3 = 0;
    if (0 < local_244) {
      uVar3 = *param_4;
      lVar5 = 0;
      lVar6 = 0x70;
      do {
        local_70[0] = param_3;
        local_70[1] = (int *)uVar3;
        FUN_004ef850(param_1,(long)local_268 + lVar6,local_70[local_268[lVar5]],0,param_5);
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (lVar5 < local_244);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


