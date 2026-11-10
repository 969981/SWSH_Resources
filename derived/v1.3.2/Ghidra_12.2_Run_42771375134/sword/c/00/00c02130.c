/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c02130; name: FUN_00c02130
 */


void FUN_00c02130(long param_1)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined **local_90;
  long lStack_88;
  long *local_70;
  
  switch(*(undefined4 *)(param_1 + 0x700)) {
  case 0:
    pbVar8 = *(byte **)(param_1 + 0x708);
    if (pbVar8 == (byte *)0x0) break;
    local_90 = (undefined **)0xcbf29ce484222645;
    bVar2 = *pbVar8;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      local_90 = (undefined **)(((ulong)local_90 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_90,*(undefined8 *)(param_1 + 0x900));
    plVar3 = *(long **)(param_1 + 0x780);
joined_r0x00c02320:
    if (plVar3 != (long *)0x0) goto LAB_00c02468;
    goto LAB_00c02488;
  case 1:
    if (((*(long *)(param_1 + 0x730) != 0) && (*(short *)(param_1 + 0x738) != -1)) &&
       (*(short *)(param_1 + 0x73a) != -1)) {
      FUN_0077d520(*(undefined8 *)(param_1 + 0xb30));
      FUN_014c9110(*(undefined8 *)(param_1 + 0xb38),0,*(undefined8 *)(param_1 + 0xb30),
                   *(undefined1 *)(param_1 + 0x738),*(undefined1 *)(param_1 + 0x73a));
      pbVar8 = *(byte **)(param_1 + 0x708);
      bVar2 = *pbVar8;
      local_90 = (undefined **)0xcbf29ce484222645;
      while (bVar2 != 0) {
        pbVar8 = pbVar8 + 1;
        local_90 = (undefined **)(((ulong)local_90 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar8;
      }
      FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_90,*(undefined8 *)(param_1 + 0xb30));
      FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                   *(undefined8 *)(param_1 + 0xb30));
    }
    break;
  case 2:
    if (*(long *)(param_1 + 0x710) != 0) {
      plVar3 = *(long **)(param_1 + 8);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar3;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,0x80,8);
      if (lVar7 == 0) {
        (**(code **)(*plVar3 + 0xb8))(plVar3);
      }
      FUN_0077d050(lVar7,0x400);
      *(long **)(lVar7 + 8) = plVar3;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x80;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      FUN_0077d520(lVar7,*(undefined8 *)(param_1 + 0x710));
      pbVar8 = *(byte **)(param_1 + 0x708);
      bVar2 = *pbVar8;
      local_90 = (undefined **)0xcbf29ce484222645;
      while (bVar2 != 0) {
        pbVar8 = pbVar8 + 1;
        local_90 = (undefined **)(((ulong)local_90 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar8;
      }
      FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_90,*(undefined8 *)(param_1 + 0xb30));
      FUN_014c7aa0(*(undefined8 *)(param_1 + 0xb38),0,lVar7,*(undefined4 *)(param_1 + 0x718),0,0);
      FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                   *(undefined8 *)(param_1 + 0xb30));
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      plVar3 = *(long **)(param_1 + 0x780);
      goto joined_r0x00c02320;
    }
    break;
  case 3:
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),0,*(undefined4 *)(param_1 + 0x71c),
                 *(undefined4 *)(param_1 + 0x720),*(undefined4 *)(param_1 + 0x724),
                 *(undefined4 *)(param_1 + 0x728));
    pbVar8 = *(byte **)(param_1 + 0x708);
    bVar2 = *pbVar8;
    local_90 = (undefined **)0xcbf29ce484222645;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      local_90 = (undefined **)(((ulong)local_90 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_90,*(undefined8 *)(param_1 + 0xb30));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    *(undefined1 *)(param_1 + 0x750) = 1;
    plVar3 = *(long **)(param_1 + 0x780);
    goto joined_r0x00c023b4;
  }
  plVar3 = *(long **)(param_1 + 0x780);
joined_r0x00c023b4:
  if (plVar3 == (long *)0x0) {
LAB_00c02488:
    local_70 = (long *)0x0;
  }
  else {
LAB_00c02468:
    if ((long *)(param_1 + 0x760) == plVar3) {
      local_70 = (long *)&local_90;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_90);
    }
    else {
      local_70 = (long *)(**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_00c05590(&local_90,param_1 + 0x960);
  if (&local_90 == (undefined ***)local_70) {
    pcVar6 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00c024e0;
    pcVar6 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar6)();
LAB_00c024e0:
  *(undefined1 *)(param_1 + 0x95a) = *(undefined1 *)(param_1 + 0x752);
  *(undefined2 *)(param_1 + 0x958) = *(undefined2 *)(param_1 + 0x750);
  bVar5 = false;
  lVar10 = 0x790;
  *(undefined4 *)(param_1 + 0x6f8) = 1;
  *(undefined8 *)(param_1 + 0x950) = *(undefined8 *)(param_1 + 0x748);
  *(undefined1 *)(param_1 + 0x940) = 1;
  *(undefined1 *)(param_1 + 0xb71) = 1;
  *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(param_1 + 0x740);
  do {
    uVar1 = *(uint *)(param_1 + lVar10);
    if (uVar1 != 999) {
      uVar11 = (ulong)uVar1 & 0xff;
      lVar7 = param_1 + uVar11 * 8;
      uVar9 = *(undefined8 *)(lVar7 + 0x908);
      uVar4 = FUN_0077d470(*(undefined8 *)(param_1 + 0x700 + uVar11 * 8 + 0xa8));
      FUN_0077d520(uVar9,uVar4);
      *(undefined8 *)(lVar7 + 0xae0) = *(undefined8 *)(lVar7 + 0x908);
      lVar7 = (uVar11 + (ulong)(byte)uVar1 * 2) * 0x10;
      plVar3 = *(long **)(param_1 + 0x700 + lVar7 + 0x100);
      if (plVar3 == (long *)0x0) {
        local_70 = (long *)0x0;
      }
      else if ((long *)(param_1 + uVar11 * 0x30 + 0x7e0) == plVar3) {
        local_70 = (long *)&local_90;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_90);
      }
      else {
        local_70 = (long *)(**(code **)(*plVar3 + 0x10))();
      }
      FUN_00c056f0(&local_90,param_1 + lVar7 + 0x990);
      if (&local_90 == (undefined ***)local_70) {
        pcVar6 = *(code **)(*local_70 + 0x20);
LAB_00c025ec:
        (*pcVar6)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar6 = *(code **)(*local_70 + 0x28);
        goto LAB_00c025ec;
      }
      bVar5 = true;
    }
    lVar10 = lVar10 + 4;
    if (lVar10 == 0x7a8) {
      if (bVar5) {
        local_90 = &PTR_LAB_02639e40;
        lStack_88 = param_1;
        local_70 = (long *)&local_90;
        FUN_00c05590(&local_90,param_1 + 0x960);
        if (&local_90 == (undefined ***)local_70) {
          pcVar6 = *(code **)(*local_70 + 0x20);
        }
        else {
          if (local_70 == (long *)0x0) {
            return;
          }
          pcVar6 = *(code **)(*local_70 + 0x28);
        }
        (*pcVar6)();
      }
      return;
    }
  } while( true );
}


