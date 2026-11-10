/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fc470; name: FUN_009fc470
 */


uint FUN_009fc470(long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *local_50;
  long local_48;
  
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    plVar7 = *(long **)(param_1 + 8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    plVar5 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x90,8);
    if (plVar5 == (long *)0x0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN_00883c20(plVar5,*(undefined8 *)(param_1 + 8));
    plVar5[1] = (long)plVar7;
    plVar5[2] = (long)plVar5;
    plVar5[3] = 0x90;
    plVar5[4] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x10))();
    }
    (**(code **)(*plVar5 + 0x70))(plVar5);
    iVar1 = FUN_00884820(*param_2);
    if (iVar1 != 0) {
      uVar3 = 0;
      do {
        lVar4 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar3);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        uVar6 = FUN_0087d610(lVar4,2);
        if ((uVar6 & 1) == 0) {
          (**(code **)(*plVar5 + 0x28))(plVar5,lVar4);
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        uVar3 = uVar3 + 1 & 0xff;
        uVar2 = FUN_00884820(*param_2);
      } while (uVar3 < uVar2);
    }
    lVar4 = *param_2;
    local_48 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_50 = plVar5;
    if (plVar5 == (long *)0x0) {
      uVar3 = FUN_009fc6e0(param_1,&local_48,&local_50,param_3);
    }
    else {
      plVar7 = plVar5 + 9;
      (**(code **)(*plVar7 + 0x10))(plVar7);
      uVar3 = FUN_009fc6e0(param_1,&local_48,&local_50,param_3);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_50 = (long *)0x0;
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      local_48 = 0;
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
    }
  }
  return uVar3 & 1;
}


