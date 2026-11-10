/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcf730; name: FUN_00bcf730
 */


void FUN_00bcf730(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  long local_38;
  
  if (param_2 != 2) {
    local_38 = FUN_00bccb30();
    if ((local_38 != 0) &&
       (uVar1 = FUN_0150aef0(*(undefined8 *)(param_1 + 0x70),param_3,param_4), (uVar1 & 1) == 0)) {
      local_60 = 0xb0ab98e449061a1c;
      pcStack_58 = "BOX_LOOK";
      local_50 = 8;
      local_48 = 0;
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))((long *)(local_38 + 0x48));
      FUN_014aed90(&local_60,&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      FUN_00bce610(param_1,param_2,param_3,param_4);
    }
  }
  return;
}


