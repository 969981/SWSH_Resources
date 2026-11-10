/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a57b10; name: FUN_00a57b10
 */


void FUN_00a57b10(long param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  short local_50 [2];
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  
  puVar2 = (undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_00a5ae90(*puVar2,0);
  if (3 < *(uint *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  switch(*(uint *)(param_1 + 0x20)) {
  case 0:
    puVar2 = (undefined8 *)(param_1 + 0x28);
  }
  uVar1 = *puVar2;
  FUN_009e3590(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  FUN_00ffa3d0(uVar1,0);
  local_46 = 0;
  local_4c = 0;
  local_50[0] = (ushort)(param_4 & 1) << 8;
  local_48 = 0;
  FUN_00a5a320(uVar1,*(undefined8 *)(param_1 + 0x40),local_50);
  return;
}


