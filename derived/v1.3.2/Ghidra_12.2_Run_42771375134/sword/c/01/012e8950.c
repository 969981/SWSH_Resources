/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8950; name: FUN_012e8950
 */


void FUN_012e8950(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = param_3;
  local_38 = param_4;
  FUN_0130fad0(param_1,&local_40,0);
  lVar1 = *(long *)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(int *)(param_1 + 0x500) == 2) {
    lVar1 = *(long *)(param_1 + 0x838);
    *(undefined8 *)(param_1 + 0x838) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x844) = 0;
  }
  *(undefined4 *)(param_1 + 0x500) = 2;
  if ((((*(long *)(param_1 + 0x4f8) != 0) && (uVar2 = FUN_0130e360(), (uVar2 & 1) != 0)) &&
      (*(uint *)(param_1 + 0x500) < 5)) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x500) & 0x1f) & 0x1aU) != 0)) {
    *(undefined4 *)(param_1 + 0x844) = 0x41f00000;
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x838);
  *(long *)(param_1 + 0x838) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(byte *)(param_1 + 0x840) = param_5 & 1;
  *(undefined1 *)(param_1 + 0x841) = 0;
  return;
}


