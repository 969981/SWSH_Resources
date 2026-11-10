/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d6840; name: FUN_004d6840
 */


undefined4 FUN_004d6840(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xe0) + 0x78);
  lVar6 = *(long *)(lVar3 + 0x18);
  iVar2 = *(int *)(lVar6 + 0x288);
  if (0 < iVar2) {
    fVar7 = *(float *)(lVar6 + 0x214) *
            (float)((uint)*(ushort *)(param_1 + 0xb8) - (uint)*(ushort *)(param_1 + 0xba));
    fVar8 = 0.5;
    if (fVar7 <= 0.0) {
      fVar8 = -0.5;
    }
    iVar5 = (int)(fVar8 + fVar7);
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
    *(int *)(lVar6 + 0x288) = iVar2 - iVar5;
    return 0x11;
  }
  iVar2 = FUN_004ddd90(lVar3,*(undefined8 *)(lVar6 + 0x290),*(undefined4 *)(lVar6 + 0x298));
  if (iVar2 != 1) {
    if (iVar2 == 0x3f) {
      return 0x11;
    }
    return 2;
  }
  local_28 = *(undefined4 *)(lVar6 + 0x210);
  local_30._4_4_ = (int)((ulong)*(undefined8 *)(lVar6 + 0x208) >> 0x20);
  if (*(int *)(*(long *)(param_1 + 0xe8) + 0x20c) != local_30._4_4_) {
    return 0x11;
  }
  local_30 = *(undefined8 *)(lVar6 + 0x208);
  FUN_004db970(*(undefined8 *)(param_1 + 0xe0));
  *(long *)(param_1 + 0xe8) = lVar6;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x70);
  plVar1 = (long *)(lVar6 + 0x18);
  if ((*(ushort *)(lVar6 + 0x16c) >> 5 & 1) == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,0);
  }
  else if ((*(ushort *)(lVar6 + 0x16c) >> 9 & 1) != 0) {
    (**(code **)(*plVar1 + 0x58))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  FUN_004d6e80(param_1 + 0x10,&local_30,param_1 + 0xa8,
               *(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x90));
  uVar4 = 0x2d;
  if (*(uint *)(param_1 + 0x54) != (uint)*(ushort *)(param_1 + 0xba)) {
    uVar4 = 0x2b;
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return uVar4;
}


