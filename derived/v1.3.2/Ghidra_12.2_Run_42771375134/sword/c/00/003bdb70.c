/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bdb70; name: FUN_003bdb70
 */


void FUN_003bdb70(long *param_1,float *param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_2[4];
  if (fVar4 == 0.0) {
    fVar5 = param_2[5];
    if ((((fVar5 == 0.0) && (param_2[6] == 0.0)) && (*param_2 == 0.0)) &&
       ((param_2[1] == 0.0 && (param_2[2] == 0.0)))) {
      bVar2 = param_2[3] == 1.0;
      goto LAB_003bdbe4;
    }
  }
  else {
    fVar5 = param_2[5];
  }
  bVar2 = false;
LAB_003bdbe4:
  *(bool *)((long)param_1 + 0x2d) = bVar2;
  *(float *)(param_1 + 6) = *param_2;
  *(float *)((long)param_1 + 0x34) = param_2[1];
  *(float *)(param_1 + 7) = param_2[2];
  *(float *)((long)param_1 + 0x3c) = param_2[3];
  *(float *)(param_1 + 8) = fVar4;
  *(float *)((long)param_1 + 0x44) = fVar5;
  lVar3 = *param_1;
  *(float *)(param_1 + 9) = param_2[6];
  if (lVar3 == 0) {
    return;
  }
  FUN_003d9930(lVar3);
  plVar1 = *(long **)(*(long *)(lVar3 + 0x48) + 0x760);
                    /* WARNING: Could not recover jumptable at 0x003bdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,lVar3 + 0x60,*(uint *)(lVar3 + 0xb0) >> 6);
  return;
}


