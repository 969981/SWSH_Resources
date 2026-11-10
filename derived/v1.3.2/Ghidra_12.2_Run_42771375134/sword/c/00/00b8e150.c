/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8e150; name: FUN_00b8e150
 */


void FUN_00b8e150(long param_1)

{
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long lStack_68;
  long local_60;
  undefined4 local_58;
  long local_50;
  undefined8 local_48;
  undefined1 *local_40;
  long local_38;
  long local_30;
  undefined4 local_28;
  
  *(undefined8 *)(param_1 + 0x1704) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x170c) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x1714) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x171c) = 0xff;
  *(undefined4 *)(param_1 + 0x1724) = 0xff;
  *(undefined8 *)(param_1 + 0x1740) = 0x400000004;
  *(undefined8 *)(param_1 + 0x1748) = 0x400000004;
  *(undefined2 *)(param_1 + 0x1731) = 0;
  *(undefined1 *)(param_1 + 0x1733) = 0;
  *(undefined8 *)(param_1 + 0x16fc) = 0x100000000;
  FUN_00b8c450(*(undefined8 *)(param_1 + 0x5c8),*(undefined4 *)PTR_DAT_0271b1e0);
  FUN_00b8c410(*(undefined8 *)(param_1 + 0x5c8));
  FUN_00a9d760(&local_80,"bin/battle/waza/sequence/tu001.bseq");
  local_30 = local_60;
  local_48 = local_78;
  local_40 = (undefined1 *)local_70;
  local_38 = lStack_68;
  local_60 = 0;
  local_28 = local_58;
  local_50 = local_80;
  local_80 = 0;
  FUN_00a79ee0(param_1,&local_50,0);
  if ((local_38 != 0) && (local_50 != 0)) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_50 = 0;
  local_48 = 0xcbf29ce484222645;
  local_40 = &DAT_01d38550;
  local_38 = 0;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


