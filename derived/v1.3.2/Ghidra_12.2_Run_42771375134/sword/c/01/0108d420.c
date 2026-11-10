/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108d420; name: FUN_0108d420
 */


void FUN_0108d420(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  lVar3 = *(long *)(param_1 + 0x90);
  uVar2 = FUN_0108e980(uVar1);
  *(undefined4 *)(lVar3 + 0x4d8) = uVar2;
  lVar3 = *(long *)(param_1 + 0x90);
  FUN_0108e970(local_60,uVar1);
  FUN_0108ea50(lVar3 + 0x70,local_60);
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x90);
  FUN_014bb440(local_60,&DAT_0266f470);
  FUN_0108ea50(lVar3 + 400,local_60);
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x90);
  FUN_014bb440(local_60,&DAT_0266f488);
  FUN_0108ea50(lVar3 + 0x2b0,local_60);
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x68) = 8;
  return;
}


