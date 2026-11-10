/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e0ef0; name: FUN_003e0ef0
 */


void FUN_003e0ef0(long param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  FUN_003df7d0();
  *(undefined4 *)(param_1 + 0x1d40) = 1;
  *(long **)(param_1 + 0x1d38) = param_2;
  if (param_2 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1d78) = 1;
    *(undefined8 *)(param_1 + 0x1d70) = 0;
    *(undefined4 *)(param_1 + 0x1db0) = 1;
    *(undefined8 *)(param_1 + 0x1da8) = 0;
    *(undefined4 *)(param_1 + 0x1de8) = 1;
    *(undefined8 *)(param_1 + 0x1de0) = 0;
  }
  else {
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x1d30) = *(undefined8 *)(*(long *)(param_1 + 0x1d38) + 0x10);
    *(undefined4 *)(param_1 + 0x1d78) = 1;
    *(long **)(param_1 + 0x1d70) = param_2;
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x1d68) = *(undefined8 *)(*(long *)(param_1 + 0x1d70) + 0x10);
    *(undefined4 *)(param_1 + 0x1db0) = 1;
    *(long **)(param_1 + 0x1da8) = param_2;
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x1da0) = *(undefined8 *)(*(long *)(param_1 + 0x1da8) + 0x10);
    *(undefined4 *)(param_1 + 0x1de8) = 1;
    *(long **)(param_1 + 0x1de0) = param_2;
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x1dd8) = *(undefined8 *)(*(long *)(param_1 + 0x1de0) + 0x10);
  }
  (**(code **)(**(long **)(param_1 + 0x1d30) + 0xa0))(*(long **)(param_1 + 0x1d30),param_1 + 0x1d20)
  ;
  (**(code **)(**(long **)(param_1 + 0x1d68) + 0xa0))(*(long **)(param_1 + 0x1d68),param_1 + 0x1d58)
  ;
  (**(code **)(**(long **)(param_1 + 0x1da0) + 0xa0))(*(long **)(param_1 + 0x1da0),param_1 + 0x1d90)
  ;
  (**(code **)(**(long **)(param_1 + 0x1dd8) + 0xa0))(*(long **)(param_1 + 0x1dd8),param_1 + 0x1dc8)
  ;
  uVar2 = *(uint *)(param_1 + 0x1f28);
  if (uVar2 != 0) {
    uVar1 = 0;
    do {
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x1f20) + uVar1 * 8);
      if ((uVar4 & 1) == 0) {
        lVar3 = *(long *)(param_1 + 0x720);
        lVar6 = (ulong)(*(uint *)(uVar4 + 0x58) >> 5) * 4;
        *(uint *)(*(long *)(lVar3 + 0x1f0) + lVar6) =
             *(uint *)(*(long *)(lVar3 + 0x1f0) + lVar6) &
             (1 << ((ulong)*(uint *)(uVar4 + 0x58) & 0x1f) ^ 0xffffffffU);
        uVar2 = *(uint *)(lVar3 + 0x1d8);
        *(uint *)(lVar3 + 0x1d8) = uVar2 + 1;
        *(ulong *)(*(long *)(lVar3 + 0x1d0) + (ulong)uVar2 * 8) = uVar4;
        uVar2 = *(uint *)(param_1 + 0x1f28);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x1f38);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x1f30);
    uVar1 = 0;
    do {
      puVar5 = *(undefined8 **)(lVar3 + uVar1 * 8);
      if ((((ulong)puVar5 & 1) == 0) && (puVar5 != (undefined8 *)0x0)) {
        lVar6 = *(long *)(param_1 + 0x1048);
        *(int *)(lVar6 + 0x96c) = *(int *)(lVar6 + 0x96c) + -1;
        *puVar5 = *(undefined8 *)(lVar6 + 0x978);
        *(undefined8 **)(lVar6 + 0x978) = puVar5;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x1f48);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 8000);
    uVar1 = 0;
    do {
      puVar5 = *(undefined8 **)(lVar3 + uVar1 * 8);
      if ((((ulong)puVar5 & 1) == 0) && (puVar5 != (undefined8 *)0x0)) {
        lVar6 = *(long *)(param_1 + 0x1048);
        *(int *)(lVar6 + 0x1014) = *(int *)(lVar6 + 0x1014) + -1;
        *puVar5 = *(undefined8 *)(lVar6 + 0x1020);
        *(undefined8 **)(lVar6 + 0x1020) = puVar5;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}


