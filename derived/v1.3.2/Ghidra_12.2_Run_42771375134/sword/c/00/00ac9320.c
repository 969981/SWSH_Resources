/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac9320; name: FUN_00ac9320
 */


void FUN_00ac9320(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long *param_5,byte *param_6,uint param_7,uint param_8,uint param_9)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  long local_90;
  ulong local_88;
  byte *pbStack_80;
  size_t local_78;
  long local_70;
  long local_68;
  
  local_68 = *param_5;
  if (local_68 == 0) {
    FUN_00ac8ec0(param_1,param_2,param_3,param_4,&local_68,param_7 & 1,param_8 & 1,param_9 & 1);
  }
  else {
    plVar5 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_00ac8ec0(param_1,param_2,param_3,param_4,&local_68,param_7 & 1,param_8 & 1,param_9 & 1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_68 = 0;
  }
  local_78 = strlen((char *)param_6);
  bVar1 = *param_6;
  local_88 = 0xcbf29ce484222645;
  pbVar3 = param_6;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_88 = (local_88 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar3;
  }
  local_70 = 0;
  pbStack_80 = param_6;
  FUN_00ad0b70(&local_90,*param_5);
  lVar4 = *(long *)(local_90 + 0x350);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar2 = FUN_00722fb0(lVar4,&local_88);
  if (iVar2 < 0) {
    *(undefined8 *)(*(long *)(param_3 + 0x478) + 8) = 0;
  }
  else {
    *(long *)(*(long *)(param_3 + 0x478) + 8) = *(long *)(lVar4 + 0x1b8) + (long)iVar2 * 0x130;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return;
}


