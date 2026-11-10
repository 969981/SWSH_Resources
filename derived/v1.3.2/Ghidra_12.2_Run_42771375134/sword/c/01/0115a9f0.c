/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115a9f0; name: FUN_0115a9f0
 */


void FUN_0115a9f0(long param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong local_38;
  
  if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  pbVar2 = (&PTR_s_msg_ui_netbtl_playername_01_02678180)[param_2];
  uVar3 = *(undefined8 *)(param_1 + 0x5d0);
  local_38 = 0xcbf29ce484222645;
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    local_38 = (local_38 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar2;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar3,&local_38,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_38,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  }
  if (lVar4 == 0) {
    uVar3 = FUN_0077d470(0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_0077d470(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN_0077d520(*(undefined8 *)(param_1 + 0x718),uVar3);
  local_38 = 0xcf177e9705ae4de5;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5d0),&local_38,*(undefined8 *)(param_1 + 0x728));
  FUN_014c7a10(*(undefined8 *)(param_1 + 0x710),0,*(undefined8 *)(param_1 + 0x718),0,0);
  FUN_014c62d0(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x720),
               *(undefined8 *)(param_1 + 0x728));
  lVar4 = *(long *)(param_1 + 0x708);
  uVar3 = FUN_0077d470(*(undefined8 *)(param_1 + 0x720));
  FUN_00ffd700(param_1 + 0x100,lVar4 + ((ulong)param_2 + 6) * 8 + 0x290,uVar3,10);
  return;
}


