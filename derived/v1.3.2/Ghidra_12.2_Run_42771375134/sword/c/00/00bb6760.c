/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb6760; name: FUN_00bb6760
 */


void FUN_00bb6760(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x618) == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x5f8);
    uVar2 = FUN_00bd1790(*(undefined8 *)(param_1 + 0x5f0),0);
    FUN_00bd0100(uVar4,uVar2,0x1e);
    uVar4 = *(undefined8 *)(param_1 + 0x5f8);
    uVar2 = FUN_00bd1790(*(undefined8 *)(param_1 + 0x5f0),3);
    FUN_00bd0100(uVar4,uVar2,6);
    uVar4 = *(undefined8 *)(param_1 + 0x5f8);
    uVar2 = FUN_00bd1790(*(undefined8 *)(param_1 + 0x5f0),2);
    FUN_00bd0100(uVar4,uVar2,0x1e);
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    iVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x5f0);
      uVar1 = FUN_0150b350(lVar5);
      uVar3 = FUN_00bc8500(param_1,0,uVar1,iVar6);
      uVar1 = 0;
      if ((uVar3 & 1) == 0) {
        uVar1 = 2;
      }
      FUN_00bd3390(uVar2,0,iVar6,uVar1,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x1e);
    uVar2 = *(undefined8 *)(param_1 + 0x5f0);
    uVar3 = FUN_00bc8500(param_1,1,*(undefined4 *)(param_1 + 0x614),0);
    uVar1 = 0;
    if ((uVar3 & 1) == 0) {
      uVar1 = 2;
    }
    FUN_00bd3390(uVar2,3,0,uVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x5f0);
    uVar3 = FUN_00bc8500(param_1,1,*(undefined4 *)(param_1 + 0x614),1);
    uVar1 = 0;
    if ((uVar3 & 1) == 0) {
      uVar1 = 2;
    }
    FUN_00bd3390(uVar2,3,1,uVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x5f0);
    uVar3 = FUN_00bc8500(param_1,1,*(undefined4 *)(param_1 + 0x614),2);
    uVar1 = 0;
    if ((uVar3 & 1) == 0) {
      uVar1 = 2;
    }
    FUN_00bd3390(uVar2,3,2,uVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x5f0);
    uVar3 = FUN_00bc8500(param_1,1,*(undefined4 *)(param_1 + 0x614),3);
    uVar1 = 0;
    if ((uVar3 & 1) == 0) {
      uVar1 = 2;
    }
    FUN_00bd3390(uVar2,3,3,uVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x5f0);
    uVar3 = FUN_00bc8500(param_1,1,*(undefined4 *)(param_1 + 0x614),4);
    uVar1 = 0;
    if ((uVar3 & 1) == 0) {
      uVar1 = 2;
    }
    FUN_00bd3390(uVar2,3,4,uVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x5f0);
    uVar3 = FUN_00bc8500(param_1,1,*(undefined4 *)(param_1 + 0x614),5);
    uVar1 = 0;
    if ((uVar3 & 1) == 0) {
      uVar1 = 2;
    }
    FUN_00bd3390(uVar2,3,5,uVar1,0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
  else if (*(int *)(param_1 + 0x618) == 2) {
    FUN_00bb3b90(param_1,0);
    *(undefined4 *)(param_1 + 0x614) = 0;
  }
  iVar6 = (*(int *)(param_1 + 0x618) + 1) % 3;
  *(int *)(param_1 + 0x618) = iVar6;
  if (iVar6 == 1) {
    if (*(int *)(param_1 + 0x61c) == 2) {
      *(undefined4 *)(param_1 + 0x61c) = 0;
      FUN_00bb4e40(param_1);
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    uVar1 = FUN_0150b350(lVar5);
    FUN_00bb9350(param_1,0,uVar1,0,0,0);
    FUN_00bb9350(param_1,0,uVar1,1,0,0);
    FUN_00bb9350(param_1,0,uVar1,2,0,0);
    FUN_00bb9350(param_1,0,uVar1,3,0,0);
    FUN_00bb9350(param_1,0,uVar1,4,0,0);
    FUN_00bb9350(param_1,0,uVar1,5,0,0);
    FUN_00bb9350(param_1,0,uVar1,6,0,0);
    FUN_00bb9350(param_1,0,uVar1,7,0,0);
    FUN_00bb9350(param_1,0,uVar1,8,0,0);
    FUN_00bb9350(param_1,0,uVar1,9,0,0);
    FUN_00bb9350(param_1,0,uVar1,10,0,0);
    FUN_00bb9350(param_1,0,uVar1,0xb,0,0);
    FUN_00bb9350(param_1,0,uVar1,0xc,0,0);
    FUN_00bb9350(param_1,0,uVar1,0xd,0,0);
    FUN_00bb9350(param_1,0,uVar1,0xe,0,0);
    FUN_00bb9350(param_1,0,uVar1,0xf,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x10,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x11,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x12,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x13,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x14,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x15,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x16,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x17,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x18,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x19,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x1a,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x1b,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x1c,0,0);
    FUN_00bb9350(param_1,0,uVar1,0x1d,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x614);
    FUN_00bb9350(param_1,1,uVar1,0,0,0);
    FUN_00bb9350(param_1,1,uVar1,1,0,0);
    FUN_00bb9350(param_1,1,uVar1,2,0,0);
    FUN_00bb9350(param_1,1,uVar1,3,0,0);
    FUN_00bb9350(param_1,1,uVar1,4,0,0);
    FUN_00bb9350(param_1,1,uVar1,5,0,0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
  else if (iVar6 == 2) {
    FUN_00bb3b90(param_1,1);
    *(undefined4 *)(param_1 + 0x614) = 1;
  }
  lVar7 = param_1 + 0x100;
  FUN_00ffd430(lVar7,&DAT_02159b98);
  FUN_00ffd430(lVar7,&DAT_02159ba8);
  FUN_00ffd430(lVar7,&DAT_02159bb8);
  FUN_00ffd010(lVar7,&DAT_02159b98 + (long)*(int *)(param_1 + 0x618) * 0x10);
  FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159b90 + (long)*(int *)(param_1 + 0x618) * 0x10),
               0x12838748d7a634ac);
  FUN_00ffdc80(lVar7,"poke_panel");
  local_38 = FUN_016b8190();
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_38);
    break;
  case 1:
    FUN_00bbc160(param_1,&local_38);
    break;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_38);
    break;
  default:
    FUN_00bbcd10(param_1,&local_38);
  }
  return;
}


