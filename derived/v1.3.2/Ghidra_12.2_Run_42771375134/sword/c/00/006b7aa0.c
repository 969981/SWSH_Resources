/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b7aa0; name: FUN_006b7aa0
 */


undefined8 FUN_006b7aa0(float param_1,float param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_5 & 1) != 0) {
    piVar5 = (int *)*param_3;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0xf) {
      return 0;
    }
    uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[7];
    if (uVar6 == 0) {
      return 0;
    }
    if (*(char *)((long)piVar5 + uVar6) == '\0') {
      return 0;
    }
  }
  if ((param_4 & 1) == 0) {
    piVar5 = (int *)*param_3;
    if (((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
        (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) ||
       (*(char *)((long)piVar5 + uVar6) == '\0')) {
      if (param_3[0xb] == 0) {
        return 0;
      }
      goto LAB_006b7b74;
    }
    uVar6 = FUN_006b47f0(param_3 + 0x12);
    if ((uVar6 & 1) == 0) {
      piVar5 = (int *)*param_3;
      fVar7 = 0.0;
      if ((8 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
         (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar6 != 0)) {
        fVar7 = *(float *)((long)piVar5 + uVar6);
        goto joined_r0x006b7bdc;
      }
    }
    else {
      fVar7 = (float)FUN_006b4930(param_3 + 0x12);
joined_r0x006b7bdc:
      if (1.0 < fVar7) {
        if (param_2 < fVar7) {
          return 0;
        }
        goto LAB_006b7aec;
      }
    }
    fVar8 = param_1;
    if (1.0 < param_2) {
      fVar8 = param_1 - (float)(int)param_1;
      fVar9 = param_2 - (float)(int)param_2;
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (fVar9 <= fVar8) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_2) && !NAN(param_1)) {
          bVar1 = param_2 < param_1;
          bVar2 = param_2 == param_1;
          bVar3 = false;
        }
      }
      param_2 = fVar9;
      if (!bVar2 && bVar1 == bVar3) {
        param_2 = fVar9 + 1.0;
      }
    }
    if ((fVar7 <= fVar8) || (param_2 < fVar7)) {
      return 0;
    }
  }
LAB_006b7aec:
  if (param_3[0xb] == 0) {
    return 1;
  }
LAB_006b7b74:
  uVar4 = FUN_006b8940();
  return uVar4;
}


