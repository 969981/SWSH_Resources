/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00528190; name: FUN_00528190
 */


float FUN_00528190(long param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  switch(*(undefined4 *)(param_1 + 0x1008)) {
  case 0:
    fVar2 = tanf(*(float *)(param_1 + 0x6cc) * 0.5);
    fVar2 = DAT_01d4bbd4 - fVar2;
    if (*(int *)(param_1 + 0x1008) == 3) goto LAB_005282a8;
    goto LAB_00528268;
  case 1:
    fVar2 = tanf(*(float *)(param_1 + 0x6cc) * 0.5);
    fVar2 = logf(fVar2);
    fVar2 = DAT_01d4be88 - fVar2;
    iVar1 = *(int *)(param_1 + 0x1008);
    break;
  case 2:
    fVar2 = tanf(*(float *)(param_1 + 0x6cc) * 0.5);
    fVar2 = (1.0 / fVar2) * DAT_01d4c554 + DAT_01d4be20;
    iVar1 = *(int *)(param_1 + 0x1008);
    break;
  case 3:
    fVar2 = *(float *)(param_1 + 0x100c);
    goto LAB_005282a8;
  default:
    fVar2 = *(float *)(param_1 + 0x100c);
    fVar3 = 0.0;
    goto LAB_0052826c;
  }
  if (iVar1 == 3) {
LAB_005282a8:
    fVar2 = fVar2 + *(float *)(param_1 + 0x1010);
  }
  else {
LAB_00528268:
    fVar3 = *(float *)(param_1 + 0x100c);
LAB_0052826c:
    fVar2 = fVar2 * fVar3 + *(float *)(param_1 + 0x1010);
    if ((*(long *)(param_1 + 0x1a0) != 0) && (fVar3 = (float)FUN_005afb40(), 0.0 < fVar3)) {
      fVar3 = (float)FUN_005afb20(*(undefined8 *)(param_1 + 0x1a0));
      fVar2 = fVar2 + fVar3 * -0.5;
    }
  }
  return fVar2;
}


