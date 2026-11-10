/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932890; name: FUN_00932890
 */


undefined8 FUN_00932890(long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar1 = param_1 + (ulong)param_2 * 4;
  if (*(int *)(lVar1 + 0x180) == 0) {
    piVar3 = (int *)(lVar1 + 0x180);
    uVar8 = 1;
    *piVar3 = 1;
    uVar9 = (ulong)param_2;
    lVar6 = param_1 + uVar9 * 0x14;
    lVar1 = param_1 + uVar9 * 4;
    *(undefined8 *)(param_1 + uVar9 * 8 + 0x18) = *param_3;
    *(undefined4 *)(lVar1 + 0x68) = 0;
    *(undefined4 *)(lVar1 + 0x158) = 0;
    *(undefined2 *)(param_1 + uVar9 * 2 + 0x1a8) = 0;
    *(undefined8 *)(lVar6 + 0x90) = 0x1f0000001f;
    *(undefined8 *)(lVar6 + 0x98) = 0x1f0000001f;
    *(undefined4 *)(lVar6 + 0xa0) = 0x1f;
    bVar5 = FUN_008ed1f0(param_3);
    if (((int)param_2 < 10) && (bVar5 != 0x1f)) {
      if (*piVar3 != 0) {
        uVar4 = *(uint *)(lVar1 + 0x158);
        if (uVar4 < 5) {
          if (uVar4 != 0) {
            uVar7 = 0;
            do {
              if (*(uint *)(param_1 + uVar9 * 0x14 + uVar7 * 4 + 0x90) == (uint)bVar5)
              goto LAB_00932984;
              uVar2 = (int)uVar7 + 1;
              uVar7 = (ulong)uVar2;
            } while (uVar2 < uVar4);
          }
          *(uint *)(param_1 + uVar9 * 0x14 + (ulong)uVar4 * 4 + 0x90) = (uint)bVar5;
          *(uint *)(lVar1 + 0x158) = uVar4 + 1;
        }
      }
LAB_00932984:
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


