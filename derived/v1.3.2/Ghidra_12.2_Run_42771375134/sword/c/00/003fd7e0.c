/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fd7e0; name: FUN_003fd7e0
 */


void FUN_003fd7e0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(lVar5 + 0x48);
  cVar3 = *(char *)(*(long *)(lVar5 + 0x50) + 0xd);
  lVar6 = lVar5;
  if (cVar3 != '\x04' && cVar3 != '\x01') {
    lVar6 = 0;
  }
  if (lVar6 == 0) {
    bVar7 = true;
  }
  else {
    bVar7 = 0xfffffffd < *(uint *)(lVar6 + 0xb8);
  }
  local_58 = *(long *)(lVar5 + 0x28);
  lStack_50 = local_58 + (ulong)*(uint *)(lVar5 + 0x34) * 8;
  local_48 = param_1;
  lVar5 = FUN_003c6790(&local_58);
  if (lVar5 != 0) {
    if (bVar7) {
      do {
        cVar3 = *(char *)(lVar5 + 0x24);
        if (cVar3 == '\0') {
          FUN_003f9bf0(lVar5);
          FUN_003fbc80(lVar5,lVar6 != 0);
        }
        else if (cVar3 == '\x01') {
          *(ushort *)(lVar5 + 0x4c) = *(ushort *)(lVar5 + 0x4c) | 0x20;
          if ((*(byte *)(lVar5 + 0x25) >> 6 & 1) == 0) {
            *(byte *)(lVar5 + 0x25) = *(byte *)(lVar5 + 0x25) | 0x40;
            FUN_003ddaa0(uVar1,lVar5);
          }
        }
        else if (cVar3 == '\x05') {
          uVar4 = FUN_003ade70(*(undefined8 *)(lVar5 + 0x28));
          FUN_003aa9f0(uVar4,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30));
        }
        lVar5 = FUN_003c6790(&local_58);
      } while (lVar5 != 0);
    }
    else {
      do {
        while (cVar3 = *(char *)(lVar5 + 0x24), cVar3 == '\x05') {
          uVar4 = FUN_003ade70(*(undefined8 *)(lVar5 + 0x28));
          FUN_003aa9f0(uVar4,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30));
          lVar5 = FUN_003c6790(&local_58);
          if (lVar5 == 0) goto LAB_003fd970;
        }
        if (cVar3 == '\x01') {
          *(ushort *)(lVar5 + 0x4c) = *(ushort *)(lVar5 + 0x4c) | 0x20;
          if ((*(byte *)(lVar5 + 0x25) >> 6 & 1) == 0) {
            *(byte *)(lVar5 + 0x25) = *(byte *)(lVar5 + 0x25) | 0x40;
            FUN_003ddaa0(uVar1,lVar5);
          }
LAB_003fd960:
          lVar5 = FUN_003c6790(&local_58);
        }
        else {
          if (cVar3 != '\0') goto LAB_003fd960;
          FUN_003f9bf0(lVar5);
          lVar5 = FUN_003c6790(&local_58);
        }
      } while (lVar5 != 0);
    }
  }
LAB_003fd970:
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  if ((param_2 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    if ((int)uVar2 < 0) {
      FUN_00190b50(lVar6 + 0x11f8,(uVar2 & 0x1fffffff) + 1);
      lVar5 = (ulong)(uVar2 >> 5 & 0xffffff) * 4;
      *(uint *)(*(long *)(lVar6 + 0x11f8) + lVar5) =
           *(uint *)(*(long *)(lVar6 + 0x11f8) + lVar5) | 1 << (ulong)(uVar2 & 0x1f);
    }
  }
  else {
    FUN_003fcf40(param_1,0,*(long *)(lVar6 + 0x728) + 0x70);
  }
  return;
}


