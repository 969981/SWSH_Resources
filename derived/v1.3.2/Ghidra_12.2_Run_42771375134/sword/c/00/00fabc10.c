/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fabc10; name: FUN_00fabc10
 */


void FUN_00fabc10(long param_1,ulong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x198) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50 = &local_38;
  local_38 = 0;
  local_48 = 0x60dd9a51c30b7a73;
  FUN_008a0cd0(lVar3,&local_50,0);
  uVar1 = local_38;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  uVar2 = -((param_2 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  FUN_016b5480(uVar1,*(undefined4 *)(&DAT_01d4b650 + uVar2),*(undefined4 *)(&DAT_01d4a240 + uVar2),
               *(undefined4 *)(param_1 + 0x1c0));
  FUN_016b5d60(uVar1,param_3);
  FUN_016d2080(*(undefined8 *)(param_1 + 0x198));
  *(undefined4 *)(param_1 + 0x1a0) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  return;
}


