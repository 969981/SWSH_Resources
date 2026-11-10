/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c2f20; name: FUN_014c2f20
 */


void FUN_014c2f20(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN_014c4e40();
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN_014c4e40();
  }
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x1c0));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x1c8));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x1d0));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x1d8));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x1e0));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x1e8));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x1f0));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x1f8));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x200));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x208));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x210));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x218));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x220));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x228));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x230));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x238));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x240));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x248));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 0x250));
  FUN_01991da0();
  FUN_014c47c0(*(undefined8 *)(param_1 + 600));
  FUN_01991da0();
  lVar3 = *(long *)(*(long *)(param_1 + 0xaf0) + 0x48);
  if (lVar3 != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0xaf0) + 0x40);
    lVar5 = lVar3 * 0x10 + -0x10;
    plVar2 = plVar4;
    if (((uint)lVar5 >> 4 & 1) == 0) {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        *(ushort *)(lVar1 + 0x114) = *(ushort *)(lVar1 + 0x114) | 4;
      }
      plVar2 = plVar4 + 2;
    }
    if (lVar5 != 0) {
      do {
        lVar5 = *plVar2;
        if (lVar5 != 0) {
          *(ushort *)(lVar5 + 0x114) = *(ushort *)(lVar5 + 0x114) | 4;
        }
        lVar5 = plVar2[2];
        if (lVar5 != 0) {
          *(ushort *)(lVar5 + 0x114) = *(ushort *)(lVar5 + 0x114) | 4;
        }
        plVar2 = plVar2 + 4;
      } while (plVar2 != plVar4 + lVar3 * 2);
    }
  }
  return;
}


