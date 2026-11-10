/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dceb10; name: FUN_00dceb10
 */


void FUN_00dceb10(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar6 = *(long *)(param_2 + 0xaf0);
  if (1 < (ulong)(*(long *)(param_2 + 0xaf8) - lVar6 >> 7)) {
    uVar7 = 0;
    uVar8 = 2;
    lVar9 = 0xe0;
    lVar4 = lVar6;
    do {
      bVar3 = FUN_00dd5c70(*param_3,lVar4 + lVar9);
      lVar4 = *(long *)(*(long *)(param_2 + 0x340) + 0x360);
      lVar5 = *(long *)(lVar4 + 0x170);
      bVar2 = bVar3;
      if (((*(ulong *)(lVar5 + ((ulong)(uVar8 - 2 >> 3) & 0x1ffffff8)) &
           1L << ((ulong)(uVar8 - 2) & 0x3f)) != 0) &&
         ((*(ulong *)(lVar5 + ((ulong)(uVar8 - 1 >> 3) & 0x1ffffff8)) &
          1L << ((ulong)(uVar8 - 1) & 0x3f)) != 0)) {
        bVar2 = bVar3 ^ (*(ulong *)(lVar5 + ((ulong)(uVar8 >> 3) & 0x1ffffff8)) &
                        1L << ((ulong)uVar8 & 0x3f)) != 0;
      }
      if ((bVar2 & 1) != 0) {
        FUN_0072e410(lVar4,uVar7 & 0xffffffff,bVar3 & 1,0);
      }
      lVar4 = *(long *)(param_2 + 0xaf0);
      uVar1 = uVar7 + 2;
      uVar8 = uVar8 + 3;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x80;
    } while (uVar1 < (ulong)(*(long *)(param_2 + 0xaf8) - lVar4 >> 7));
  }
  FUN_00dcf010(param_1,*(undefined8 *)(param_2 + 0x340),lVar6);
  return;
}


