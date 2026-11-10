/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5edc0; name: FUN_00e5edc0
 */


void FUN_00e5edc0(float param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long local_60;
  long lStack_58;
  
  lStack_58 = param_3[1];
  local_60 = *param_3;
  if (((float)*param_3 != 0.0) || ((float)param_3[1] != 0.0)) {
    local_60 = (ulong)*(uint *)((ulong)&local_60 | 4) << 0x20;
    lStack_58 = 0;
  }
  puVar8 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0xb20) + 0x80) + 0x60);
  plVar6 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_02715280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02715280), iVar5 != 0))
  {
    uVar7 = FUN_01590a70();
    *(undefined8 *)PTR_DAT_02715288 = uVar7;
    __cxa_guard_release(PTR_DAT_02715280);
  }
  for (; plVar6 != (long *)PTR_DAT_02715288; plVar6 = (long *)*plVar6) {
  }
  uVar9 = puVar8[5];
  uVar7 = puVar8[4];
  uVar2 = *(undefined1 *)(puVar8 + 2);
  uVar1 = *(undefined4 *)((long)puVar8 + 0x164);
  uVar3 = *(undefined1 *)(puVar8 + 0x2c);
  uVar4 = *(undefined1 *)(puVar8 + 0x39);
  FUN_00dc7290(param_1 + 10.0,*(undefined8 *)(param_2 + 0xb20),&local_60);
  *(undefined1 *)(puVar8 + 2) = uVar2;
  *(undefined4 *)((long)puVar8 + 0x164) = uVar1;
  *(undefined1 *)(puVar8 + 0x2c) = uVar3;
  *(undefined1 *)(puVar8 + 0x39) = uVar4;
  puVar8[5] = uVar9;
  puVar8[4] = uVar7;
  FUN_00e46690(puVar8 + -10);
  uVar2 = *(undefined1 *)(param_2 + 0xbd1);
  *(undefined1 *)(param_2 + 0xbd1) = 0;
  FUN_00e60bb0(param_2,uVar2);
  *(float *)(param_2 + 0x4ec) = param_1;
  *(long *)(param_2 + 0xb58) = lStack_58;
  *(long *)(param_2 + 0xb50) = local_60;
  return;
}


