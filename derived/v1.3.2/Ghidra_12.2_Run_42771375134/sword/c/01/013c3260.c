/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c3260; name: FUN_013c3260
 */


void FUN_013c3260(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  char local_110 [16];
  long *local_100 [2];
  long alStack_f0 [4];
  long *local_d0;
  undefined8 local_c0;
  long local_b0;
  long *local_a0 [2];
  long alStack_90 [4];
  long *local_70;
  long *local_60;
  long lStack_58;
  long local_50;
  
  puVar2 = PTR_DAT_027185f8;
  FUN_0120e660(local_110,*(undefined8 *)PTR_DAT_027185f8);
  FUN_007a2d60(local_a0,local_100);
  if (local_110[0] != '\0') {
    if (local_b0 != 0) {
      (**(code **)(*local_100[0] + 0x18))(local_100[0],local_c0,local_b0 << 3,8);
    }
    if (alStack_f0 == local_d0) {
      pcVar5 = *(code **)(*local_d0 + 0x20);
LAB_013c32f8:
      (*pcVar5)();
    }
    else if (local_d0 != (long *)0x0) {
      pcVar5 = *(code **)(*local_d0 + 0x28);
      goto LAB_013c32f8;
    }
    local_110[0] = '\0';
  }
  uVar3 = FUN_0120e5d0(*(undefined8 *)puVar2);
  if ((uVar3 & 1) != 0) {
    plVar1 = local_60 + lStack_58;
    plVar6 = local_60;
    if (lStack_58 != 0) {
      do {
        lVar7 = *plVar6;
        lVar4 = FUN_013c2760(param_1);
        if (lVar4 == lVar7) goto LAB_013c333c;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
      plVar6 = plVar1;
    }
LAB_013c333c:
    if (plVar1 != plVar6) goto LAB_013c3378;
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x28))();
  }
  pcVar5 = *(code **)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    (*pcVar5)(param_1 + 0x1d0);
  }
LAB_013c3378:
  if (local_50 != 0) {
    (**(code **)(*local_a0[0] + 0x18))(local_a0[0],local_60,local_50 << 3,8);
  }
  if (alStack_90 == local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) {
      return;
    }
    pcVar5 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar5)();
  return;
}


