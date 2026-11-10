/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010580e0; name: FUN_010580e0
 */


long FUN_010580e0(undefined8 param_1,long *param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  ulong local_60;
  byte *pbStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x268,8);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_60 = 0xcbf29ce484222645;
  bVar1 = *param_3;
  pbVar4 = param_3;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    local_60 = (local_60 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar4;
  }
  local_50 = 8;
  local_48 = 0;
  pbStack_58 = param_3;
  FUN_00708690(lVar3,&local_60,*param_4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x268;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return lVar3;
}


