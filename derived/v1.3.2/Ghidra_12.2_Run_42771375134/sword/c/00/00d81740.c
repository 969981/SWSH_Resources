/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d81740; name: FUN_00d81740
 */


void FUN_00d81740(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined8 local_28;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x278);
  uVar1 = FUN_00d71450(param_1 + 0x5dc);
  FUN_00d83b20(uVar3,uVar1);
  FUN_00d80e00(param_1);
  local_28 = 0x59ee533072e36b31;
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  local_2c[0] = 1;
  local_30[0] = 0;
  FUN_00d7eaf0(param_1,local_2c,local_30);
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  return;
}


