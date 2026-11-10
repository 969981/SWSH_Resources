/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a55d10; name: FUN_00a55d10
 */


void FUN_00a55d10(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x1b8);
  if (uVar2 == 0) {
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x20),0);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    local_28 = 0;
    FUN_016b7990(*(undefined8 *)(param_1 + 0x20),&local_28,1,0);
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x20),1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_016b2da0(uVar1,uVar2 != 0);
  uVar3 = 0;
  do {
    local_28 = uVar3 << 0x20;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x20),&local_28,uVar3 < uVar2);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x80);
  return;
}


