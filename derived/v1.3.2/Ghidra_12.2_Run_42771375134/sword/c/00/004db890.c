/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004db890; name: FUN_004db890
 */


void FUN_004db890(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x70) + 0x18);
  if (((*(byte *)((long)plVar4 + 10) >> 4 & 1) != 0) && (*(int *)(param_2 + 0x20) != -1)) {
    FUN_00490ac0(*(undefined8 *)PTR_DAT_02712db8,(int)plVar4[0x3b]);
  }
  uVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < *(ushort *)(param_2 + 0x12)) {
      *(short *)(param_2 + 0x12) = (short)uVar1;
    }
    *(undefined1 *)(param_2 + 0x34) = 1;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    iVar2 = FUN_004ddd90(lVar3,*(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x290),
                         *(undefined4 *)(*(long *)(lVar3 + 0x18) + 0x298));
    if (iVar2 == 2) {
      *(undefined4 *)(param_2 + 0x30) = 2;
    }
  }
  return;
}


