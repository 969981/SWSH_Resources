/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa20d0; name: FUN_00aa20d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00aa20d0(long *param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long local_38;
  
  if (99 < *(int *)((long)param_1 + 0x16f4)) {
    uVar3 = 1;
    switch(*(undefined4 *)((long)param_1 + 0x16f4)) {
    case 100:
      plVar8 = (long *)param_1[0x1b];
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
      FUN_00ab46a0(lVar4,param_1,*(undefined4 *)((long)param_1 + 0x16fc),(int)param_1[0x2e0]);
      *(long **)(lVar4 + 8) = plVar8;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0xb8;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar7 = param_1[0xa7];
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      local_38 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN_015f6330(lVar7,&local_38,0x40);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      if ((*(uint *)((long)param_1 + 0x16fc) == 0xff) ||
         (lVar7 = param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9], lVar7 == 0)) {
        *(uint *)((long)param_1 + 0x172c) = (uint)DAT_000004b8;
      }
      else {
        plVar8 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        *(uint *)((long)param_1 + 0x172c) = (uint)*(byte *)(lVar7 + 0x4b8);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      iVar6 = *(int *)((long)param_1 + 0x16f4) + 1;
      goto LAB_00aa28a0;
    case 0x65:
      lVar7 = param_1[0xa7];
      iVar6 = _DAT_00000060;
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        iVar6 = *(int *)(lVar7 + 0x60);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (iVar6 == 0) {
        if (*(uint *)((long)param_1 + 0x16fc) == 0xff) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x16fc) + 0xa9];
          if (plVar8 != (long *)0x0) {
            (**(code **)(plVar8[9] + 0x10))();
          }
        }
        FUN_00ad2de0(plVar8,*(int *)((long)param_1 + 0x172c) != 0);
        FUN_00ad2e30(plVar8,(char)param_1[0x2e6]);
        (**(code **)(*plVar8 + 0x198))(plVar8,1);
        uVar1 = (**(code **)(*param_1 + 0x8f8))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
        FUN_00a71a00(param_1,uVar1,0);
        FUN_00a713b0(param_1,*(undefined4 *)((long)param_1 + 0x16fc),0,0);
        FUN_00a71b20(param_1,0,0);
        lVar7 = FUN_00aa4f60(*(undefined8 *)(param_1[0xb9] + 0x38));
        FUN_00a08cf0(lVar7 + 0x2f8,0x12,param_1);
        *(int *)((long)param_1 + 0x16f4) = *(int *)((long)param_1 + 0x16f4) + 1;
        if (plVar8 != (long *)0x0) {
          (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
        }
      }
      break;
    case 0x66:
      goto switchD_00aa26cc_caseD_66;
    case 0x78:
      iVar6 = 0x66;
LAB_00aa28a0:
      *(int *)((long)param_1 + 0x16f4) = iVar6;
    }
    uVar3 = 0;
switchD_00aa26cc_caseD_66:
    return uVar3;
  }
  uVar3 = 1;
  switch(*(int *)((long)param_1 + 0x16f4)) {
  case 0:
    uVar5 = 2;
    break;
  case 1:
    *(undefined4 *)((long)param_1 + 0x16f4) = 2;
  case 2:
    if ((char)param_1[0x2e6] == '\0') {
LAB_00aa2168:
      uVar5 = 6;
    }
    else {
      uVar5 = 3;
    }
    break;
  case 3:
    FUN_00a79350(param_1,0x34,0);
    uVar5 = 5;
    break;
  default:
    goto switchD_00aa211c_caseD_4;
  case 5:
    uVar2 = FUN_00a79c80(param_1);
    if ((uVar2 & 1) == 0) goto switchD_00aa211c_caseD_4;
    goto LAB_00aa2168;
  case 6:
    FUN_00a79350(param_1,(int)param_1[0x2e5],0);
    uVar5 = 7;
    break;
  case 7:
    uVar2 = FUN_00a79c80(param_1);
    if ((uVar2 & 1) != 0) {
      lVar7 = FUN_00aa4f60(*(undefined8 *)(param_1[0xb9] + 0x38));
      FUN_00a08cf0(lVar7 + 0x2f8,0x12,param_1);
      if ((char)param_1[0x2e6] == '\0') goto LAB_00aa21f0;
      uVar5 = 8;
      break;
    }
    goto switchD_00aa211c_caseD_4;
  case 8:
    FUN_00a79350(param_1,0x35,0);
    *(undefined1 *)(param_1 + 0x2e6) = 0;
    uVar5 = 10;
    break;
  case 10:
    uVar2 = FUN_00a79c80(param_1);
    if ((uVar2 & 1) != 0) {
LAB_00aa21f0:
      uVar5 = 0xb;
      break;
    }
    goto switchD_00aa211c_caseD_4;
  case 0xb:
    goto switchD_00aa211c_caseD_b;
  }
  *(undefined4 *)((long)param_1 + 0x16f4) = uVar5;
switchD_00aa211c_caseD_4:
  uVar3 = 0;
switchD_00aa211c_caseD_b:
  return uVar3;
}


