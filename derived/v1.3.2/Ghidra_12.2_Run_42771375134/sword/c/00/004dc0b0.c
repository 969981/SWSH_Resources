/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dc0b0; name: FUN_004dc0b0
 */


void FUN_004dc0b0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  plVar1 = (long *)(lVar3 + 0x18);
  if ((*(ushort *)(lVar3 + 0x16c) >> 5 & 1) == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,0);
  }
  else if ((*(ushort *)(lVar3 + 0x16c) >> 9 & 1) != 0) {
    (**(code **)(*plVar1 + 0x58))();
  }
  if ((*(uint *)(lVar3 + 0x26b) & 0xa000000) == 0) {
    FUN_004d0200(param_1);
    FUN_004d0510(param_1);
    return;
  }
  uVar2 = FUN_0048e850(lVar3);
  if (((uVar2 & 1) != 0) || (*(int *)(param_1 + 0x88) == 0)) {
    *(undefined8 *)(param_1 + 0x84) = 0x200000001;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_0048df70(lVar3);
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


