/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01075b30; name: FUN_01075b30
 */


void FUN_01075b30(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar6;
  long lVar5;
  long lVar7;
  uint uVar8;
  undefined8 local_48;
  
  uVar8 = 0;
  do {
    if (*(uint *)(*(long *)(param_1 + 0x5f0) + 0xe8) <= uVar8) {
      return;
    }
    iVar2 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
    uVar3 = FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8),iVar2 + uVar8);
    if ((uVar3 & 0xfc) < 0xc) {
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x5f0) + 0xe0) + (ulong)(iVar2 + uVar8) * 0x18
                       );
      if ((*(char *)(param_1 + 0x690) == '\0') ||
         (plVar6 = (long *)(param_1 + 0x698), *(int *)(param_1 + 0x5dc) != 1)) {
        bVar1 = FUN_0106f510(*(int *)(param_1 + 0x5dc),
                             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        plVar6 = (long *)(param_1 + (ulong)bVar1 * 8 + 0x660);
      }
      lVar5 = *plVar6;
      lVar4 = FUN_0106fc00(uVar3);
      local_48 = *(undefined8 *)(lVar4 + 0x18);
      lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_48);
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | lVar7 == lVar5;
    }
    uVar8 = uVar8 + 1;
  } while ((uVar8 & 0xff) < 0xc);
  return;
}


