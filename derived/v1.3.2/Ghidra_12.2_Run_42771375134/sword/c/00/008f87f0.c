/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f87f0; name: FUN_008f87f0
 */


void FUN_008f87f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (((((*(long *)(param_1 + 0x188) != 0) ||
        ((*(long *)(param_1 + 0x750) != 0 && (uVar1 = FUN_009b1990(), (uVar1 & 1) == 0)))) ||
       ((*(long *)(param_1 + 0x198) != 0 && (uVar1 = FUN_008fd730(), (uVar1 & 1) == 0)))) ||
      ((((*(long *)(param_1 + 0x1a0) != 0 && (uVar1 = FUN_008fd730(), (uVar1 & 1) == 0)) ||
        ((*(long *)(param_1 + 0x1a8) != 0 && (uVar1 = FUN_008fd730(), (uVar1 & 1) == 0)))) ||
       ((*(long *)(param_1 + 0x1b0) != 0 && (uVar1 = FUN_008fd730(), (uVar1 & 1) == 0)))))) ||
     ((*(long *)(param_1 + 0x1b8) != 0 && (uVar1 = FUN_008fd730(), (uVar1 & 1) == 0)))) {
    return;
  }
  lVar5 = *(long *)(param_1 + 400);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x188);
  *(long *)(param_1 + 0x188) = lVar5;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar5 = *(long *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  uVar3 = FUN_009e0600(*(undefined1 *)(param_1 + 0x174));
  uVar4 = FUN_009e05d0();
  FUN_00914a80(uVar4,uVar3);
  FUN_0090e320(*(undefined8 *)(param_1 + 0x188));
  FUN_008fe4c0(*(undefined8 *)(param_1 + (ulong)*(byte *)(param_1 + 0x174) * 8 + 0x198));
  *(undefined **)(param_1 + 0xd8) = PTR_LAB_02717cd0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}


