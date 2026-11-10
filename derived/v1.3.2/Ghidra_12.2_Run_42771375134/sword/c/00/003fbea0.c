/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fbea0; name: FUN_003fbea0
 */


void FUN_003fbea0(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  lVar10 = *(long *)(lVar9 + 0x808);
  uVar6 = *(uint *)(param_1 + 0x18) & 0x1fffffff;
  FUN_003fc170(param_1,&local_70);
  lVar8 = *(long *)(*(long *)(lVar9 + 0x720) + 0xa48);
  uVar3 = *(uint *)(lVar8 + 0x14) & 0x7fffffff;
  if (uVar3 <= uVar6) {
    uVar7 = uVar6 | uVar6 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    iVar1 = uVar7 + 1;
    if (uVar3 <= uVar7) {
      FUN_003fdb70(lVar8,iVar1);
    }
    *(int *)(lVar8 + 0x10) = iVar1;
  }
  uVar7 = *(uint *)(lVar8 + 0x18);
  uVar3 = uVar6 + 1;
  if (uVar7 < uVar3) {
    uVar7 = uVar6 + 1;
  }
  *(uint *)(lVar8 + 0x18) = uVar7;
  puVar2 = (undefined4 *)(*(long *)(lVar8 + 8) + (ulong)uVar6 * 0x20);
  *puVar2 = local_70;
  puVar2[1] = local_6c;
  puVar2[2] = local_68;
  puVar2[3] = local_64;
  puVar2[4] = local_60;
  puVar2[5] = local_5c;
  puVar2[6] = local_58;
  puVar2[7] = 0;
  *(undefined1 *)(lVar8 + 0x1c) = 1;
  FUN_002938e0(0,0x3f800000,*(long *)(lVar10 + 8) + (ulong)uVar6 * 0x18,
               *(long *)(param_1 + 0x40) + 0x48,&local_70,0,*PTR_DAT_02710c00 == '\0');
  *(undefined1 *)(lVar10 + 0x18) = 1;
  bVar4 = *(byte *)(*(long *)(param_1 + 0x40) + 0x40);
  if ((bVar4 & 5) == 0) {
    FUN_00130fe0(*(undefined8 *)(lVar9 + 0x728),uVar6);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    uVar7 = 2;
    cVar5 = *(char *)(*(long *)(lVar8 + 0x50) + 0xd);
    if ((lVar8 != 0) && (cVar5 == '\x01' || cVar5 == '\x04')) {
      uVar7 = 2 - (*(byte *)(*(long *)(lVar8 + 0x50) + 0x2c) & 1);
    }
    if (cVar5 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)(lVar8 + 0x58) * 4 + 0xcU | uVar7;
    }
    FUN_003c6b10(*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x3c),param_1,uVar7,bVar4 & 4);
  }
  *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0x810) + 8) + (ulong)uVar6 * 4) =
       *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x3c);
  *(undefined1 *)(lVar9 + 0x818) = 1;
  if ((uint)(*(int *)(lVar9 + 0x1200) * 0x20) <= uVar6) {
    uVar7 = *(int *)(lVar9 + 0x1200) << 6 | 2;
    if (uVar7 <= uVar3) {
      uVar7 = uVar3;
    }
    FUN_00190b50(lVar9 + 0x11f8,uVar7);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  cVar5 = *(char *)(*(long *)(lVar8 + 0x50) + 0xd);
  if ((((cVar5 == '\x04') || (cVar5 == '\x01')) && (*(uint *)(lVar8 + 0xb8) < 0xfffffffe)) &&
     (*(int *)(param_1 + 0x4c) == -1)) {
    lVar9 = lVar8;
    if (cVar5 != '\x04' && cVar5 != '\x01') {
      lVar9 = 0;
    }
    if ((((~*(byte *)(*(long *)(lVar9 + 0x50) + 0x2c) & 3) != 0) &&
        ((*(byte *)(lVar9 + 0x7c) & 1) == 0)) &&
       ((*(uint *)(lVar9 + 0xb8) < 0xfffffffe &&
        ((*(byte *)(*(long *)(param_1 + 0x40) + 0x40) >> 1 & 1) != 0)))) {
      FUN_003fe610(*(undefined8 *)(*(long *)(lVar8 + 0x48) + 0x820),param_1);
      cVar5 = *(char *)(*(long *)(lVar8 + 0x50) + 0xd);
    }
  }
  *(uint *)(param_1 + 0x2c) = uVar6;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x40) + 0x20;
  if (cVar5 == '\0') {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(*(long *)(param_1 + 0x10) + 0xb0) >> 6;
  }
  *(uint *)(param_1 + 0x28) = uVar6;
  return;
}


