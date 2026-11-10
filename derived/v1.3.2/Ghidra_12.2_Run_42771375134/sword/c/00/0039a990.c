/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a990; name: FUN_0039a990
 */


void FUN_0039a990(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  int local_14;
  
  uVar2 = param_2 & 1;
  *(undefined1 *)(param_1 + 0x90) = 1;
  local_14 = (int)(param_2 >> 1);
  lVar4 = *(long *)(param_1 + uVar2 * 0x30 + 8);
  uVar6 = param_2 >> 6 & 0x7ffffff;
  uVar1 = *(uint *)(lVar4 + uVar6 * 4);
  uVar7 = 1 << (param_2 >> 1 & 0x1f);
  if ((uVar1 & uVar7) != 0) {
    *(uint *)(lVar4 + uVar6 * 4) = uVar1 & (uVar7 ^ 0xffffffff);
    puVar5 = (uint *)(param_1 + uVar2 * 0x30 + 0x20);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar4 = *(long *)(param_1 + uVar2 * 0x30 + 0x18);
      uVar6 = 0;
      do {
        uVar7 = (uint)uVar6;
        if (*(int *)(lVar4 + uVar6 * 4) == local_14) break;
        uVar7 = uVar7 + 1;
        uVar6 = (ulong)uVar7;
      } while (uVar7 < uVar1);
      if (uVar7 != uVar1) {
        *puVar5 = uVar1 - 1;
        *(undefined4 *)(lVar4 + (ulong)uVar7 * 4) = *(undefined4 *)(lVar4 + (ulong)(uVar1 - 1) * 4);
      }
    }
  }
  puVar3 = (undefined8 *)(param_1 + uVar2 * 0x30);
  *(int *)((long)puVar3 + 0x2c) = *(int *)((long)puVar3 + 0x2c) + 1;
  (**(code **)(*(long *)*puVar3 + 8))((long *)*puVar3,&local_14,1);
  return;
}


