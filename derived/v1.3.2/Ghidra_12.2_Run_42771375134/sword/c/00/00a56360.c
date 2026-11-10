/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a56360; name: FUN_00a56360
 */


void FUN_00a56360(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long local_48;
  
  uVar6 = *param_2;
  uVar7 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  lVar10 = *(long *)(param_1 + 0x10);
  uVar1 = param_2[6];
  *(undefined8 *)(param_1 + 0x40) = param_2[5];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  lVar8 = param_2[7];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar8;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar8 = param_2[8];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar8;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  uVar7 = param_2[10];
  uVar6 = param_2[0xb];
  uVar1 = param_2[0xc];
  *(undefined8 *)(param_1 + 0x60) = param_2[9];
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  local_48 = *(long *)(param_1 + 0x20);
  plVar9 = (long *)0x0;
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  if ((local_48 != -0x340d631b7bddd9bb) && (local_48 != 0)) {
    plVar9 = (long *)FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),&local_48);
  }
  puVar2 = PTR_DAT_02716308;
  if (((*PTR_DAT_02716308 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02716308), iVar3 != 0))
  {
    if (((*PTR_DAT_02716318 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02716318), iVar3 != 0)) {
      *(undefined8 *)PTR_DAT_02716320 = 0;
      __cxa_guard_release(PTR_DAT_02716318);
    }
    *(undefined **)PTR_DAT_02716310 = PTR_DAT_02716320;
    __cxa_guard_release(PTR_DAT_02716308);
  }
  if (plVar9 != (long *)0x0) {
    for (plVar5 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9); plVar5 != (long *)0x0;
        plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_02716310) goto LAB_00a56490;
    }
    plVar9 = (long *)0x0;
  }
LAB_00a56490:
  local_48 = *(long *)(param_1 + 0x28);
  plVar5 = (long *)0x0;
  *(long **)(param_1 + 0x80) = plVar9;
  if ((local_48 != -0x340d631b7bddd9bb) && (local_48 != 0)) {
    plVar5 = (long *)FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),&local_48);
  }
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02716308), iVar3 != 0)) {
    if (((*PTR_DAT_02716318 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02716318), iVar3 != 0)) {
      *(undefined8 *)PTR_DAT_02716320 = 0;
      __cxa_guard_release(PTR_DAT_02716318);
    }
    *(undefined **)PTR_DAT_02716310 = PTR_DAT_02716320;
    __cxa_guard_release(PTR_DAT_02716308);
  }
  if (plVar5 != (long *)0x0) {
    for (plVar9 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5); plVar9 != (long *)0x0;
        plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)PTR_DAT_02716310) goto LAB_00a564f8;
    }
    plVar5 = (long *)0x0;
  }
LAB_00a564f8:
  local_48 = *(long *)(param_1 + 0x30);
  plVar9 = (long *)0x0;
  *(long **)(param_1 + 0x88) = plVar5;
  if ((local_48 != -0x340d631b7bddd9bb) && (local_48 != 0)) {
    plVar9 = (long *)FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),&local_48);
  }
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02716308), iVar3 != 0)) {
    if (((*PTR_DAT_02716318 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02716318), iVar3 != 0)) {
      *(undefined8 *)PTR_DAT_02716320 = 0;
      __cxa_guard_release(PTR_DAT_02716318);
    }
    *(undefined **)PTR_DAT_02716310 = PTR_DAT_02716320;
    __cxa_guard_release(PTR_DAT_02716308);
  }
  if (plVar9 != (long *)0x0) {
    for (plVar5 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9); plVar5 != (long *)0x0;
        plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_02716310) goto LAB_00a56560;
    }
    plVar9 = (long *)0x0;
  }
LAB_00a56560:
  local_48 = *(long *)(param_1 + 0x38);
  uVar6 = 0;
  *(long **)(param_1 + 0x90) = plVar9;
  if ((local_48 != -0x340d631b7bddd9bb) && (local_48 != 0)) {
    uVar6 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),&local_48);
  }
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  return;
}


