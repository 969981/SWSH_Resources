/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01006730; name: FUN_01006730
 */


void FUN_01006730(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_70;
  long local_68;
  long lStack_60;
  long *local_58;
  
  uVar9 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x108);
  lVar4 = FUN_0100e6f0(&local_68,uVar9);
  puVar3 = PTR_DAT_02717c58;
  puVar8 = *(undefined8 **)PTR_DAT_02717c58;
  *(long *)PTR_DAT_02717c58 = lVar4;
  if (puVar8 != (undefined8 *)0x0) {
    plVar12 = (long *)puVar8[1];
    uVar14 = puVar8[4];
    uVar5 = puVar8[2];
    uVar1 = puVar8[3];
    (**(code **)*puVar8)(puVar8);
    (**(code **)(*plVar12 + 0x18))(plVar12,uVar5,uVar1,uVar14);
    lVar4 = *(long *)puVar3;
  }
  lVar13 = 0;
  if (lVar4 != 0) {
    lVar13 = lVar4 + 0x48;
  }
  FUN_006cef90(lVar13);
  FUN_0100ecc0(uVar9,0);
  uVar5 = FUN_0100fb80(uVar9,0);
  FUN_01007460(uVar5,PTR_DAT_0271f700,uVar9,0);
  puVar3 = PTR_DAT_0271e860;
  local_58 = *(long **)(*(long *)PTR_DAT_0271e860 + 0x48);
  lVar13 = *(long *)PTR_DAT_02710848;
  lVar4 = FUN_01010090(&local_68,*(undefined8 *)(param_1 + 8));
  FUN_006d1120();
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar4;
  lVar4 = FUN_01010090(&local_68,*(undefined8 *)(param_1 + 8));
  FUN_006d1120();
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  lVar11 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x70) = lVar4;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    lVar4 = *(long *)(param_1 + 0x70);
  }
  local_68 = lVar11;
  lStack_60 = lVar4;
  if (lVar4 != 0) {
    plVar12 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar4 = *(long *)(lVar13 + 0x60);
  if (lVar4 == 0) {
    FUN_00d88990(0,&local_68);
  }
  else {
    plVar12 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_00d88990(lVar4,&local_68);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  puVar2 = PTR_DAT_027105c8;
  FUN_00790dd0(*(undefined8 *)(*(long *)PTR_DAT_027105c8 + 0x238),*(undefined8 *)(param_1 + 0x68));
  FUN_00790dd0(*(undefined8 *)(*(long *)puVar2 + 0x238),*(undefined8 *)(param_1 + 0x70));
  FUN_01010380(local_58,0);
  FUN_01010ba0(local_58,0);
  FUN_010075b0(param_1);
  FUN_01011280(local_58,0,&local_58,&local_68);
  local_70 = *(undefined8 *)(*(long *)puVar3 + 0x28);
  FUN_010113d0(local_58,0,&local_70);
  FUN_01011b50(local_58,0);
  FUN_01011c90(local_58,0,&local_58,&local_68);
  FUN_01011de0(local_58,0,&local_58);
  FUN_01011f30(local_58,0);
  FUN_01012070(local_58,0,&local_58);
  FUN_010121c0(local_58,0);
  FUN_01012300(local_58,0);
  FUN_01012440(local_58,0);
  FUN_01012580(local_58,0);
  local_70 = *(undefined8 *)(*(long *)puVar3 + 0x88);
  FUN_010126c0(local_58,0,&local_70);
  FUN_00f51380(*(undefined8 *)PTR_DAT_0271fc30,*(undefined8 *)(*(long *)puVar3 + 8),0);
  lVar4 = FUN_01012810(&local_70,local_58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x7b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x7b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  *(long *)(param_1 + 0x7b8) = lVar4;
  FUN_01029270(lVar4,*(undefined8 *)(*(long *)puVar3 + 8),0);
  lVar4 = FUN_010128f0(&local_70,local_58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x7c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x7c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x7c0) = 0;
  }
  *(long *)(param_1 + 0x7c0) = lVar4;
  FUN_00f4b560(lVar4,*(undefined8 *)(*(long *)puVar3 + 8),0);
  lVar4 = FUN_010129d0(&local_70,param_2);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x408) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x408) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  *(long *)(param_1 + 0x408) = lVar4;
  lVar4 = FUN_01012ab0(&local_70,local_58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x410) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x410) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  *(long *)(param_1 + 0x410) = lVar4;
  puVar2 = PTR_DAT_027234a0;
  *(undefined8 *)(param_1 + 0x418) = 0x100000002;
  lVar13 = *(long *)puVar2;
  *(undefined8 *)(lVar13 + 0x20) = 0x1c800;
  *(long **)(lVar13 + 0x10) = param_2;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x1c800,8);
  *(long *)(lVar13 + 0x18) = lVar4;
  if (lVar4 == 0) {
    (**(code **)(**(long **)(lVar13 + 0x10) + 0xb8))();
    lVar4 = *(long *)(lVar13 + 0x18);
  }
  FUN_00760770(lVar4,lVar4 + 0xb8,0x1c748,0);
  *(long *)(lVar13 + 8) = lVar4;
  lVar11 = *(long *)puVar2;
  *(undefined8 *)(lVar11 + 0x40) = 0x5800;
  *(long **)(lVar11 + 0x30) = param_2;
  lVar13 = (**(code **)(*param_2 + 0x10))(param_2,0x5800,8);
  *(long *)(lVar11 + 0x38) = lVar13;
  if (lVar13 == 0) {
    (**(code **)(**(long **)(lVar11 + 0x30) + 0xb8))();
    lVar13 = *(long *)(lVar11 + 0x38);
  }
  FUN_00760770(lVar13,lVar13 + 0xb8,0x5748,0);
  plVar12 = local_58;
  *(long *)(lVar11 + 0x28) = lVar13;
  puVar2 = PTR_DAT_02710860;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar11 + 0x80) < 0x10) {
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,0xae50,0x10);
    if (lVar6 == 0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    FUN_00da3e90(lVar6,lVar4,lVar13);
    *(long **)(lVar6 + 8) = plVar12;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0xae50;
    *(undefined8 *)(lVar6 + 0x20) = 0x10;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x420) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x420) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x420) = 0;
    }
    *(long *)(param_1 + 0x420) = lVar6;
    FUN_00dacf30(lVar6,*(undefined8 *)(*(long *)puVar3 + 8));
    uVar7 = FUN_00dad090(*(undefined8 *)(param_1 + 0x420));
    while ((uVar7 & 1) == 0) {
      nn::os::SleepThread(&DAT_01f78a40);
      uVar7 = FUN_00dad090(*(undefined8 *)(param_1 + 0x420));
    }
    *(undefined2 *)(param_1 + 0x488) = 0;
    *(undefined4 *)(param_1 + 0x48c) = 0;
    *(undefined2 *)(param_1 + 0x490) = 0;
    *(undefined2 *)(param_1 + 0x494) = 0;
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined2 *)(param_1 + 0x49c) = 0;
    *(undefined2 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    *(undefined2 *)(param_1 + 0x4a8) = 0;
    *(undefined2 *)(param_1 + 0x4ac) = 0;
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    *(undefined2 *)(param_1 + 0x4b4) = 0;
    *(undefined2 *)(param_1 + 0x4b8) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    *(undefined2 *)(param_1 + 0x4c0) = 0;
    *(undefined2 *)(param_1 + 0x4c4) = 0;
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    *(undefined2 *)(param_1 + 0x4cc) = 0;
    *(undefined2 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    *(undefined2 *)(param_1 + 0x4d8) = 0;
    *(undefined2 *)(param_1 + 0x4dc) = 0;
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    *(undefined2 *)(param_1 + 0x4e4) = 0;
    *(undefined2 *)(param_1 + 0x4e8) = 0;
    *(undefined4 *)(param_1 + 0x4ec) = 0;
    *(undefined2 *)(param_1 + 0x4f0) = 0;
    *(undefined1 *)(param_1 + 0x560) = 0;
    *(undefined2 *)(param_1 + 0x4f4) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    *(undefined2 *)(param_1 + 0x4fc) = 0;
    *(undefined2 *)(param_1 + 0x500) = 0;
    *(undefined4 *)(param_1 + 0x504) = 0;
    *(undefined2 *)(param_1 + 0x508) = 0;
    *(undefined2 *)(param_1 + 0x50c) = 0;
    *(undefined4 *)(param_1 + 0x510) = 0;
    *(undefined2 *)(param_1 + 0x514) = 0;
    *(undefined2 *)(param_1 + 0x518) = 0;
    *(undefined4 *)(param_1 + 0x51c) = 0;
    *(undefined2 *)(param_1 + 0x520) = 0;
    *(undefined2 *)(param_1 + 0x524) = 0;
    *(undefined4 *)(param_1 + 0x528) = 0;
    *(undefined2 *)(param_1 + 0x52c) = 0;
    *(undefined2 *)(param_1 + 0x530) = 0;
    *(undefined4 *)(param_1 + 0x534) = 0;
    *(undefined2 *)(param_1 + 0x538) = 0;
    *(undefined2 *)(param_1 + 0x53c) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(undefined2 *)(param_1 + 0x544) = 0;
    *(undefined2 *)(param_1 + 0x548) = 0;
    *(undefined4 *)(param_1 + 0x54c) = 0;
    *(undefined2 *)(param_1 + 0x550) = 0;
    *(undefined2 *)(param_1 + 0x554) = 0;
    *(undefined4 *)(param_1 + 0x558) = 0;
    *(undefined2 *)(param_1 + 0x55c) = 0;
    *(undefined2 *)(param_1 + 0x561) = 0;
    plVar12 = *(long **)(*(long *)puVar3 + 0x48);
    uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x18,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_010278e0(uVar9,plVar12);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      plVar10 = *(long **)(param_1 + 0x790);
      *(undefined8 *)(param_1 + 0x790) = uVar9;
      if (plVar10 != (long *)0x0) {
        if (plVar10[1] != 0) {
          (**(code **)(*(long *)(plVar10[1] + 0x48) + 0x18))();
          plVar10[1] = 0;
        }
        if (*plVar10 != 0) {
          (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
          *plVar10 = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x798) + 0x18))
                  (*(long **)(param_1 + 0x798),plVar10,*(undefined8 *)(param_1 + 0x7a0),
                   *(undefined8 *)(param_1 + 0x7a8));
      }
      *(undefined8 *)(param_1 + 0x7a0) = 0x18;
      *(long **)(param_1 + 0x798) = plVar12;
      *(undefined8 *)(param_1 + 0x7a8) = 8;
      *(undefined8 *)(param_1 + 0x824) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


