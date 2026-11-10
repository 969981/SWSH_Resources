/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932a40; name: FUN_00932a40
 */


undefined8 FUN_00932a40(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (9 < (int)param_2) {
    return 0;
  }
  lVar1 = param_1 + (ulong)param_2 * 4;
  if (*(int *)(lVar1 + 0x180) == 0) {
    return 0;
  }
  uVar5 = (ulong)param_2;
  uVar3 = FUN_008ed090();
  lVar4 = param_1 + uVar5 * 0x14;
  lVar2 = param_1 + uVar5 * 4;
  *(undefined8 *)(param_1 + uVar5 * 8 + 0x18) = uVar3;
  *(undefined4 *)(lVar2 + 0x68) = 0;
  *(undefined4 *)(lVar2 + 0x158) = 0;
  *(undefined4 *)(lVar1 + 0x180) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0x1f0000001f;
  *(undefined8 *)(lVar4 + 0x98) = 0x1f0000001f;
  *(undefined4 *)(lVar4 + 0xa0) = 0x1f;
  return 1;
}


