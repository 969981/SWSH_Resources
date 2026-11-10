/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad6650; name: FUN_00ad6650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad6650(long *param_1,undefined8 param_2)

{
  float *pfVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_50;
  float fStack_48;
  long local_40;
  undefined8 uStack_38;
  long local_28;
  
  uVar2 = (**(code **)(*param_1 + 400))();
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((int)param_1[0x9a] != 2) {
    return;
  }
  if (((int)param_1[0x9e] == 0x37a) && (*(int *)((long)param_1 + 0x504) == 2)) {
    return;
  }
  if (param_1[0xac] == 0) {
    return;
  }
  plVar3 = (long *)FUN_006b92e0(param_2);
  if (((*plVar3 != -0x36d3a400db7ba287) &&
      (plVar3 = (long *)FUN_006b92e0(param_2), *plVar3 != -0x3fe9c100e0bfd358)) ||
     (uVar2 = FUN_00a70120(param_1[0x78],(int)param_1[0x79]), (uVar2 & 1) != 0)) {
    FUN_00ad1e50(&local_40,param_1);
    FUN_0069c620(0x40000000,local_40);
    if (local_40 == 0) {
      return;
    }
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))((long *)(local_40 + 0x48));
    return;
  }
  FUN_00ad1e50(&local_40,param_1);
  lVar4 = local_40;
  FUN_0069c600(local_40);
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_40 = 0;
  }
  lVar4 = *(long *)(param_1[0xac] + 0x270);
  if (lVar4 == 0) {
    fStack_48 = (float)_DAT_000000e8;
    local_50 = _DAT_000000e0;
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    fStack_48 = (float)*(undefined8 *)(lVar4 + 0xe8);
    local_50 = *(undefined8 *)(lVar4 + 0xe0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  uVar2 = (**(code **)(*(long *)param_1[0x78] + 0x748))((long *)param_1[0x78],(int)param_1[0x79]);
  if ((uVar2 & 1) != 0) {
    fStack_48 = -fStack_48;
  }
  FUN_00ad1e50(&local_28,param_1);
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  uVar2 = (ulong)-(DAT_02a55e34 * (fVar5 / *(float *)PTR_FloatDegree180_027194f0));
  pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar2 >> 0x18 & 0xff) * 0x10);
  fVar5 = (float)((uint)uVar2 & 0xffffff) * DAT_01d4bc78;
  fVar6 = *pfVar1 + pfVar1[2] * fVar5;
  fVar5 = pfVar1[1] + pfVar1[3] * fVar5;
  local_40 = CONCAT44((float)((ulong)_DAT_02a55e20 >> 0x20) + (float)((ulong)local_50 >> 0x20),
                      (float)_DAT_02a55e20 + (fVar6 * (float)local_50 - fVar5 * fStack_48));
  uStack_38 = CONCAT44((float)((ulong)uRam0000000002a55e28 >> 0x20) + 0.0,
                       (float)uRam0000000002a55e28 + fVar5 * (float)local_50 + fVar6 * fStack_48);
  FUN_0069c6b0(local_28,&local_40);
  if (local_28 == 0) {
    return;
  }
  (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
  return;
}


