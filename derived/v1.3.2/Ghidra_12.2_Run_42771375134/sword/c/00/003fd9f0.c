/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fd9f0; name: FUN_003fd9f0
 */


bool FUN_003fd9f0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  cVar1 = *(char *)(*(long *)(param_1 + 0x50) + 0xd);
  if (cVar1 != '\x04' && cVar1 != '\x01') {
    bVar4 = true;
    iVar7 = *(int *)(param_1 + 0x34);
  }
  else {
    bVar4 = 0xfffffffd < *(uint *)(param_1 + 0xb8);
    iVar7 = *(int *)(param_1 + 0x34);
  }
  bVar2 = cVar1 == '\x04' || cVar1 == '\x01';
  if (iVar7 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    plVar8 = *(long **)(param_1 + 0x28);
    if (bVar4) {
      do {
        while( true ) {
          lVar6 = *plVar8;
          cVar1 = *(char *)(lVar6 + 0x24);
          iVar7 = iVar7 + -1;
          if (cVar1 != '\0') break;
          FUN_003f9bf0(lVar6);
          FUN_003fbc80(lVar6,bVar2);
joined_r0x003fdab4:
          plVar8 = plVar8 + 1;
          if (iVar7 == 0) {
            return bVar2;
          }
        }
        if (cVar1 == '\x01') {
          *(ushort *)(lVar6 + 0x4c) = *(ushort *)(lVar6 + 0x4c) | 0x20;
          if ((*(byte *)(lVar6 + 0x25) >> 6 & 1) == 0) {
            *(byte *)(lVar6 + 0x25) = *(byte *)(lVar6 + 0x25) | 0x40;
            FUN_003ddaa0(uVar5,lVar6);
          }
          goto joined_r0x003fdab4;
        }
        if (cVar1 != '\x05') goto joined_r0x003fdab4;
        uVar3 = FUN_003ade70(*(undefined8 *)(lVar6 + 0x28));
        FUN_003aa9f0(uVar3,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30));
        plVar8 = plVar8 + 1;
      } while (iVar7 != 0);
    }
    else {
      do {
        while( true ) {
          lVar6 = *plVar8;
          cVar1 = *(char *)(lVar6 + 0x24);
          iVar7 = iVar7 + -1;
          if (cVar1 != '\x05') break;
          uVar3 = FUN_003ade70(*(undefined8 *)(lVar6 + 0x28));
          FUN_003aa9f0(uVar3,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30));
joined_r0x003fdb34:
          plVar8 = plVar8 + 1;
          if (iVar7 == 0) {
            return bVar2;
          }
        }
        if (cVar1 == '\x01') {
          *(ushort *)(lVar6 + 0x4c) = *(ushort *)(lVar6 + 0x4c) | 0x20;
          if ((*(byte *)(lVar6 + 0x25) >> 6 & 1) == 0) {
            *(byte *)(lVar6 + 0x25) = *(byte *)(lVar6 + 0x25) | 0x40;
            FUN_003ddaa0(uVar5,lVar6);
          }
          goto joined_r0x003fdb34;
        }
        if (cVar1 != '\0') goto joined_r0x003fdb34;
        FUN_003f9bf0(lVar6);
        plVar8 = plVar8 + 1;
      } while (iVar7 != 0);
    }
  }
  return bVar2;
}


