/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea5550; name: FUN_00ea5550
 */


undefined8 FUN_00ea5550(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_70;
  long local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  uVar4 = 1;
  switch(*(undefined4 *)(param_1 + 0xc0)) {
  case 0:
    uVar4 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
    lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar8 + 0x1e0);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    local_68 = -0x4b8d05d8772091e4;
    local_60 = "script/fishing.dat";
    local_58 = 0x12;
    local_50 = 0;
    FUN_015ab460(&local_48,lVar10,uVar4,&local_68,1);
    if (*(long *)(param_1 + 200) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 200) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 200) = 0;
    }
    lVar6 = local_48;
    local_48 = 0;
    *(long *)(param_1 + 200) = lVar6;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    *(undefined4 *)(param_1 + 0xc0) = 1;
joined_r0x00ea5984:
    if (lVar10 != 0) {
LAB_00ea5988:
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    plVar9 = (long *)(lVar8 + 0x48);
    pcVar7 = *(code **)(*plVar9 + 0x18);
LAB_00ea59a4:
    (*pcVar7)(plVar9);
    break;
  case 1:
    uVar5 = FUN_014bca10(*(undefined8 *)(param_1 + 200));
    if ((uVar5 & 1) != 0) {
      lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(lVar8 + 0x60);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(lVar10 + 0x610);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      FUN_014bc870(*(undefined8 *)(param_1 + 200));
      lVar11 = *(long *)(*(long *)(param_1 + 200) + 0x68);
      puVar1 = PTR_DAT_02710920;
      if (lVar11 != 0) {
        puVar1 = (undefined *)(lVar11 + 0x58);
      }
      FUN_00faccf0(&local_68,lVar6,puVar1,0x23,*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x1a0),0)
      ;
      if (*(long *)(param_1 + 0xd0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xd0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xd0) = 0;
      }
      *(long *)(param_1 + 0xd0) = local_68;
      lVar12 = *(long *)(local_68 + 0x68);
      lVar11 = local_68;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
        lVar11 = *(long *)(param_1 + 0xd0);
      }
      FUN_00faae40(lVar11,*(undefined1 *)(param_1 + 0xc4));
      FUN_00fabb60(*(undefined8 *)(param_1 + 0xd0),0);
      lVar11 = *(long *)(param_1 + 0xd0);
      FUN_01679b10(*(undefined8 *)(lVar11 + 0x68));
      *(undefined1 *)(lVar11 + 0x88) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 2;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      goto LAB_00ea5988;
    }
    break;
  case 2:
    FUN_00faaf90(*(undefined8 *)(param_1 + 0xd0));
    uVar5 = FUN_00fab240(*(undefined8 *)(param_1 + 0xd0));
    if ((uVar5 & 1) != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0xd0) + 0x68);
      if (lVar8 == 0) {
        FUN_01679c40(0,1,1);
        *(undefined4 *)(param_1 + 0xc0) = 3;
        break;
      }
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_01679c40(lVar8,1,1);
      *(undefined4 *)(param_1 + 0xc0) = 3;
      pcVar7 = *(code **)(*plVar9 + 0x18);
      goto LAB_00ea59a4;
    }
    break;
  case 3:
    FUN_00faaf90(*(undefined8 *)(param_1 + 0xd0));
    lVar8 = *(long *)(*(long *)(param_1 + 0xd0) + 0x68);
    if (lVar8 == 0) {
      iVar3 = FUN_01679c20(0);
    }
    else {
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      iVar3 = FUN_01679c20(lVar8);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if (iVar3 == 6) {
      uVar4 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
      uVar5 = FUN_01020290(uVar4,0x1000000000000);
      if (((uVar5 & 1) != 0) || (uVar5 = FUN_01020290(uVar4,0x2000000000000), (uVar5 & 1) != 0)) {
        FUN_01679b30(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x68),1);
        *(undefined4 *)(param_1 + 0xc0) = 4;
      }
    }
    break;
  case 4:
    uVar5 = FUN_00fab260(*(undefined8 *)(param_1 + 0xd0));
    if ((uVar5 & 1) != 0) {
      FUN_00fab200(*(undefined8 *)(param_1 + 0xd0));
      puVar1 = PTR_DAT_02710848;
      lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(lVar8 + 0x1e0);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(*(long *)(param_1 + 200) + 0x68);
      puVar2 = (undefined8 *)PTR_DAT_02710920;
      if (lVar6 != 0) {
        puVar2 = (undefined8 *)(lVar6 + 0x58);
      }
      FUN_015ab9c0(lVar10,*puVar2);
      lVar6 = *(long *)(*(long *)puVar1 + 0x90);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar11 = *(long *)(lVar6 + 0x60);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar12 = *(long *)(lVar11 + 0x610);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      local_70 = *(long *)(param_1 + 0xd0);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
      }
      FUN_00fad100(lVar12,&local_70);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      *(undefined4 *)(param_1 + 0xc0) = 5;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      goto joined_r0x00ea5984;
    }
    break;
  case 5:
    goto switchD_00ea558c_caseD_5;
  }
  uVar4 = 0;
switchD_00ea558c_caseD_5:
  return uVar4;
}


