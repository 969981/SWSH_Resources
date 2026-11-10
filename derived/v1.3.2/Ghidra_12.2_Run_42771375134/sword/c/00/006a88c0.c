/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a88c0; name: FUN_006a88c0
 */


void FUN_006a88c0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 local_44 [4];
  
  plVar7 = (long *)(param_1 + 0x40);
  lVar3 = *(long *)(*(long *)(param_2 + 0x360) + 0x68);
  uVar5 = (*(long *)(lVar3 + 0x268) - *(long *)(lVar3 + 0x260) >> 5) * -0x5555555555555555;
  local_44[0] = 0;
  uVar4 = *(long *)(param_1 + 0x48) - *plVar7;
  uVar6 = uVar5 >> 3 & 0x1fffffff;
  if ((uVar5 & 7) != 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 - uVar4 != 0) {
    if (uVar4 <= uVar6) {
      FUN_006a7610(plVar7,uVar6 - uVar4,local_44);
      *(ulong *)(param_1 + 0x70) = uVar5 & 0xffffffff;
      goto joined_r0x006a8968;
    }
    if (uVar6 < uVar4) {
      *(ulong *)(param_1 + 0x48) = *plVar7 + uVar6;
    }
  }
  *(ulong *)(param_1 + 0x70) = uVar5 & 0xffffffff;
joined_r0x006a8968:
  if ((uVar5 & 7) != 0) {
    *(byte *)(*(long *)(param_1 + 0x48) + -1) =
         *(byte *)(*(long *)(param_1 + 0x48) + -1) & ((byte)(-1 << (uVar5 & 7)) ^ 0xff);
  }
  puVar2 = *(undefined1 **)(param_1 + 0x40);
  if (0 < *(long *)(param_1 + 0x48) - (long)puVar2) {
    lVar3 = (*(long *)(param_1 + 0x48) + 1) - (long)puVar2;
    do {
      lVar3 = lVar3 + -1;
      *puVar2 = 0xff;
      puVar2 = puVar2 + 1;
    } while (1 < lVar3);
  }
  uVar6 = *(ulong *)(param_1 + 0x70) & 7;
  if (uVar6 != 0) {
    *(byte *)(*(long *)(param_1 + 0x48) + -1) =
         *(byte *)(*(long *)(param_1 + 0x48) + -1) & ((byte)(-1 << uVar6) ^ 0xff);
  }
  uVar1 = FUN_00696f30(param_3);
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar6 = 0;
    lVar3 = 0x20;
    do {
      uVar4 = FUN_006972a0(uVar1,*(long *)(*(long *)(*(long *)(param_2 + 0x360) + 0x68) + 0x260) +
                                 lVar3);
      if ((uVar4 & 1) == 0) {
        *(byte *)(*plVar7 + (uVar6 >> 3)) =
             *(byte *)(*plVar7 + (uVar6 >> 3)) & ((byte)(1 << (ulong)((uint)uVar6 & 7)) ^ 0xff);
      }
      uVar6 = uVar6 + 1;
      lVar3 = lVar3 + 0x60;
    } while (uVar6 < *(ulong *)(param_1 + 0x70));
  }
  return;
}


