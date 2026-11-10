/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013cec60; name: FUN_013cec60
 */


void FUN_013cec60(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  FUN_013226d0(*(undefined8 *)(param_1 + 0x90));
  *(undefined1 *)(param_1 + 0xa0) = 0;
  uVar1 = FUN_01321f40(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    FUN_01322430(*(undefined8 *)(param_1 + 0x90));
  }
  uVar1 = FUN_01363360(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_0132d9a0();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    FUN_013634c0(*(undefined8 *)(param_1 + 0x98),0,*(undefined1 *)(puVar4 + 0xbf));
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}


