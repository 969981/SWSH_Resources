/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a586a0; name: FUN_00a586a0
 */


void FUN_00a586a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_42;
  
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
  uVar2 = *puVar1;
  local_50 = 0x8abaf272a347e952;
  local_42 = 0xffff;
  local_90 = *param_2;
  local_88 = param_2[1];
  local_80 = param_2[2];
  local_78 = param_2[3];
  local_70 = param_2[4];
  local_68 = param_2[5];
  uStack_60 = 0;
  local_44 = *(undefined1 *)(param_2 + 6);
  local_48 = 0;
  local_58 = 4;
  FUN_00ffa3d0(uVar2,0);
  FUN_00a5a980(uVar2,&local_90);
  return;
}


