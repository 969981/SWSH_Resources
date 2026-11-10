/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137f6f0; name: FUN_0137f6f0
 */


void FUN_0137f6f0(float param_1,float param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if ((param_4 != 0) && (0 < *(int *)(param_4 + 0x17c))) {
    if (param_1 <= 1.0) {
      param_1 = 1.0;
    }
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
    iVar4 = 0;
    do {
      uVar2 = 2;
      if (iVar4 != 2) {
        uVar2 = 1;
      }
      uVar1 = (ulong)(iVar4 == 2);
      if (iVar4 == 1) {
        uVar1 = uVar2;
      }
      if (iVar4 == 3) {
        uVar1 = uVar1 + 1;
      }
      if (uVar1 == -(ulong)(iVar4 == 4)) {
LAB_0137f780:
        fVar6 = param_1;
        fVar5 = param_2;
        if ((ulong)(iVar4 == 0) == -(ulong)(iVar4 == 8)) goto LAB_0137f798;
      }
      else {
        fVar6 = 1.0;
        fVar5 = 0.0;
        if (*(char *)(param_3 + 0xb0) != '\0') goto LAB_0137f780;
LAB_0137f798:
        lVar3 = FUN_019d6820(param_4,iVar4);
        *(float *)(lVar3 + 100) = fVar6;
        lVar3 = FUN_019d6820(param_4,iVar4);
        *(float *)(lVar3 + 0x60) = fVar5;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_4 + 0x17c));
  }
  return;
}


