/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ce020; name: FUN_003ce020
 */


void FUN_003ce020(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  long lVar2;
  undefined2 local_30 [4];
  undefined2 local_28 [4];
  
  if ((*param_2 >> 1 & 1) == 0) {
    local_30[0] = *(undefined2 *)(param_2 + 2);
    if (param_8 == 0) {
      local_28[0] = local_30[0];
      lVar2 = FUN_003ce0f0(param_1,param_3,param_4,local_28);
      uVar1 = *(uint *)(param_2 + 4);
    }
    else {
      lVar2 = FUN_003ce2e0(param_1,param_3,param_4,local_30);
      uVar1 = *(uint *)(param_2 + 4);
    }
  }
  else {
    lVar2 = FUN_003ce460(param_1,param_3,param_4,param_7);
    uVar1 = *(uint *)(param_2 + 4);
  }
  if (uVar1 != 0xffffffff) {
    *(byte *)(lVar2 + 0x25) = *(byte *)(lVar2 + 0x25) | 0x20;
    *(long *)(**(long **)(param_1 + 0x98) + (ulong)uVar1 * 8) = lVar2;
    *(uint *)(lVar2 + 0x38) = uVar1;
  }
  return;
}


