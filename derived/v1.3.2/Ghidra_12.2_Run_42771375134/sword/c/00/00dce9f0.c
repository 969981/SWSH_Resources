/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dce9f0; name: FUN_00dce9f0
 */


void FUN_00dce9f0(long param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_28;
  
  lVar1 = *(long *)(param_1 + 0x340);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x560);
    if ((lVar1 != 0) &&
       (0 < (int)((ulong)(*(long *)(lVar1 + 0x228) - *(long *)(lVar1 + 0x220)) >> 7))) {
      iVar2 = 0;
      do {
        lVar1 = FUN_00753d80(lVar1,iVar2);
        if (((*(char *)(lVar1 + 0x40) != '\0' ^ param_2) & 1) != 0) {
          FUN_00753de0(*(undefined8 *)(param_1 + 0x560),iVar2,param_2 & 1);
        }
        lVar1 = *(long *)(param_1 + 0x560);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)((ulong)(*(long *)(lVar1 + 0x228) - *(long *)(lVar1 + 0x220)) >> 7));
    }
  }
  else if (((*(byte *)(lVar1 + 0x4c8) ^ param_2) & 1) != 0) {
    local_28 = 0;
    FUN_007273c0(lVar1,param_2 & 1,&local_28);
    if ((param_2 & 1) == 0) {
      if (*(long *)(param_1 + 0x9c0) != 0) {
        FUN_0069d320();
      }
      if (*(long *)(param_1 + 0x7a0) != 0) {
        FUN_006a0e30(*(long *)(param_1 + 0x7a0) + 0x80);
        FUN_0069a850(0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x9c0) != 0) {
        FUN_0069d330();
      }
      if (*(long *)(param_1 + 0x7a0) != 0) {
        FUN_006a0e30(*(long *)(param_1 + 0x7a0) + 0x80);
        FUN_0069a850(0x3f800000);
        return;
      }
    }
  }
  return;
}


