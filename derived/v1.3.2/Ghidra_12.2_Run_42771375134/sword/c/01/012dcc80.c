/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dcc80; name: FUN_012dcc80
 */


void FUN_012dcc80(long *param_1,int param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  ulong local_60;
  long *plStack_58;
  size_t local_50;
  long local_48;
  
  FUN_012dda00(param_1,param_3,param_4,param_5);
  puVar2 = PTR_DAT_02727a60;
  *(int *)(param_1 + 0x92) = param_2;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0xe0);
  param_1[10] = (long)(puVar2 + 0x150);
  *(undefined4 *)((long)param_1 + 0x494) = 0x3f800000;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  plVar3 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x10,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_4;
  puVar2 = PTR_DAT_027175d0;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar7 = (long *)param_1[0x93];
  param_1[0x93] = (long)plVar3;
  if (plVar7 != (long *)0x0) {
    *plVar7 = (long)(puVar2 + 0x10);
    if (plVar7[1] != 0) {
      (**(code **)(*(long *)(plVar7[1] + 0x48) + 0x18))();
      plVar7[1] = 0;
    }
    (**(code **)(*(long *)param_1[0x94] + 0x18))
              ((long *)param_1[0x94],plVar7,param_1[0x95],param_1[0x96]);
  }
  param_1[0x94] = (long)param_4;
  plVar3 = param_1 + 0x97;
  param_1[0x95] = 0x10;
  param_1[0x96] = 8;
  uVar6 = 0xcbf29ce484222645;
  snprintf((char *)plVar3,0x20,"Ball%02d",param_2);
  lVar4 = param_1[0x93];
  local_50 = strlen((char *)plVar3);
  bVar1 = *(byte *)(param_1 + 0x97);
  if (bVar1 != 0) {
    pbVar5 = (byte *)((long)param_1 + 0x4b9);
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  local_48 = 0;
  local_60 = uVar6;
  plStack_58 = plVar3;
  FUN_00895ca0(lVar4,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


