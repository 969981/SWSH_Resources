/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001da6d0; name: FUN_001da6d0
 */


void FUN_001da6d0(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_001b3ed0(*(undefined8 *)PTR_DAT_02711040,param_1,*(undefined8 *)(param_1 + 0x10),1);
  FUN_001da7e0(param_1);
  lVar2 = *(long *)(param_1 + 0x180);
  uVar1 = *(uint *)(lVar2 + 0x90);
  if (uVar1 != 0) {
    lVar5 = *(long *)(lVar2 + 0x88);
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      if (*(long *)(lVar5 + uVar4 * 8) == param_1) break;
      uVar3 = uVar3 + 1;
      uVar4 = (ulong)uVar3;
    } while (uVar3 < uVar1);
    if (uVar3 != uVar1) {
      *(uint *)(lVar2 + 0x90) = uVar1 - 1;
      *(undefined8 *)(lVar5 + (ulong)uVar3 * 8) = *(undefined8 *)(lVar5 + (ulong)(uVar1 - 1) * 8);
    }
  }
  lVar2 = *(long *)(param_1 + 400);
  if ((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x1c8), uVar1 != 0)) {
    lVar5 = *(long *)(lVar2 + 0x1c0);
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      if (*(long *)(lVar5 + uVar4 * 8) == param_1) break;
      uVar3 = uVar3 + 1;
      uVar4 = (ulong)uVar3;
    } while (uVar3 < uVar1);
    if (uVar3 != uVar1) {
      *(uint *)(lVar2 + 0x1c8) = uVar1 - 1;
      *(undefined8 *)(lVar5 + (ulong)uVar3 * 8) = *(undefined8 *)(lVar5 + (ulong)(uVar1 - 1) * 8);
    }
  }
  if (*(undefined8 **)(param_1 + 0x188) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x188))();
  }
  lVar2 = FUN_001e1e70(param_1);
  if (lVar2 != 0) {
    FUN_001cd8e0(lVar2 + 0x10,param_1 + 0x60,1,0);
  }
  FUN_001caf70(param_1 + 0x60);
  return;
}


