/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2e390; name: FUN_00e2e390
 */


undefined8 FUN_00e2e390(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *param_4;
  plVar3 = (long *)*param_1;
  fVar4 = (float)(**(code **)(*(long *)*param_2 + 0xb0))((long *)*param_2,lVar1 + 0x70);
  fVar5 = (float)(**(code **)(*plVar3 + 0xb0))(plVar3,lVar1 + 0x70);
  lVar1 = *param_4;
  plVar3 = (long *)*param_2;
  fVar6 = (float)(**(code **)(*(long *)*param_3 + 0xb0))((long *)*param_3,lVar1 + 0x70);
  fVar7 = (float)(**(code **)(*plVar3 + 0xb0))(plVar3,lVar1 + 0x70);
  if (fVar5 <= fVar4) {
    if (fVar7 <= fVar6) {
      return 0;
    }
    uVar2 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar2;
    lVar1 = *param_4;
    plVar3 = (long *)*param_1;
    fVar4 = (float)(**(code **)(*(long *)*param_2 + 0xb0))((long *)*param_2,lVar1 + 0x70);
    fVar5 = (float)(**(code **)(*plVar3 + 0xb0))(plVar3,lVar1 + 0x70);
    if (fVar4 < fVar5) {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
      return 2;
    }
  }
  else {
    plVar3 = (long *)*param_1;
    if (fVar7 <= fVar6) {
      *param_1 = *param_2;
      *param_2 = plVar3;
      lVar1 = *param_4;
      fVar4 = (float)(**(code **)(*(long *)*param_3 + 0xb0))((long *)*param_3,lVar1 + 0x70);
      fVar5 = (float)(**(code **)(*plVar3 + 0xb0))(plVar3,lVar1 + 0x70);
      if (fVar4 < fVar5) {
        uVar2 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar2;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = plVar3;
    }
  }
  return 1;
}


