/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075b740; name: FUN_0075b740
 */


void FUN_0075b740(long *param_1,long param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_68;
  
  uVar4 = *(ulong *)(param_2 + 0x198);
  if (uVar4 < (ulong)(long)*(int *)(param_2 + 0x140)) {
    plVar6 = *(long **)(param_2 + 400);
    if (uVar4 == 0) {
LAB_0075b80c:
      plVar5 = plVar6;
      if (plVar5 != (long *)(*(long *)(param_2 + 400) + *(long *)(param_2 + 0x198) * 8)) {
LAB_0075b7cc:
        lVar7 = *(long *)(*plVar5 + 0x58);
        if (lVar7 != 0) {
          plVar6 = (long *)(lVar7 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          iVar1 = *(int *)(lVar7 + 0x54);
          (**(code **)(*plVar6 + 0x18))(plVar6);
          if (iVar1 != 0) goto LAB_0075b804;
        }
      }
    }
    else {
      iVar1 = *param_3;
      plVar5 = plVar6 + uVar4;
      lVar7 = uVar4 << 3;
      do {
        if ((*plVar6 != 0) && (iVar2 = FUN_0075a3a0(), iVar2 == iVar1)) goto LAB_0075b80c;
        lVar7 = lVar7 + -8;
        plVar6 = plVar6 + 1;
      } while (lVar7 != 0);
      if (plVar5 != (long *)(*(long *)(param_2 + 400) + *(long *)(param_2 + 0x198) * 8))
      goto LAB_0075b7cc;
    }
    nn::os::LockMutex((MutexType *)&DAT_029f3840);
    plVar6 = *(long **)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0x78);
    uVar9 = *(undefined8 *)(param_2 + 0x98);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar6;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0x1c0,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_0075a2d0(lVar3,*param_3,param_4,uVar8,uVar9);
    *(long **)(lVar3 + 8) = plVar6;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x1c0;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_68 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
    }
    FUN_0075b970(param_2 + 0x150,&local_68);
    lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 400) + *(long *)(param_2 + 0x198) * 8 + -8) +
                     0x58);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    *param_1 = lVar7;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    nn::os::UnlockMutex((MutexType *)&DAT_029f3840);
  }
  else {
LAB_0075b804:
    *param_1 = 0;
  }
  return;
}


