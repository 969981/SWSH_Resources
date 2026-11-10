/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e3010; name: FUN_006e3010
 */


byte FUN_006e3010(long *param_1,long param_2,void *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  void *__src;
  uint uVar4;
  ulong uVar5;
  short *psVar6;
  undefined1 auStack_1c18 [7160];
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) != 0)) {
    uVar5 = 0;
    do {
      iVar2 = (int)uVar5;
      if (*(long *)(*(long *)(lVar3 + 0x20) + uVar5 * 8) == param_2) {
        psVar6 = (short *)(*(long *)(lVar3 + 0x18) + (long)iVar2 * 0x18);
        uVar5 = (ulong)*(uint *)(psVar6 + 2);
        __src = *(void **)(psVar6 + 8);
        if (*psVar6 == 0) {
          memcpy(param_3,__src,uVar5);
        }
        else {
          uVar4 = (uint)*(ushort *)(*(long *)(lVar3 + 0x18) + (long)iVar2 * 0x18 + 2);
          if (uVar4 - 1 < 2) {
            iVar2 = FUN_019652c0(__src,param_3,uVar5);
            bVar1 = 0 < iVar2;
            goto LAB_006e3058;
          }
          if (uVar4 == 0) {
            bVar1 = nn::util::DecompressZlib
                              (param_3,uVar5,__src,(ulong)*(uint *)(psVar6 + 4),auStack_1c18,0x1bf8)
            ;
            goto LAB_006e3058;
          }
        }
        bVar1 = 1;
        goto LAB_006e3058;
      }
      uVar5 = (ulong)(iVar2 + 1U);
    } while (iVar2 + 1U < *(uint *)(lVar3 + 0x10));
  }
  bVar1 = 0;
LAB_006e3058:
  return bVar1 & 1;
}


