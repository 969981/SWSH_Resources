/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00604a20; name: FUN_00604a20
 */


void FUN_00604a20(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(param_1 + 0x40);
  lVar3 = lVar5 + param_2 * 0x20;
  lVar1 = *(long *)(param_1 + 0xa0);
  plVar2 = (long *)(lVar3 + 0x10);
  *(short *)(lVar1 + 0x18) = (short)(*(int *)plVar2 + 0x20U >> 6);
  plVar4 = (long *)(lVar3 + 0x18);
  *(short *)(lVar1 + 0x1a) = (short)(*(int *)plVar4 + 0x20U >> 6);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined8 *)(lVar1 + 0x20) = 0x10000;
    *(undefined8 *)(lVar1 + 0x28) = 0x10000;
    *(long *)(lVar1 + 0x30) = *plVar4;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(long *)(lVar1 + 0x40) = (long)*(short *)(lVar5 + param_2 * 0x20) << 6;
    *(long *)(lVar1 + 0x48) = *plVar2;
    return;
  }
  lVar3 = *plVar2;
  uVar6 = (ulong)*(ushort *)(param_1 + 0x88);
  if (uVar6 == 0) {
    uVar7 = 0x7fffffff;
  }
  else {
    lVar5 = -lVar3;
    if (-1 < lVar3) {
      lVar5 = lVar3;
    }
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = ((ulong)(*(ushort *)(param_1 + 0x88) >> 1) | lVar5 << 0x10) / uVar6;
    }
  }
  uVar6 = -uVar7;
  if (-1 < lVar3) {
    uVar6 = uVar7;
  }
  *(ulong *)(lVar1 + 0x20) = uVar6;
  lVar3 = *plVar4;
  uVar7 = (ulong)*(ushort *)(param_1 + 0x88);
  if (uVar7 == 0) {
    uVar8 = 0x7fffffff;
  }
  else {
    lVar5 = -lVar3;
    if (-1 < lVar3) {
      lVar5 = lVar3;
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = ((ulong)(*(ushort *)(param_1 + 0x88) >> 1) | lVar5 << 0x10) / uVar7;
    }
  }
  uVar7 = -uVar8;
  if (-1 < lVar3) {
    uVar7 = uVar8;
  }
  *(ulong *)(lVar1 + 0x28) = uVar7;
  lVar3 = uVar7 * (long)*(short *)(param_1 + 0x8a);
  *(ulong *)(lVar1 + 0x30) = (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10) + 0x3fU & 0xffffffffffffffc0
  ;
  lVar3 = uVar7 * (long)*(short *)(param_1 + 0x8c);
  *(ulong *)(lVar1 + 0x38) = lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10 & 0xffffffffffffffc0;
  lVar3 = uVar7 * (long)*(short *)(param_1 + 0x8e);
  *(ulong *)(lVar1 + 0x40) = (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0
  ;
  lVar3 = uVar6 * (long)*(short *)(param_1 + 0x90);
  *(ulong *)(lVar1 + 0x48) = (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0
  ;
  return;
}


