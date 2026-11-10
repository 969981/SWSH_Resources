/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0107f8a0; name: FUN_0107f8a0
 */


void FUN_0107f8a0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined1 local_34 [4];
  
  bVar1 = 1 < (int)param_2;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  local_34[0] = bVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_01524bd0(lVar3,bVar1);
  lVar2 = FUN_01524df0(lVar3);
  if (((int)param_2 < 4) && ((int)((ulong)param_2 >> 0x20) < 2)) {
    param_1 = param_1 + (param_2 >> 0x20) * 0x20 + ((param_2 << 0x20) >> 0x1d);
  }
  local_40 = *(undefined8 *)(param_1 + 0x68);
  local_44[0] = 0;
  FUN_00cc1c90(lVar2,&local_40,local_34,local_44);
  FUN_00cc13a0(lVar2,lVar2 + 8);
  *(undefined8 *)(lVar2 + 0x88) = local_40;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


