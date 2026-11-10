/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c42430; name: FUN_00c42430
 */


undefined8 FUN_00c42430(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_00be66c0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        FUN_00c1cec0(&local_78,puVar11 + -10);
        goto joined_r0x00c427fc;
      }
    }
  }
  FUN_00c1cec0(&local_78,0);
joined_r0x00c427fc:
  if (local_78 == 0) {
    return 0;
  }
  puVar11 = *(undefined8 **)(local_78 + 0x60);
  if (puVar11 != (undefined8 *)0x0) {
    plVar6 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_00c1bbc0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        puVar11 = puVar11 + -10;
        goto joined_r0x00c4280c;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
joined_r0x00c4280c:
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (puVar11 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_00be66c0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        FUN_00c1cc60(&local_38,puVar11 + -10);
        goto joined_r0x00c42824;
      }
    }
  }
  FUN_00c1cc60(&local_38,0);
joined_r0x00c42824:
  if (local_38 == 0) {
    return 0;
  }
  if (((*(char *)(param_1 + 0x900) != '\0') && (*(char *)(param_1 + 0x978) != '\0')) &&
     (*(char *)(param_1 + 0xa8) != '\0')) {
    plVar6 = *(long **)(param_1 + 8);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar6;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,400,0x10);
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_009fe380(lVar8,plVar6);
    *(long **)(lVar8 + 8) = plVar6;
    *(long *)(lVar8 + 0x10) = lVar8;
    *(undefined8 *)(lVar8 + 0x18) = 400;
    *(undefined8 *)(lVar8 + 0x20) = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      if (*(long *)(param_1 + 0x8f8) == 0x644) {
        uVar9 = FUN_009fe850(lVar8,param_1 + 0xf8);
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))(plVar6);
        if ((uVar9 & 1) == 0) goto LAB_00c42858;
        lVar7 = local_38 + 0x3b0;
        if (*(char *)(param_1 + 0xa0) != '\0') {
          lVar7 = local_38 + 0x208;
        }
        uVar9 = FUN_009fe1a0(lVar8,0x1b);
        uVar5 = FUN_008d3fc0(uVar9,0);
        *(undefined4 *)(lVar7 + 0x124) = uVar5;
        FUN_009fef60(&local_78,lVar8,2,uVar9 & 0xffffffff);
        uVar10 = FUN_0077d470(local_78);
        FUN_0077d7e0(lVar7,uVar10,0x25);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        FUN_009fef60(&local_78,lVar8,3,uVar9 & 0xffffffff);
        uVar10 = FUN_0077d470(local_78);
        FUN_0077d7e0(lVar7 + 0x92,uVar10,0x25);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        iVar1 = *(int *)(param_1 + 0x954);
        iVar2 = *(int *)(param_1 + 0x958);
        iVar3 = *(int *)(param_1 + 0x95c);
        FUN_00be04d0(&local_78,param_1 + 0xe8);
        *(undefined8 *)(lVar7 + 0x130) = uStack_70;
        *(undefined8 *)(lVar7 + 0x138) = local_68;
        *(long *)(lVar7 + 0x128) = local_78;
        *(undefined8 *)(lVar7 + 0x140) = local_60;
        *(undefined8 *)(lVar7 + 0x148) = uStack_58;
        *(undefined8 *)(lVar7 + 0x150) = local_50;
        *(undefined8 *)(lVar7 + 0x158) = uStack_48;
        FUN_00be04d0(&local_78,param_1 + 0xf0);
        *(undefined8 *)(lVar7 + 0x168) = uStack_70;
        *(undefined8 *)(lVar7 + 0x170) = local_68;
        *(long *)(lVar7 + 0x160) = local_78;
        *(undefined8 *)(lVar7 + 0x188) = local_50;
        *(undefined8 *)(lVar7 + 400) = uStack_48;
        *(undefined8 *)(lVar7 + 0x178) = local_60;
        *(undefined8 *)(lVar7 + 0x180) = uStack_58;
        uVar4 = FUN_00be1980(param_1 + 0x908);
        uVar4 = FUN_00be1790(uVar4);
        *(undefined2 *)(lVar7 + 0x198) = uVar4;
        uVar5 = FUN_00be1770(*(undefined4 *)(param_1 + 0x980));
        *(undefined4 *)(lVar7 + 0x19c) = uVar5;
        uVar5 = FUN_00be2000(iVar2 + iVar1 + iVar3);
        *(undefined4 *)(local_38 + 0x13e0) = uVar5;
        uVar4 = FUN_00be1980(param_1 + 0x908);
        uVar5 = FUN_00be1790(uVar4);
        *(undefined4 *)(local_38 + 0x13e4) = uVar5;
        uVar10 = 1;
      }
      else {
        (**(code **)(*plVar6 + 0x18))(plVar6);
LAB_00c42858:
        uVar10 = 0;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto joined_r0x00c427c4;
    }
  }
  uVar10 = 0;
joined_r0x00c427c4:
  if (local_38 == 0) {
    return uVar10;
  }
  (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  return uVar10;
}


