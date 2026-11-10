/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073dfe0; name: FUN_0073dfe0
 */


void FUN_0073dfe0(long param_1,long param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *(int *)(param_1 + 0x18) = param_3;
  FUN_0073e310();
  if (param_3 == 1) {
    return;
  }
  *(uint *)(*(long *)(param_2 + 0x60) + 0x100) = (uint)(param_3 != 0);
  FUN_006f2e20(*(undefined8 *)(param_2 + 0x60));
  lVar3 = *(long *)(param_2 + 0x60);
  iVar1 = *(int *)PTR_DAT_02715500;
  if (*(long *)(param_1 + 0x6d0) == *(long *)(param_1 + 0x6d8)) {
    if (*(int *)(lVar3 + 0x100) == 0) {
      lVar5 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x170;
      FUN_0199cb60(lVar5);
      if (*(int *)(lVar5 + 0x168) != 0) {
        FUN_0199de60(lVar5);
        *(undefined4 *)(lVar5 + 0x168) = 0;
      }
      FUN_0199cbc0(lVar5);
      *(undefined1 *)(lVar3 + 0x109) = 1;
      goto joined_r0x0073e254;
    }
    pcVar2 = *(code **)(lVar3 + 0x88);
    *(int *)(lVar3 + 0x104) = iVar1;
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined8 *)(lVar3 + 0x98) = 0;
      *(undefined8 *)(lVar3 + 0x80) = 0;
      *(undefined8 *)(lVar3 + 0x88) = 0;
      (*pcVar2)(lVar3 + 0xa0);
      iVar1 = *(int *)(lVar3 + 0x104);
    }
    *(code **)(lVar3 + 0x80) = FUN_00741970;
    *(undefined1 **)(lVar3 + 0x88) = &LAB_00741980;
    lVar5 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x170;
    *(undefined1 **)(lVar3 + 0x90) = &LAB_00741990;
    *(undefined1 **)(lVar3 + 0x98) = &LAB_007419a0;
    FUN_0199cb60(lVar5);
    (**(code **)(lVar3 + 0x80))(lVar3 + 0xa0);
    if (*(int *)(lVar5 + 0x168) != 0) {
      FUN_0199de60(lVar5);
      *(undefined4 *)(lVar5 + 0x168) = 0;
    }
  }
  else {
    if (*(int *)(lVar3 + 0x100) == 0) {
      lVar5 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x170;
      FUN_0199cb60(lVar5);
      FUN_0073eee0(param_1,*(undefined8 *)(param_2 + 0x60));
      if (*(int *)(lVar5 + 0x168) != 0) {
        FUN_0199de60(lVar5);
        *(undefined4 *)(lVar5 + 0x168) = 0;
      }
      FUN_0199cbc0(lVar5);
      *(undefined1 *)(lVar3 + 0x109) = 1;
      goto joined_r0x0073e254;
    }
    pcVar2 = *(code **)(lVar3 + 0x88);
    *(int *)(lVar3 + 0x104) = iVar1;
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined8 *)(lVar3 + 0x98) = 0;
      *(undefined8 *)(lVar3 + 0x80) = 0;
      *(undefined8 *)(lVar3 + 0x88) = 0;
      (*pcVar2)(lVar3 + 0xa0);
      iVar1 = *(int *)(lVar3 + 0x104);
    }
    *(long *)(lVar3 + 0xa0) = param_1;
    *(long *)(lVar3 + 0xa8) = param_2;
    *(code **)(lVar3 + 0x80) = FUN_007419b0;
    *(undefined1 **)(lVar3 + 0x88) = &LAB_007419c0;
    lVar5 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x170;
    *(undefined1 **)(lVar3 + 0x90) = &LAB_007419d0;
    *(undefined1 **)(lVar3 + 0x98) = &LAB_007419e0;
    FUN_0199cb60(lVar5);
    (**(code **)(lVar3 + 0x80))((long *)(lVar3 + 0xa0));
    if (*(int *)(lVar5 + 0x168) != 0) {
      FUN_0199de60(lVar5);
      *(undefined4 *)(lVar5 + 0x168) = 0;
    }
  }
  FUN_0199cbc0(lVar5);
  FUN_006f6c30(*(undefined8 *)PTR_DAT_02710460,lVar3);
  *(undefined1 *)(lVar3 + 0x109) = 1;
joined_r0x0073e254:
  if (param_3 == 0) {
    lVar5 = *(long *)(param_1 + 0x6d0);
    lVar3 = *(long *)(param_1 + 0x6d8);
    while (lVar3 != lVar5) {
      if (*(long *)(lVar3 + -0xb0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + -0xb0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -0xb0) = 0;
      }
      if (*(long *)(lVar3 + -0xb8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + -0xb8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -0xb8) = 0;
      }
      if (*(long *)(lVar3 + -200) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + -200) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -200) = 0;
      }
      lVar4 = lVar3 + -0x6b0;
      if (*(long *)(lVar3 + -0xd0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + -0xd0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -0xd0) = 0;
      }
      lVar6 = *(long *)(lVar3 + -0xe0);
      lVar3 = lVar4;
      if (lVar6 != 0) {
        do {
          lVar6 = lVar6 + -1;
          FUN_00784490(lVar4);
          lVar4 = lVar4 + 0x1f0;
        } while (lVar6 != 0);
      }
    }
    *(long *)(param_1 + 0x6d8) = lVar5;
  }
  else if (param_3 == 2) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


