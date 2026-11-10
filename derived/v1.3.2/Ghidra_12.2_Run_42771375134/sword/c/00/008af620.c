/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008af620; name: FUN_008af620
 */


void FUN_008af620(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long local_68;
  undefined1 auStack_60 [24];
  long local_48;
  long local_38;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0xa0) + 0x810);
  if (iVar1 == -1) {
    return;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          goto LAB_008af6b0;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_008af6b0:
  piVar7 = (int *)(param_1 + (long)iVar1 * 4 + 0x80);
  switch(*piVar7) {
  case 2:
    FUN_01521eb0(lVar5,*(undefined4 *)
                        (*(long *)(param_1 + 0xa0) +
                         (long)*(int *)(*(long *)(param_1 + 0xa0) + 0x640) * 4 + 0x64c));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          goto LAB_008af730;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_008af730:
    uVar4 = 0xc364034ea30b;
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0xa0);
    if (*(int *)(lVar3 + (long)*(int *)(lVar3 + 0x640) * 4 + 0x64c) == 5) {
      local_68 = puVar6[0x28];
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x3b0) + 0x10))(local_68 + 0x3b0);
        lVar3 = *(long *)(param_1 + 0xa0);
      }
      FUN_01522030(lVar5,&local_68,*(undefined8 *)(lVar3 + 0x828),*(undefined4 *)(lVar3 + 0x824));
      if (local_68 == 0) goto LAB_008af998;
      (**(code **)(*(long *)(local_68 + 0x3b0) + 0x18))(local_68 + 0x3b0);
      local_68 = 0;
      lVar3 = *(long *)(param_1 + 0x68);
    }
    else {
      local_38 = puVar6[0x27];
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x3b0) + 0x10))(local_38 + 0x3b0);
        lVar3 = *(long *)(param_1 + 0xa0);
      }
      FUN_01521f50(lVar5,&local_38,*(undefined8 *)(lVar3 + 0x828),*(undefined4 *)(lVar3 + 0x824));
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x3b0) + 0x18))(local_38 + 0x3b0);
        local_38 = 0;
      }
LAB_008af998:
      lVar3 = *(long *)(param_1 + 0x68);
    }
    if ((lVar3 != 0) && (puVar6 = *(undefined8 **)(lVar3 + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          uVar4 = 0xc464034ea4be;
          goto LAB_008af9e4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
    uVar4 = 0xc464034ea4be;
    break;
  case 4:
    FUN_01521440(lVar5,*(undefined4 *)
                        (*(long *)(param_1 + 0xa0) +
                         (long)*(int *)(*(long *)(param_1 + 0xa0) + 0x640) * 4 + 0x64c));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          uVar4 = 0xc764034ea9d7;
          goto LAB_008af9e4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
    uVar4 = 0xc764034ea9d7;
    break;
  case 5:
    FUN_01521930(lVar5,*(undefined4 *)
                        (*(long *)(param_1 + 0xa0) +
                         (long)*(int *)(*(long *)(param_1 + 0xa0) + 0x640) * 4 + 0x64c));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          uVar4 = 0xc664034ea824;
          goto LAB_008af9e4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
    uVar4 = 0xc664034ea824;
    break;
  case 6:
    FUN_01521e10(lVar5,*(undefined4 *)
                        (*(long *)(param_1 + 0xa0) +
                         (long)*(int *)(*(long *)(param_1 + 0xa0) + 0x640) * 4 + 0x64c));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          uVar4 = 0xc564034ea671;
          goto LAB_008af9e4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
    uVar4 = 0xc564034ea671;
    break;
  case 7:
    FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
    FUN_008c7160(*(undefined8 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_00ffa160(*(undefined8 *)(param_1 + 0xa0),1,1);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0xa0),1);
    FUN_008c99a0(*(undefined8 *)(param_1 + 0xa0),1);
    iVar1 = *piVar7;
    goto joined_r0x008af938;
  default:
    goto switchD_008af6d4_default;
  }
LAB_008af9e4:
  FUN_008a6b70(puVar6,uVar4 | 0x2992000000000000,0,0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa8),0);
  FUN_006cf0a0(auStack_60,&DAT_02617180);
  FUN_016d3620(auStack_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  iVar1 = *piVar7;
joined_r0x008af938:
  if (iVar1 != 7) {
switchD_008af6d4_default:
    FUN_008c82b0(*(undefined8 *)(param_1 + 0xa0),0);
    *(undefined4 *)(param_1 + 0x7c) = 4;
  }
  FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x5e8));
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x810) = 0xffffffff;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


