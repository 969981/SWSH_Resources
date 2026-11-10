/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fe7a0; name: FUN_013fe7a0
 */


void FUN_013fe7a0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  long local_38;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x810);
  if (iVar1 == -1) {
    return;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      lVar3 = FUN_013f9d40();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar7 = puVar7 + -10;
          goto LAB_013fe82c;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_013fe82c:
  piVar8 = (int *)(param_1 + (long)iVar1 * 4 + 0x7c);
  switch(*piVar8) {
  case 2:
    FUN_01521eb0(lVar6,*(undefined4 *)
                        (*(long *)(param_1 + 0x98) +
                         (long)*(int *)(*(long *)(param_1 + 0x98) + 0x640) * 4 + 0x64c));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      lVar3 = FUN_013f9d40();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar7 = puVar7 + -10;
          goto LAB_013fe8ac;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
LAB_013fe8ac:
    uVar5 = 0xc364034ea30b;
    break;
  case 3:
    local_38 = puVar7[0x14];
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x3b0) + 0x10))(local_38 + 0x3b0);
    }
    FUN_01521f50(lVar6,&local_38,*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x828),
                 *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x824));
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x3b0) + 0x18))(local_38 + 0x3b0);
      local_38 = 0;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      lVar3 = FUN_013f9d40();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar7 = puVar7 + -10;
          uVar5 = 0xc464034ea4be;
          goto LAB_013fea90;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
    uVar5 = 0xc464034ea4be;
    break;
  case 4:
    FUN_01521440(lVar6,*(undefined4 *)
                        (*(long *)(param_1 + 0x98) +
                         (long)*(int *)(*(long *)(param_1 + 0x98) + 0x640) * 4 + 0x64c));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      lVar3 = FUN_013f9d40();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar7 = puVar7 + -10;
          uVar5 = 0xc764034ea9d7;
          goto LAB_013fea90;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
    uVar5 = 0xc764034ea9d7;
    break;
  case 5:
    FUN_01521930(lVar6,*(undefined4 *)
                        (*(long *)(param_1 + 0x98) +
                         (long)*(int *)(*(long *)(param_1 + 0x98) + 0x640) * 4 + 0x64c));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      lVar3 = FUN_013f9d40();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar7 = puVar7 + -10;
          uVar5 = 0xc664034ea824;
          goto LAB_013fea90;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
    uVar5 = 0xc664034ea824;
    break;
  case 6:
    FUN_01521e10(lVar6,*(undefined4 *)
                        (*(long *)(param_1 + 0x98) +
                         (long)*(int *)(*(long *)(param_1 + 0x98) + 0x640) * 4 + 0x64c));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      lVar3 = FUN_013f9d40();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar7 = puVar7 + -10;
          uVar5 = 0xc564034ea671;
          goto LAB_013fea90;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
    uVar5 = 0xc564034ea671;
    break;
  case 7:
    FUN_01038270(*(undefined8 *)(param_1 + 0xa0),1);
    FUN_008c7160(*(undefined8 *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x78) = 1;
    FUN_008c61d0(*(undefined8 *)(param_1 + 0x98),1);
    lVar3 = *(long *)(param_1 + 0x98);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x688),1);
    FUN_016b2d70(*(undefined8 *)(lVar3 + 0x690),1);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x98),1);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x98),1,1);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x98),1);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    goto LAB_013feaa4;
  default:
    goto switchD_013fe850_default;
  }
LAB_013fea90:
  FUN_013fafe0(puVar7,uVar5 | 0x2992000000000000,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
LAB_013feaa4:
  FUN_00ffa3d0(uVar4,0);
  if (*piVar8 != 7) {
switchD_013fe850_default:
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x98),0);
    *(undefined4 *)(param_1 + 0x78) = 3;
  }
  FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5e8));
  *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x810) = 0xffffffff;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


