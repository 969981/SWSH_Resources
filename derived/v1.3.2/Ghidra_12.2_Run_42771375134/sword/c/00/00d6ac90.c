/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6ac90; name: FUN_00d6ac90
 */


undefined8 FUN_00d6ac90(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  void *__s;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  
  uVar2 = 1;
  switch(*(undefined4 *)(param_1 + 0x500)) {
  case 0:
    plVar5 = *(long **)(param_1 + 8);
    __s = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,0x110,0x10);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
      memset(__s,0,0x110);
    }
LAB_00d6b25c:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    lVar4 = *(long *)(*(long *)(param_1 + 0x550) + 8);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x170) != '\0')) {
      local_90 = *(undefined8 *)(param_1 + 0x58);
      local_88 = *(undefined8 *)(param_1 + 0x60);
      local_80 = *(undefined8 *)(param_1 + 0x68);
      local_78 = *(long *)(param_1 + 0x70);
      if (local_78 == 0) {
        FUN_00d6b260(param_1,&local_90);
      }
      else {
        plVar5 = (long *)(local_78 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00d6b260(param_1,&local_90);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        local_78 = 0;
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if ((*(char *)(param_1 + 0x4d8) != '\0') && (uVar3 = FUN_0150e0d0(lVar4), (uVar3 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x580) = 1;
        *(undefined4 *)(param_1 + 0x500) = 3;
        if (lVar4 == 0) {
          return 1;
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        return 1;
      }
      if (*(char *)(param_1 + 0x464) == '\0') {
        lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
        if (lVar6 == 0) {
          FUN_010672e0(&local_70,0,0);
        }
        else {
          plVar5 = (long *)(lVar6 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          FUN_010672e0(&local_70,lVar6,0);
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        FUN_00700830(local_70,0,7);
        bVar1 = FUN_01052db0(local_70);
        *(byte *)(param_1 + 0x581) = bVar1 & 1;
        FUN_01052d20(local_70,0);
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
          local_70 = 0;
        }
      }
      lVar7 = *(long *)PTR_DAT_0271e288;
      plVar5 = *(long **)(param_1 + 0x78);
      *(long **)(lVar7 + 0x10) = plVar5;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(param_1 + 0x4d0);
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0x4d0),8);
      *(long *)(lVar7 + 0x18) = lVar6;
      if (lVar6 == 0) {
        (**(code **)(**(long **)(lVar7 + 0x10) + 0xb8))();
        lVar6 = *(long *)(lVar7 + 0x18);
      }
      FUN_00760770(lVar6,lVar6 + 0xb8,*(long *)(param_1 + 0x4d0) + -0xb8,0);
      *(long *)(lVar7 + 8) = lVar6;
      *(long *)(param_1 + 0x520) = lVar6;
      FUN_008d4280(&local_70,lVar6);
      *(undefined8 *)(param_1 + 0x518) = uStack_68;
      *(long *)(param_1 + 0x510) = local_70;
      plVar5 = *(long **)(param_1 + 0x520);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00d6b25c;
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar5;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,0x450,0x10);
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_00d0fab0(lVar7,*(undefined8 *)(param_1 + 0x520));
      *(long **)(lVar7 + 8) = plVar5;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x450;
      *(undefined8 *)(lVar7 + 0x20) = 0x10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      FUN_006d1120(lVar7);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x508) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x508) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x508) = 0;
      }
      *(long *)(param_1 + 0x508) = lVar7;
      FUN_00d10650(lVar7,param_1 + 0x570);
      FUN_00d10710(*(undefined8 *)(param_1 + 0x508),param_1 + 0x490,param_1 + 0x58);
      *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x500) + 1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    break;
  case 2:
    if (*(int *)(*(long *)(param_1 + 0x508) + 0x2c0) == 2) {
      *(undefined4 *)(param_1 + 0x500) = 3;
    }
    break;
  case 3:
    goto switchD_00d6accc_caseD_3;
  }
  uVar2 = 0;
switchD_00d6accc_caseD_3:
  return uVar2;
}


