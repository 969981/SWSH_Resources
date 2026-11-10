/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c2970; name: FUN_013c2970
 */


int FUN_013c2970(long param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char local_130 [16];
  long *local_120 [2];
  long alStack_110 [4];
  long *local_f0;
  undefined8 local_e0;
  long local_d0;
  long *local_c0 [2];
  long alStack_b0 [4];
  long *local_90;
  long *local_80;
  long local_78;
  long local_70;
  
  FUN_0120e660(local_130,*(undefined8 *)PTR_DAT_027185f8);
  FUN_007a2d60(local_c0,local_120);
  if (local_130[0] == '\0') goto LAB_013c2a18;
  if (local_d0 != 0) {
    (**(code **)(*local_120[0] + 0x18))(local_120[0],local_e0,local_d0 << 3,8);
  }
  if (alStack_110 == local_f0) {
    pcVar2 = *(code **)(*local_f0 + 0x20);
LAB_013c2a10:
    (*pcVar2)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar2 = *(code **)(*local_f0 + 0x28);
    goto LAB_013c2a10;
  }
  local_130[0] = '\0';
LAB_013c2a18:
  if (local_78 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    lVar6 = local_78 << 3;
    plVar5 = local_80;
    do {
      lVar7 = *plVar5;
      lVar8 = *(long *)(param_1 + 0x148);
      iVar1 = *(int *)(param_1 + 0x150);
      if (*(long *)(param_1 + 0x158) != 0) {
        plVar4 = (long *)(*(long *)(param_1 + 0x158) + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      if ((lVar8 == lVar7) && (iVar1 == 6)) {
LAB_013c2b30:
        iVar3 = iVar3 + 1;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x160);
        iVar1 = *(int *)(param_1 + 0x168);
        if (*(long *)(param_1 + 0x170) != 0) {
          plVar4 = (long *)(*(long *)(param_1 + 0x170) + 0x48);
          (**(code **)(*plVar4 + 0x10))(plVar4);
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
        if ((lVar8 == lVar7) && (iVar1 == 6)) goto LAB_013c2b30;
        lVar8 = *(long *)(param_1 + 0x178);
        iVar1 = *(int *)(param_1 + 0x180);
        if (*(long *)(param_1 + 0x188) != 0) {
          plVar4 = (long *)(*(long *)(param_1 + 0x188) + 0x48);
          (**(code **)(*plVar4 + 0x10))(plVar4);
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
        if ((lVar8 == lVar7) && (iVar1 == 6)) goto LAB_013c2b30;
        lVar8 = *(long *)(param_1 + 400);
        iVar1 = *(int *)(param_1 + 0x198);
        if (*(long *)(param_1 + 0x1a0) != 0) {
          plVar4 = (long *)(*(long *)(param_1 + 0x1a0) + 0x48);
          (**(code **)(*plVar4 + 0x10))(plVar4);
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
        if ((lVar8 == lVar7) && (iVar1 == 6)) goto LAB_013c2b30;
      }
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (local_70 != 0) {
    (**(code **)(*local_c0[0] + 0x18))(local_c0[0],local_80,local_70 << 3,8);
  }
  if (alStack_b0 == local_90) {
    pcVar2 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) {
      return iVar3;
    }
    pcVar2 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar2)();
  return iVar3;
}


