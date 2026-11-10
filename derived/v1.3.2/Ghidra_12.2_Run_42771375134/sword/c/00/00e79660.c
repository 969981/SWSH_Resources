/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e79660; name: FUN_00e79660
 */


void FUN_00e79660(float param_1,float param_2,long *param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,uint param_7)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (plVar4 == plVar1) {
      return;
    }
    lVar3 = *plVar4;
    uVar2 = FUN_01593610(lVar3 + 0x50);
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar3 + 0x1a0) == *param_3)) &&
       (uVar2 = (**(code **)(*(long *)*plVar4 + 0x88))(), (uVar2 & 1) == 0)) break;
    plVar4 = plVar4 + 1;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  fVar6 = 0.5;
  if (DAT_01d4c1d4 <= ABS(param_1)) {
    fVar6 = 1.0;
  }
  fVar7 = 0.0;
  if (30.0 <= ABS(param_1)) {
    fVar7 = fVar6;
  }
  fVar6 = 0.5;
  if (18.0 <= ABS(param_2)) {
    fVar6 = 1.0;
  }
  fVar5 = 0.0;
  if (5.0 <= ABS(param_2)) {
    fVar5 = fVar6;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  if ((*(char *)(lVar3 + 0x598) == '\0') || ((param_7 & 1) != 0)) {
    fVar6 = -fVar5;
    if (0.0 <= param_2) {
      fVar6 = fVar5;
    }
    if ((param_6 & 1) == 0) {
      fVar6 = 0.0;
    }
    fVar5 = -fVar7;
    if (0.0 <= param_1) {
      fVar5 = fVar7;
    }
    FUN_00e45710(fVar5,fVar6,lVar3,param_4,param_5);
  }
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00e79824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


