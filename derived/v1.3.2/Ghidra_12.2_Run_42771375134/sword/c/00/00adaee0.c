/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adaee0; name: FUN_00adaee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00adaee0(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_60 [3];
  long local_48;
  
  FUN_00ac8d10(param_1,0);
  lVar3 = FUN_00adc640(param_1,*(undefined8 *)(param_1 + 8),param_2);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x5d0);
  *(long *)(param_1 + 0x5d0) = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (param_3 == 4) {
    uVar5 = *(undefined8 *)(param_1 + 0x5d0);
    uVar6 = 0x50;
LAB_00adaf88:
    FUN_007270a0(uVar5,uVar6);
LAB_00adaf8c:
    uVar5 = *(undefined8 *)(param_1 + 0x5d0);
    if ((param_4 & 1) == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x3f8);
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x400);
    }
    if (lVar3 == 0) {
LAB_00adaff8:
      local_60[0] = 8;
      FUN_00727220(uVar5,0,local_60);
      goto LAB_00adb000;
    }
    plVar7 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  else {
    if (param_3 == 8) {
      uVar5 = *(undefined8 *)(param_1 + 0x5d0);
      uVar6 = 0x10;
      goto LAB_00adaf88;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x5d0);
    if (param_3 == 3) {
      uVar6 = 0x20;
      goto LAB_00adaf88;
    }
    FUN_007270a0(uVar5,0x40);
    puVar2 = PTR_DAT_02719958;
    puVar1 = PTR_DAT_02719950;
    if (param_3 != 2) {
      if (param_3 == 6) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x370);
        for (lVar3 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x368); lVar3 != lVar4;
            lVar3 = lVar3 + 0x48) {
          FUN_006cf0a0(local_60,puVar2);
          FUN_0072f720(lVar3,local_60);
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            local_48 = 0;
          }
        }
      }
      else if (param_3 == 5) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x370);
        for (lVar3 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x368); lVar3 != lVar4;
            lVar3 = lVar3 + 0x48) {
          FUN_006cf0a0(local_60,puVar1);
          FUN_0072f720(lVar3,local_60);
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            local_48 = 0;
          }
        }
      }
      goto LAB_00adaf8c;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x5d0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x498);
    if (lVar3 == 0) goto LAB_00adaff8;
    plVar7 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_60[0] = 8;
  FUN_00727220(uVar5,lVar3,local_60);
  (**(code **)(*plVar7 + 0x18))(plVar7);
LAB_00adb000:
  FUN_00727800(*(undefined8 *)(param_1 + 0x5d0),3);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  uVar6 = _UNK_01d4a138;
  uVar5 = _DAT_01d4a130;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined1 *)(param_1 + 0x700) = 1;
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  return;
}


