/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01026550; name: FUN_01026550
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01026550(int *param_1)

{
  PalmaConnectionHandle *pPVar1;
  size_t __n;
  int iVar2;
  uint *puVar3;
  long lVar4;
  uint *__dest;
  long *plVar5;
  uint local_198 [86];
  
  __dest = *(uint **)(param_1 + 0x44);
  if (*param_1 < 1) {
    if (*param_1 != -1) {
      return 0;
    }
    puVar3 = __dest;
LAB_010266dc:
    plVar5 = (long *)(param_1 + 0x46);
    lVar4 = *plVar5;
    if (puVar3 + lVar4 * 0x46 == __dest) {
      return 0;
    }
    if (*(long *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(local_198,0,0x148);
    }
    __n = (long)puVar3 + (lVar4 * 0x118 - (long)(__dest + 0x46));
    if (__n != 0) {
      memmove(__dest,__dest + 0x46,__n);
      lVar4 = *plVar5;
    }
    *plVar5 = lVar4 + -1;
    return 0;
  }
  if (*(long *)(param_1 + 0x46) == 0) {
    return 0;
  }
  if (*__dest < 0x11) {
    pPVar1 = (PalmaConnectionHandle *)(param_1 + 0x58);
    switch(*__dest) {
    case 0:
      iVar2 = nn::hid::PlayPalmaActivity(pPVar1,(ushort *)(__dest + 2));
      break;
    case 1:
      local_198[0] = __dest[2];
      iVar2 = nn::hid::SetPalmaFrModeType(pPVar1,(PalmaFrModeType *)local_198);
      break;
    case 2:
      iVar2 = nn::hid::ReadPalmaStep(pPVar1);
      break;
    case 3:
      iVar2 = nn::hid::EnablePalmaStep(pPVar1,SUB41(__dest[2],0));
      break;
    case 4:
      iVar2 = nn::hid::ResetPalmaStep(pPVar1);
      break;
    case 5:
      iVar2 = nn::hid::ReadPalmaApplicationSection(pPVar1,__dest[2],*(ulong *)(__dest + 4));
      break;
    case 6:
      iVar2 = nn::hid::WritePalmaApplicationSection
                        (pPVar1,__dest[2],*(ulong *)(__dest + 4),
                         (PalmaApplicationSectionAccessBuffer *)(__dest + 6));
      break;
    case 7:
      iVar2 = nn::hid::ReadPalmaUniqueCode(pPVar1);
      break;
    case 8:
      iVar2 = nn::hid::SetPalmaUniqueCodeInvalid(pPVar1);
      break;
    case 9:
      iVar2 = nn::hid::WritePalmaActivityEntry
                        (pPVar1,(ushort *)(__dest + 2),(PalmaActivityEntry *)(__dest + 3));
      break;
    case 10:
      iVar2 = nn::hid::WritePalmaRgbLedPatternEntry
                        (pPVar1,(ushort *)(__dest + 2),*(void **)(__dest + 4),*(ulong *)(__dest + 6)
                        );
      break;
    case 0xb:
      iVar2 = nn::hid::WritePalmaWaveEntry
                        (pPVar1,(PalmaWaveSet *)(__dest + 10),(ushort *)(__dest + 2),
                         *(void **)(__dest + 4),*(ulong *)(__dest + 8),*(ulong *)(__dest + 6));
      break;
    case 0xc:
      iVar2 = nn::hid::GetPalmaDataBaseIdentificationVersion(pPVar1);
      break;
    case 0xd:
      iVar2 = nn::hid::SetPalmaDataBaseIdentificationVersion(pPVar1,__dest[2]);
      break;
    case 0xe:
      local_198[0] = 0xffffffff;
      iVar2 = nn::hid::SuspendPalmaFeature(pPVar1,(BitFlagSet *)local_198);
      break;
    case 0xf:
      iVar2 = nn::hid::ReadPalmaPlayLog(pPVar1,(ushort *)(__dest + 2));
      break;
    case 0x10:
      iVar2 = nn::hid::ResetPalmaPlayLog(pPVar1,(ushort *)(__dest + 2));
    }
    if (iVar2 != 0) {
      puVar3 = *(uint **)(param_1 + 0x44);
      goto LAB_010266dc;
    }
  }
  *param_1 = 0;
  return 1;
}


