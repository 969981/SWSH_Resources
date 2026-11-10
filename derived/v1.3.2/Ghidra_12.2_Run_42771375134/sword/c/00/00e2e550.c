/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2e550; name: FUN_00e2e550
 */


int FUN_00e2e550(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                long *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = FUN_00e2e390();
  lVar2 = *param_5;
  plVar4 = (long *)*param_3;
  fVar5 = (float)(**(code **)(*(long *)*param_4 + 0xb0))((long *)*param_4,lVar2 + 0x70);
  fVar6 = (float)(**(code **)(*plVar4 + 0xb0))(plVar4,lVar2 + 0x70);
  if (fVar5 < fVar6) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    lVar2 = *param_5;
    plVar4 = (long *)*param_2;
    fVar5 = (float)(**(code **)(*(long *)*param_3 + 0xb0))((long *)*param_3,lVar2 + 0x70);
    fVar6 = (float)(**(code **)(*plVar4 + 0xb0))(plVar4,lVar2 + 0x70);
    if (fVar6 <= fVar5) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      lVar2 = *param_5;
      plVar4 = (long *)*param_1;
      fVar5 = (float)(**(code **)(*(long *)*param_2 + 0xb0))((long *)*param_2,lVar2 + 0x70);
      fVar6 = (float)(**(code **)(*plVar4 + 0xb0))(plVar4,lVar2 + 0x70);
      if (fVar6 <= fVar5) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar1;
}


