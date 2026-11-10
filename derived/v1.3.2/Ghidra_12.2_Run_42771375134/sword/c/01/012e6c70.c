/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e6c70; name: FUN_012e6c70
 */


void FUN_012e6c70(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_012e5a10(0,param_1,5,0);
  local_30 = 0x407a55817bcd2834;
  uStack_28 = 0;
  FUN_0130fad0(param_1,&local_30,0);
  if (*(int *)(param_1 + 0x500) == 2) {
    lVar1 = *(long *)(param_1 + 0x838);
    *(undefined8 *)(param_1 + 0x838) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x844) = 0;
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  if ((((*(long *)(param_1 + 0x4f8) != 0) && (uVar2 = FUN_0130e360(), (uVar2 & 1) != 0)) &&
      (*(uint *)(param_1 + 0x500) < 5)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
    *(undefined4 *)(param_1 + 0x844) = 0x41f00000;
  }
  return;
}


