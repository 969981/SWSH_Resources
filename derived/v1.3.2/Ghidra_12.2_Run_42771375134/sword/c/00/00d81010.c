/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d81010; name: FUN_00d81010
 */


void FUN_00d81010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined8 local_28;
  
  local_2c[0] = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58);
  uVar1 = FUN_00d70a10(*(long *)(*(long *)(*(long *)(param_1 + 0x5f0) + 0xe0) +
                                (ulong)*(uint *)(param_1 + 0x66c) * 0x10) + 0x18,local_2c);
  uVar2 = FUN_00d75e10(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x278),uVar1,0);
  FUN_00d80940(uVar2,uVar1);
  FUN_00d80e00(param_1);
  local_28 = 0x59ee533072e36b31;
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
  FUN_00d7dc80(param_1,uVar1);
  local_30[0] = 0;
  local_34[0] = FUN_00d71280(param_1 + 0x5dc);
  local_34[0] = local_34[0] & 1;
  FUN_00d7eaf0(param_1,local_30,local_34);
  return;
}


