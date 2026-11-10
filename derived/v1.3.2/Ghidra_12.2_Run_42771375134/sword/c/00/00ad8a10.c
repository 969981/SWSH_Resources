/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad8a10; name: FUN_00ad8a10
 */


int FUN_00ad8a10(char *param_1,long *param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int param3;
  int local_50;
  ushort local_4c;
  int local_3c;
  
  param_1[0x60] = '\0';
  (**(code **)(*param_2 + 0x220))(&local_50);
  iVar5 = local_50;
  if (param_4 == 0) goto LAB_00ad8af0;
  if (local_50 == 0x85) {
    if (local_3c == 1) {
      iVar5 = 4;
    }
    else if (local_3c == 2) {
      iVar5 = 6;
    }
    else {
      iVar5 = 2;
    }
    if (param_4 == 1) {
      iVar5 = iVar5 + 1;
    }
    param3 = 0x85;
LAB_00ad8b74:
    param_1[0x60] = '\x01';
    snprintf(param_1,0x40,"Play_PV_Btl_%03d_%02d_00",param3,(uint)local_4c);
  }
  else {
    if (local_50 == 0x34) {
      if (local_3c != 2) {
        iVar5 = 0x34;
        goto LAB_00ad8af0;
      }
      param_1[0x60] = '\0';
      uVar4 = s_Play_PV_Btl_052_sp_down_01cefbe4._16_8_;
      uVar3 = s_Play_PV_Btl_052_sp_down_01cefbe4._0_8_;
      uVar2 = s_Play_PV_Btl_052_sp_roar_01cde31d._16_8_;
      uVar1 = s_Play_PV_Btl_052_sp_roar_01cde31d._0_8_;
      if (param_4 == 1) {
        *(undefined8 *)(param_1 + 8) = s_Play_PV_Btl_052_sp_down_01cefbe4._8_8_;
        *(undefined8 *)(param_1 + 0x10) = uVar4;
        *(undefined8 *)param_1 = uVar3;
        iVar5 = 1;
        goto LAB_00ad8b94;
      }
      *(undefined8 *)(param_1 + 8) = s_Play_PV_Btl_052_sp_roar_01cde31d._8_8_;
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *(undefined8 *)param_1 = uVar1;
    }
    else {
      if (local_50 == 0x19) {
        if (local_3c == 2) {
          iVar5 = 10;
        }
        else if (local_3c == 1) {
          if (local_4c == 0) {
            iVar5 = 6;
          }
          else {
            iVar5 = 8;
          }
        }
        else if (local_4c == 0) {
          iVar5 = 2;
        }
        else {
          iVar5 = 4;
        }
        if (param_4 == 1) {
          iVar5 = iVar5 + 1;
        }
        param3 = 0x19;
        goto LAB_00ad8b74;
      }
LAB_00ad8af0:
      snprintf(param_1,0x40,"Play_PV_Btl_%03d_%02d_%s",iVar5,(uint)local_4c,*(char **)(param_3 + 8))
      ;
    }
    iVar5 = 1;
  }
LAB_00ad8b94:
  snprintf(param_1 + 0x40,0x10,"PM%03dVC",local_50);
  iVar5 = snprintf(param_1 + 0x50,0x10,"PM%03d_%02d",local_50,iVar5);
  return iVar5;
}


