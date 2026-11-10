/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb50c0; name: FUN_00bb50c0
 */


void FUN_00bb50c0(long param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  
  uVar1 = param_2[1] - 2;
  if ((uint)param_2[1] < 2) goto LAB_00bb5240;
  iVar4 = *param_2;
  if (iVar4 == 0) {
    if (5 < (int)uVar1) {
      iVar4 = 0;
      goto LAB_00bb5220;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x614);
    iVar6 = 1;
    iVar4 = *param_2;
    uVar1 = param_2[1];
    if (1 < uVar1) goto LAB_00bb518c;
LAB_00bb5234:
    uVar3 = 0xffffffff;
  }
  else {
    if (uVar1 < 5) {
      lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar5 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar8 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar2 = FUN_0150b350(lVar5);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      iVar6 = 0;
      iVar4 = *param_2;
      uVar1 = param_2[1];
    }
    else {
LAB_00bb5220:
      uVar2 = 0xffffffff;
      iVar6 = 2;
      uVar1 = param_2[1];
    }
    if (uVar1 < 2) goto LAB_00bb5234;
LAB_00bb518c:
    if (iVar4 == 0) {
      if (5 < (int)(uVar1 - 2)) goto LAB_00bb5234;
      uVar3 = FUN_00bcfb20(1,0);
    }
    else {
      if (4 < uVar1 - 2) goto LAB_00bb5234;
      uVar3 = FUN_00bcfb20(0,iVar4 + -1);
    }
  }
  if (iVar6 != 2) {
    FUN_00bb7480(param_1,iVar6,uVar2,uVar3,param_3 & 1);
    return;
  }
LAB_00bb5240:
  lVar7 = param_1 + 0x100;
  if ((param_3 & 1) == 0) {
    if (*(char *)(param_1 + 0x60d) == '\0') {
      return;
    }
    FUN_00ffd3a0(lVar7,"anime_info_in");
    FUN_00ffcf80(lVar7,"anime_info_out");
  }
  else {
    FUN_00ffd3a0(lVar7,"anime_info_in");
    FUN_00ffcf80(lVar7,"anime_info_out");
    FUN_00ffd570(lVar7,"anime_info_out");
    FUN_00ffd450(lVar7,"anime_info_out");
  }
  *(undefined1 *)(param_1 + 0x60d) = 0;
  return;
}


