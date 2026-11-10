/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d90930; name: FUN_00d90930
 */


void FUN_00d90930(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong local_58;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_02710798;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  uVar3 = FUN_01520ef0(lVar5,4,1);
  if (((uVar3 & 1) == 0) || (iVar2 = FUN_008783b0(*(undefined8 *)(param_1 + 0xa8)), iVar2 != 0x123))
  goto LAB_00d90bbc;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar6 = *(long **)(lVar7 + 0x58);
  if (plVar6 != (long *)0x0) {
    (**(code **)(plVar6[9] + 0x10))();
  }
  plVar8 = *(long **)(*(long *)PTR_DAT_0271e600 + 8);
  iVar2 = FUN_00884820(plVar6);
  if (iVar2 != 6) {
    if (iVar2 == 5) {
      lVar7 = *(long *)(*(long *)puVar1 + 0x220);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      local_58 = local_58 & 0xffffffff00000000;
      local_44 = 0;
      uVar3 = FUN_01507fd0(lVar7,&local_58,&local_44,plVar8);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      if ((uVar3 & 1) == 0) goto LAB_00d90ba8;
    }
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0xb8,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_008663d0(lVar4,plVar8,uVar9);
    *(long **)(lVar4 + 8) = plVar8;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0xb8;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_008675e0(&local_58,plVar8,lVar4);
    (**(code **)(*plVar6 + 0x28))(plVar6,local_58);
    FUN_01520b70(lVar5,4,1);
    lVar7 = *(long *)(*(long *)puVar1 + 0x1f8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_01534a40(lVar7,local_58,0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
LAB_00d90ba8:
  if (plVar6 != (long *)0x0) {
    (**(code **)(plVar6[9] + 0x18))(plVar6 + 9);
  }
LAB_00d90bbc:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


