/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ccc30; name: FUN_004ccc30
 */


ulong FUN_004ccc30(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int local_34;
  undefined1 auStack_30 [13];
  undefined1 local_23;
  undefined8 local_18;
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),auStack_30);
  local_23 = (undefined1)(int)*(float *)(*(long *)(param_1 + 0x18) + 0x270);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),auStack_30);
  local_18 = 0;
  local_34 = 0;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x80))
                    (*(long **)(param_1 + 0x58),&local_18,&local_34,0);
  if ((int)uVar3 == 0x2d || (int)uVar3 == 0x11) {
    if (local_34 == 0) {
      return 2;
    }
    *(int *)(param_1 + 0x68) = local_34;
    uVar2 = FUN_004cca20(param_1,local_18,0);
    uVar1 = 0x2d;
    if (uVar2 != 1) {
      uVar1 = uVar2;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}


