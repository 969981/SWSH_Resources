/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142aca0; name: FUN_0142aca0
 */


void FUN_0142aca0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long alStack_b0 [12];
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar4 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar4;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  local_50 = 0x3d61a5275ea8ac27;
  local_48 = &DAT_01d3b3da;
  local_40 = 3;
  local_38 = 0;
  lVar3 = FUN_0142b920(puVar6[0x9f],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  *(long *)(param_1 + 0x80) = lVar3;
  *(undefined4 *)(param_1 + 0x78) = 0;
  pcVar5 = *(code **)(lVar3 + 0x5d8);
  alStack_b0[0] = param_1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x5e0) = 0;
    *(undefined8 *)(lVar3 + 0x5e8) = 0;
    *(undefined8 *)(lVar3 + 0x5d0) = 0;
    *(undefined8 *)(lVar3 + 0x5d8) = 0;
    (*pcVar5)(lVar3 + 0x5f0);
  }
  FUN_0142bb80(alStack_b0,lVar3 + 0x5f0);
  *(undefined1 **)(lVar3 + 0x5e8) = &LAB_0142bb90;
  *(code **)(lVar3 + 0x5d8) = FUN_0142bb70;
  *(code **)(lVar3 + 0x5e0) = FUN_0142bb80;
  *(undefined8 *)(lVar3 + 0x5d0) = &LAB_0142bb60;
  FUN_0142bb70(alStack_b0);
  return;
}


