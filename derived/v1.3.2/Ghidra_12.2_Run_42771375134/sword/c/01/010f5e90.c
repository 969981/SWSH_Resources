/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f5e90; name: FUN_010f5e90
 */


void FUN_010f5e90(long *param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  plVar4 = (long *)(*(long *)(*param_1 + 0x5d0) + 0x60);
  (**(code **)(*plVar4 + 8))(plVar4,1);
  puVar5 = (undefined8 *)FUN_010f6a80(param_2);
  local_78 = puVar5[1];
  local_50 = puVar5[6];
  local_48 = puVar5[7];
  local_40 = puVar5[8];
  local_70 = puVar5[2];
  uStack_68 = puVar5[3];
  local_60 = puVar5[4];
  uStack_58 = puVar5[5];
  _local_80 = CONCAT44(2,(int)*puVar5);
  _local_38 = CONCAT44((int)((ulong)puVar5[9] >> 0x20),0xffffffff);
  FUN_010f6260(*param_1,&local_80);
  FUN_00ffa3d0(*param_1,0);
  pcVar6 = (code *)param_1[3];
  if (pcVar6 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar6)(param_1 + 6);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 6);
    lVar1 = *param_3;
    lVar2 = param_3[1];
    lVar3 = param_3[3];
    param_1[4] = param_3[2];
    param_1[5] = lVar3;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


