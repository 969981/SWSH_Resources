/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac9b10; name: FUN_00ac9b10
 */


void FUN_00ac9b10(long param_1,undefined8 param_2,long *param_3,byte *param_4,uint param_5,
                 uint param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  long local_78;
  ulong local_70;
  byte *pbStack_68;
  size_t local_60;
  long local_58;
  long local_48;
  
  local_48 = *param_3;
  if (local_48 == 0) {
    FUN_00ac9910(param_1,param_2,&local_48,0xffffffff,param_5 & 1,param_6 & 1);
  }
  else {
    plVar5 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_00ac9910(param_1,param_2,&local_48,0xffffffff,param_5 & 1,param_6 & 1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_48 = 0;
  }
  local_60 = strlen((char *)param_4);
  bVar1 = *param_4;
  local_70 = 0xcbf29ce484222645;
  pbVar3 = param_4;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_70 = (local_70 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar3;
  }
  local_58 = 0;
  pbStack_68 = param_4;
  FUN_00aacf90(&local_78,*param_3);
  lVar4 = *(long *)(local_78 + 0x350);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar2 = FUN_00722fb0(lVar4,&local_70);
  if (iVar2 < 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x498) + 0x10) = 0;
  }
  else {
    *(long *)(*(long *)(param_1 + 0x498) + 0x10) = *(long *)(lVar4 + 0x1b8) + (long)iVar2 * 0x130;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


