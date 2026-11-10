/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01058840; name: FUN_01058840
 */


long FUN_01058840(undefined8 param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  ulong local_50;
  byte *pbStack_48;
  undefined8 local_40;
  long local_38;
  
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
  local_50 = 0xcbf29ce484222645;
  bVar1 = *param_3;
  pbVar4 = param_3;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    local_50 = (local_50 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar4;
  }
  local_40 = 0x15;
  local_38 = 0;
  pbStack_48 = param_3;
  FUN_00708690(lVar3,&local_50,2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x268;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return lVar3;
}


