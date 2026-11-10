/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a735b0; name: FUN_00a735b0
 */


void FUN_00a735b0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [8];
  
  if (((*(long *)(param_1 + 0x448) != 0) &&
      (lVar1 = FUN_00706c40(*(long *)(param_1 + 0x448),auStack_28), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x78), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x1ff0);
    uVar3 = *(undefined8 *)(param_1 + 0x1ff8);
    *(undefined8 *)(lVar1 + 0x2b0) = *(undefined8 *)(param_1 + 0x2000);
    *(undefined8 *)(lVar1 + 0x2a8) = uVar3;
    *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x2008);
    uVar3 = *(undefined8 *)(param_1 + 0x2010);
    uVar4 = *(undefined8 *)(param_1 + 0x2018);
    *(undefined4 *)(lVar1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2020);
    *(undefined8 *)(lVar1 + 0x2c8) = uVar4;
    *(undefined8 *)(lVar1 + 0x2c0) = uVar3;
    *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
    FUN_01052f20(*param_2,*(undefined1 *)(param_1 + 0x1ff0));
  }
  return;
}


