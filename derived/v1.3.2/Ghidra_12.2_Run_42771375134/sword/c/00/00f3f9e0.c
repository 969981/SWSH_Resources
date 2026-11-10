/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3f9e0; name: FUN_00f3f9e0
 */


void FUN_00f3f9e0(float param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  
  if ((int)param_2[1] != 0) {
    return;
  }
  *(undefined4 *)(param_2 + 1) = 1;
  uVar1 = 0;
  if (*(long *)(*param_2 + 0x138) != 0) {
    local_48 = 0xdcd3e4222c43eac9;
    FUN_0167ba30(*(long *)(*param_2 + 0x138),&local_48);
    uVar1 = *(undefined8 *)(*param_2 + 0x138);
  }
  iVar2 = (int)param_1;
  iVar3 = (int)((param_1 - (float)iVar2) * DAT_01d4c6b8);
  if (0x62 < iVar2) {
    iVar2 = 99;
  }
  if (param_1 <= 0.0) {
    iVar2 = 0;
    iVar3 = 0;
  }
  local_48 = 0xec456bc7d9c848c8;
  FUN_0167bdb0(0x40000000,uVar1,&local_48);
  local_48 = 0x6b5cf572cf804f36;
  FUN_0167bdb0((float)(iVar2 / 10),*(undefined8 *)(*param_2 + 0x138),&local_48);
  local_48 = 0x6b5cf672cf8050e9;
  FUN_0167bdb0((float)(iVar2 % 10),*(undefined8 *)(*param_2 + 0x138),&local_48);
  local_48 = 0xa5c13f7299c76217;
  FUN_0167bdb0((float)(iVar3 / 10),*(undefined8 *)(*param_2 + 0x138),&local_48);
  local_48 = 0xa5c13e7299c76064;
  FUN_0167bdb0((float)(iVar3 % 10),*(undefined8 *)(*param_2 + 0x138),&local_48);
  return;
}


