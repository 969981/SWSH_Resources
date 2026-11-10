/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00926180; name: FUN_00926180
 */


undefined4 FUN_00926180(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  
  uVar2 = thunk_FUN_008dd3c0(param_3);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_008dd3f0(param_3), (uVar2 & 1) != 0)) {
    uVar2 = FUN_008e1810(param_2,0x25);
    if ((uVar2 & 1) == 0) {
      FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00(param_2);
      FUN_008db3f0(uVar3,2,uVar1);
      FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x14,param_4);
      FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x12,param_3);
      FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xe4);
      param_3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x12);
      FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      local_38 = FUN_008e1aa0(param_2,0x25);
      FUN_008ed2f0(&local_38);
      param_3 = FUN_009454b0();
    }
  }
  return param_3;
}


