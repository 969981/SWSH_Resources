/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbadc0; name: FUN_00bbadc0
 */


undefined8 FUN_00bbadc0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  iVar7 = *(int *)(param_1 + 0x614);
  if (iVar7 != 0) {
    iVar1 = param_2 + iVar7 + -1;
    if (iVar1 < 0) {
      iVar1 = param_2 + iVar7 + 6;
    }
    else {
      iVar6 = 0;
      if (5 < iVar1) {
        iVar6 = 6;
      }
      iVar1 = (iVar1 - iVar6) + 1;
    }
    if (iVar1 != iVar7) {
      iVar7 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x618);
        uVar2 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,iVar1,iVar7);
        if ((iVar6 == 2) || ((uVar2 & 1) == 0)) {
          lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,iVar1,iVar7);
          FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar4,2,iVar7,0);
          if (lVar4 == 0) goto LAB_00bbaf00;
          uVar8 = *(undefined8 *)(param_1 + 0x5f0);
          uVar3 = FUN_00bc8500(param_1,1,iVar1,iVar7);
          uVar9 = 0;
          if ((uVar3 & 1) == 0) {
            uVar9 = 2;
          }
          FUN_00bd3390(uVar8,2,iVar7,uVar9,uVar2 & 1);
          FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),2,iVar7,0);
        }
        else {
          FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),0,2,iVar7,0);
LAB_00bbaf00:
          lVar4 = 0;
        }
        FUN_00bb7250(param_1,lVar4,iVar7,1);
        iVar7 = iVar7 + 1;
        if (iVar7 == 6) {
          FUN_00bd12d0(*(undefined8 *)(param_1 + 0x5f0),3,1);
          FUN_00bbafd0(param_1,iVar1,1);
          *(int *)(param_1 + 0x614) = iVar1;
          param_1 = param_1 + 0x100;
          if (param_2 < 0) {
            FUN_00ffd3a0(param_1,"anime_team_shift_left");
            FUN_00ffcf80(param_1,"anime_team_shift_right");
            pcVar5 = "anime_L_header_team_00_arrow_l";
          }
          else {
            FUN_00ffd3a0(param_1,"anime_team_shift_right");
            FUN_00ffcf80(param_1,"anime_team_shift_left");
            pcVar5 = "anime_L_header_team_00_arrow_r";
          }
          FUN_00ffcf80(param_1,pcVar5);
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}


