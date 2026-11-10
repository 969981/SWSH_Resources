/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535840; name: FUN_01535840
 */


undefined8 FUN_01535840(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  
  if (*(char *)((long)param_2 + 0xd) == '\0') {
    iVar3 = *param_2;
    iVar2 = param_2[5];
    uVar6 = (uint)*(ushort *)(param_2 + 1) * 7 + param_2[6];
    if (iVar3 != 0x365) {
      uVar6 = (uint)*(ushort *)(param_2 + 1);
    }
    uVar1 = 0;
    if (uVar6 < 0x3f) {
      uVar1 = uVar6;
    }
    if ((iVar3 == 0x37c) && (0x3d < uVar1)) {
      return 0;
    }
    uVar6 = 0;
    if ((uVar1 & 0xffff) != 1 || iVar3 != 0x2e8) {
      uVar6 = uVar1;
    }
    puVar4 = (ulong *)FUN_015354b0(param_1,iVar3,param_2[2],(char)param_2[3]);
    if (puVar4 != (ulong *)0x0) {
      if (iVar2 == 2) {
        uVar5 = FUN_01534550(puVar4,iVar3);
        if ((uVar5 & 1) != 0) {
          uVar5 = 0x4000000000000000;
          if ((uVar6 & 0xffff) != 1 || iVar3 != 0x37c) {
            uVar5 = 0x8000000000000000;
          }
          if ((*puVar4 & uVar5) != 0) {
            return 1;
          }
        }
      }
      else if ((*puVar4 & 1L << ((ulong)uVar6 & 0x3f)) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


