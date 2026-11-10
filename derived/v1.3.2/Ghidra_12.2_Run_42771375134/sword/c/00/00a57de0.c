/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a57de0; name: FUN_00a57de0
 */


void FUN_00a57de0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_50 = 0x821d6d2a779fe786;
  local_48 = "common/btl_app.dat";
  local_40 = 0x12;
  FUN_00ff8620(&local_60,*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x548) + 0xb0),&local_50
               ,10);
  lVar2 = *(long *)(local_60 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    puVar1 = (undefined8 *)(param_1 + 0x28);
    break;
  case 1:
  case 2:
  case 3:
    puVar1 = (undefined8 *)(param_1 + 0x30);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar3 = *puVar1;
  FUN_0077eb10(lVar2,&DAT_021551b8,*(undefined8 *)(param_1 + 0x40));
  FUN_00ffa3d0(uVar3,0);
  local_58 = 0x101;
  local_60 = (local_60 >> 0x10 & 0xffff) << 0x10;
  local_56 = 1;
  FUN_00a5a320(uVar3,*(undefined8 *)(param_1 + 0x40),&local_60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


