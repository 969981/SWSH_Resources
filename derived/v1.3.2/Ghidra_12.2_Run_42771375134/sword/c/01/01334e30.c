/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01334e30; name: FUN_01334e30
 */


void FUN_01334e30(long *param_1,long param_2,long param_3,ulong param_4)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint *puVar8;
  long *plVar9;
  long local_98 [2];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ushort local_64;
  undefined1 auStack_62 [4];
  undefined2 uStack_5e;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_52;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_46;
  
  uVar2 = FUN_01334a00();
  if (param_4 < uVar2) {
    puVar8 = *(uint **)(*(long *)(param_2 + 0x68) + 400);
    piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
    puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
    if (param_3 != 0) {
      param_4 = (ulong)((int)param_3 + 5);
    }
    local_68 = 0;
    puVar8 = (uint *)((long)puVar8 + (param_4 & 0xffffffff) * 4 + (ulong)*puVar8 + 4);
    local_98[1] = 0;
    local_88 = 0;
    local_48 = 0;
    piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
    local_70 = 0xffffffffffffffff;
    local_80 = 0xffffffffffffffff;
    local_5c = 0x1ff;
    local_4c = 0xffff;
    local_46 = 0x1000100;
    local_52 = 0xffffffff;
    local_5a = 0xffffffffffffffff;
    if (0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
      local_68 = 0;
      if (uVar2 != 0) {
        local_68 = *(undefined4 *)((long)piVar1 + uVar2);
      }
    }
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
      uVar7 = 0;
    }
    else {
      uVar7 = ((ushort *)((long)piVar1 - (long)*piVar1))[4];
      if ((ulong)uVar7 != 0) {
        uVar7 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)uVar7);
      }
    }
    _local_64 = CONCAT62(0xffff00ff0001,uVar7);
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) {
      uVar7 = 0;
    }
    else {
      uVar7 = ((ushort *)((long)piVar1 - (long)*piVar1))[9];
      if ((ulong)uVar7 != 0) {
        uVar7 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)uVar7);
      }
    }
    _local_64 = CONCAT26(0xffff,CONCAT24(uVar7,_local_64));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) {
      local_78 = 0x1ffffffff;
    }
    else {
      uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
      local_78 = 0x1ffffffff;
      if ((uVar2 != 0) && (local_78 = 0x1ffffffff, *(char *)((long)piVar1 + uVar2) != '\0')) {
        local_78 = 0x2ffffffff;
      }
    }
    plVar9 = *(long **)(param_2 + 0x58);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar9;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,0xb8,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar9 + 0xb8))(plVar9);
    }
    FUN_008662a0(lVar4,*(undefined8 *)(param_2 + 0x58),local_98 + 1);
    *(long **)(lVar4 + 8) = plVar9;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0xb8;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)piVar1 + uVar2);
    }
    FUN_0087d3f0(lVar4,uVar5);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
       (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar2 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)piVar1 + uVar2);
    }
    FUN_0087d540(lVar4,uVar5);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)piVar1 + uVar2);
    }
    FUN_00878ad0(lVar4,uVar5);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) ||
       (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar2 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)((long)piVar1 + uVar2);
    }
    FUN_01334620(local_98,param_2,uVar6);
    FUN_0087d230(lVar4,local_98[0]);
    if (local_98[0] != 0) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))((long *)(local_98[0] + 0x48));
    }
    *param_1 = lVar4;
  }
  else {
    *param_1 = 0;
  }
  return;
}


