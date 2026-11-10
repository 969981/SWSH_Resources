/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103b530; name: FUN_0103b530
 */


void FUN_0103b530(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  long local_50;
  undefined8 local_48;
  undefined4 local_34;
  
  if (param_2 != 0) {
    return;
  }
  if (*(code **)(param_1 + 0x5d0) == (code *)0x0) {
    FUN_00ffd510(0,param_1 + 0x100,&DAT_02162cf0);
    pcVar6 = *(code **)(param_1 + 0x770);
  }
  else {
    local_d0 = *(undefined1 **)(param_1 + 0x6b0);
    local_48 = &local_50;
    local_50 = 0;
    local_34 = param_3;
    iVar5 = (**(code **)(param_1 + 0x5d0))(param_1 + 0x5f0,&local_34,&local_d0,&local_48);
    if (iVar5 == 1) {
      uVar11 = 0x3f800000;
      if (*(char *)(param_1 + 0x5cc) != '\0') {
        uVar11 = 0x40400000;
      }
      FUN_00ffd510(uVar11,param_1 + 0x100,&DAT_02162cf0);
      FUN_014bf3c0(*(undefined8 *)(param_1 + 0x670),*(undefined8 *)(param_1 + 0x6b0),10,0);
      if (local_50 == 0) {
LAB_0103b9bc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      lVar7 = FUN_019c1320(*(undefined8 *)(param_1 + 0x678));
      *(long *)(*(long *)(lVar7 + 0x18) + 8) = local_50;
      lVar7 = *(long *)(param_1 + 0x2b0);
    }
    else if (iVar5 == 0) {
      uVar11 = 0;
      if (*(char *)(param_1 + 0x5cc) != '\0') {
        uVar11 = 0x40000000;
      }
      FUN_00ffd510(uVar11,param_1 + 0x100,&DAT_02162cf0);
      FUN_014bf3c0(*(undefined8 *)(param_1 + 0x668),*(undefined8 *)(param_1 + 0x6b0),10,0);
      lVar7 = *(long *)(param_1 + 0x2b0);
    }
    else {
      FUN_00ffd510(0,param_1 + 0x100,&DAT_02162cf0);
      if (iVar5 != 2) goto LAB_0103b9bc;
      lVar7 = *(long *)(param_1 + 0x2b0);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar7 + 0x2e0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN_014ca220(lVar8,0,*(int *)(param_1 + 0x654) + 1,2,0,1);
    FUN_014ca220(lVar8,1,*(undefined4 *)(param_1 + 0x650),2,0,1);
    lVar9 = *(long *)(lVar7 + 0x2e8);
    if (lVar9 == 0) {
      FUN_0077d2f0(0,*(undefined8 *)(param_1 + 0x6b8));
    }
    else {
      plVar10 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0077d2f0(lVar9,*(undefined8 *)(param_1 + 0x6b8));
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    FUN_0167cce0(lVar7,&DAT_02162cc0,10);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    bVar4 = *(int *)(param_1 + 0x654) != 0;
    *(byte *)(*(long *)(param_1 + 0x698) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x698) + 0x58) & 0xfe | bVar4;
    *(byte *)(*(long *)(param_1 + 0x688) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x688) + 0x58) & 0xfe | bVar4;
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x6c0));
    uVar2 = *(int *)(param_1 + 0x650) - 1;
    uVar1 = *(uint *)(param_1 + 0x654);
    *(byte *)(*(long *)(param_1 + 0x6a0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x6a0) + 0x58) & 0xfe | uVar1 < uVar2;
    *(byte *)(*(long *)(param_1 + 0x690) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x690) + 0x58) & 0xfe | uVar1 < uVar2;
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x6c8));
    if (uVar1 < uVar2) {
      lVar7 = *(long *)(param_1 + 0x6d8);
      local_d0 = &LAB_0103bfe0;
      local_c8 = FUN_0103c040;
      local_c0 = FUN_0103c050;
      local_b8 = &LAB_0103c060;
      pcVar6 = *(code **)(lVar7 + 0x158);
      alStack_b0[0] = param_1;
      if (pcVar6 == (code *)0x0) {
LAB_0103b864:
        (*local_c0)(alStack_b0,lVar7 + 0x170);
        *(undefined1 **)(lVar7 + 0x168) = local_b8;
        *(code **)(lVar7 + 0x158) = local_c8;
        *(code **)(lVar7 + 0x160) = local_c0;
        *(undefined8 *)(lVar7 + 0x150) = local_d0;
      }
      else {
        *(undefined8 *)(lVar7 + 0x160) = 0;
        *(undefined8 *)(lVar7 + 0x168) = 0;
        *(undefined8 *)(lVar7 + 0x150) = 0;
        *(undefined8 *)(lVar7 + 0x158) = 0;
        (*pcVar6)(lVar7 + 0x170);
        if (local_c0 != (code *)0x0) goto LAB_0103b864;
      }
      pcVar6 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (code *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar6)(alStack_b0);
      }
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x6d8),1);
      pcVar6 = *(code **)(param_1 + 0x7f0);
      goto joined_r0x0103b980;
    }
    lVar7 = *(long *)(param_1 + 0x6d8);
    if (*(char *)(param_1 + 0x5cb) != '\0') {
      FUN_016b2d70(lVar7,0);
      pcVar6 = *(code **)(param_1 + 0x770);
      goto joined_r0x0103b5ec;
    }
    local_d0 = &LAB_0103c070;
    local_c8 = FUN_0103c0a0;
    local_c0 = FUN_0103c0b0;
    local_b8 = &LAB_0103c0c0;
    pcVar6 = *(code **)(lVar7 + 0x158);
    alStack_b0[0] = param_1;
    if (pcVar6 == (code *)0x0) {
LAB_0103b91c:
      (*local_c0)(alStack_b0,lVar7 + 0x170);
      *(undefined1 **)(lVar7 + 0x168) = local_b8;
      *(code **)(lVar7 + 0x158) = local_c8;
      *(code **)(lVar7 + 0x160) = local_c0;
      *(undefined8 *)(lVar7 + 0x150) = local_d0;
    }
    else {
      *(undefined8 *)(lVar7 + 0x160) = 0;
      *(undefined8 *)(lVar7 + 0x168) = 0;
      *(undefined8 *)(lVar7 + 0x150) = 0;
      *(undefined8 *)(lVar7 + 0x158) = 0;
      (*pcVar6)(lVar7 + 0x170);
      if (local_c0 != (code *)0x0) goto LAB_0103b91c;
    }
    pcVar6 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (code *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar6)(alStack_b0);
    }
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x6d8),1);
    pcVar6 = *(code **)(param_1 + 0x770);
  }
joined_r0x0103b5ec:
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(param_1 + 0x790);
  }
  pcVar6 = *(code **)(param_1 + 0x7f0);
joined_r0x0103b980:
  if (pcVar6 != (code *)0x0) {
    uVar3 = (ulong)local_d0 >> 0x20;
    local_d0 = (undefined1 *)CONCAT44((int)uVar3,*(undefined4 *)(param_1 + 0x654));
    uVar3 = (ulong)local_48 >> 0x20;
    local_48 = (long *)CONCAT44((int)uVar3,*(undefined4 *)(param_1 + 0x650));
    (*pcVar6)(param_1 + 0x810,&local_d0,&local_48);
  }
  return;
}


