/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e420; name: FUN_0048e420
 */


void FUN_0048e420(long param_1,uint param_2)

{
  uint5 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_40;
  undefined1 local_38;
  uint local_24;
  
  puVar1 = (uint5 *)(param_1 + 0x26b);
  uVar3 = *(uint *)puVar1;
  uVar4 = (ulong)*puVar1;
  if ((uVar3 >> 7 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_1 + 0x26f);
    *(uint *)puVar1 = uVar3 | 0x80;
    uVar3 = FUN_00480360(*(undefined8 *)(param_1 + 0x160),&local_24);
    if (uVar3 == 3) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x160) + 0x228))
                        (*(long **)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x1f0));
      uVar3 = 1;
      if ((uVar4 & 1) != 0) {
        uVar3 = 2;
      }
    }
    uVar4 = (ulong)*(uint *)puVar1 & 0xffffffffffffff80 | (ulong)*(byte *)(param_1 + 0x26f) << 0x20
            | (ulong)local_24 & 7 | (ulong)((uVar3 & 0xf) << 3);
    *(uint *)puVar1 = (uint)uVar4;
  }
  else {
    local_24 = uVar3 & 7;
    uVar3 = uVar3 >> 3 & 0xf;
  }
  uVar2 = (undefined1)(uVar4 >> 0x20);
  uVar5 = (uint)uVar4;
  if (uVar3 == 2) {
    *(undefined1 *)(param_1 + 0x26f) = uVar2;
    *(uint *)puVar1 = uVar5 | 0x2000000;
  }
  else if (uVar3 == 1) {
    if ((uVar5 >> 0x10 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x26f) = uVar2;
      *(uint *)puVar1 = uVar5 & 0xfff1ffff | (param_2 & 7) << 0x11 | 0x10000;
    }
    local_40 = 0x400000000;
    local_38 = 0;
    FUN_0048c100(param_1,&local_40,1);
  }
  return;
}


