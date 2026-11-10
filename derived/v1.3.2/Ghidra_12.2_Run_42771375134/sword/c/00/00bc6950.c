/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc6950; name: FUN_00bc6950
 */


void FUN_00bc6950(long param_1)

{
  uint uVar1;
  int param3;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  char local_80 [64];
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  uVar1 = FUN_0150b350(lVar4);
  param3 = FUN_01509eb0(lVar4);
  lVar5 = param_1 + 0x100;
  if (*(char *)(param_1 + 0x620) == '\0') {
    local_80[0] = -0x2d;
    local_80[1] = '8';
    local_80[2] = 'u';
    local_80[3] = 'f';
    local_80[4] = 'k';
    local_80[5] = '`';
    local_80[6] = -0x4f;
    local_80[7] = '$';
    uVar2 = FUN_00ffdef0(lVar5,local_80);
    FUN_016b2da0(uVar2,0);
  }
  snprintf(local_80,0x40,"anime_L_box_change_00_box_%02d",param3);
  FUN_00ffcf80(lVar5,local_80);
  if (param3 != 0) {
    iVar6 = 0;
    do {
      FUN_00bc6b50(param_1,iVar6);
      iVar6 = iVar6 + 1;
    } while (param3 != iVar6);
  }
  FUN_00bb37b0(param_1,uVar1,1);
  if (*(int *)(param_1 + 0x618) == 1) {
    piVar3 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
    uVar7 = 0;
    do {
      while ((((*(short *)((long)piVar3 + 6) == 0 || (*piVar3 != 0)) ||
              (uVar1 != *(byte *)(piVar3 + 1))) || (uVar7 != *(byte *)((long)piVar3 + 5)))) {
        FUN_00bb9350(param_1,0,uVar1,uVar7,0,0);
        uVar7 = uVar7 + 1;
        if (uVar7 == 0x1e) goto LAB_00bc6b00;
      }
      FUN_00bb9350(param_1,0,uVar1,uVar7,0,1);
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x1e);
  }
LAB_00bc6b00:
  FUN_00ffcf80(lVar5,"anime_box_in");
  FUN_00bbb900(param_1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


