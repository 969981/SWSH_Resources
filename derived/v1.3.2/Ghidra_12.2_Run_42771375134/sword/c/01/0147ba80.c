/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147ba80; name: FUN_0147ba80
 */


void FUN_0147ba80(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [24];
  long local_28;
  
  *(undefined4 *)(param_1 + 0x80) = 5;
  FUN_00ffcf80(*(long *)(param_1 + 0xa0) + 0x100,"anime_f_out");
  FUN_006cf0a0(auStack_40,&DAT_026a3868);
  FUN_016d3620(auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_01037030(*(undefined8 *)(param_1 + 0xa8));
  lVar1 = *(long *)(param_1 + 0xa0);
  FUN_016a7830(*(undefined8 *)(*(long *)(lVar1 + 0x6f8) + 0x140));
  FUN_016a7830(*(undefined8 *)(*(long *)(lVar1 + 0x700) + 0x140));
  FUN_016a7830(*(undefined8 *)(*(long *)(lVar1 + 0x708) + 0x140));
  FUN_016a7830(*(undefined8 *)(*(long *)(lVar1 + 0x710) + 0x140));
  return;
}


