/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a43bb0; name: FUN_00a43bb0
 */


void FUN_00a43bb0(long *param_1,int *param_2,int param_3,uint param_4,undefined4 *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_38 = param_7;
  local_40 = param_8;
  puVar1 = &local_40;
  puVar2 = &local_38;
  if ((param_4 & 1) == 0) {
    puVar1 = &local_38;
    puVar2 = &local_40;
  }
  local_58 = *puVar2;
  uStack_50 = *puVar1;
  lVar4 = *(long *)(param_2 + 2);
  local_48 = *param_1 + 0x100;
  local_28 = param_6;
  if (param_3 == 3) {
    *param_2 = 3;
    *(undefined8 *)(param_2 + 4) = param_6;
    param_2[6] = 2;
    param_2[7] = 3;
    FUN_00ffd510(0x40000000,local_48,&local_28);
    FUN_016b2da0(lVar4,1);
    FUN_016b2d70(lVar4,1);
    *(undefined8 *)(lVar4 + 0xf8) = 0x800000000;
    FUN_00ffd430(local_48,&uStack_50);
    FUN_00ffd010(local_48,&local_58);
    uVar5 = 2;
  }
  else {
    if (param_3 == 2) {
      uVar5 = 2;
      *param_2 = 2;
      *(undefined8 *)(param_2 + 4) = param_6;
      param_2[6] = 0;
      param_2[7] = 3;
      FUN_00ffd510(0,local_48,&local_28);
      FUN_016b2da0(lVar4,1);
      FUN_016b2d70(lVar4,1);
      uVar3 = 0x800000000;
    }
    else {
      if (param_3 != 1) {
        *param_2 = param_3;
        *(undefined8 *)(param_2 + 4) = param_6;
        param_2[6] = 0;
        param_2[7] = 0;
        FUN_016b2da0(lVar4,0);
        FUN_016b2d70(lVar4,0);
        uVar5 = 0;
        *(undefined8 *)(lVar4 + 0xf8) = 0;
        goto LAB_00a43d40;
      }
      uVar5 = 1;
      *param_2 = 1;
      *(undefined8 *)(param_2 + 4) = param_6;
      param_2[6] = 1;
      param_2[7] = 3;
      FUN_00ffd510(0x3f800000,local_48,&local_28);
      FUN_016b2da0(lVar4,1);
      FUN_016b2d70(lVar4,1);
      uVar3 = 0x8000000000;
    }
    *(undefined8 *)(lVar4 + 0xf8) = uVar3;
    FUN_00ffd430(local_48,&uStack_50);
    FUN_00ffd010(local_48,&local_58);
  }
LAB_00a43d40:
  *param_5 = uVar5;
  return;
}


