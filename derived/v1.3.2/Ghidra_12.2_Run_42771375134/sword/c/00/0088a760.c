/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088a760; name: FUN_0088a760
 */


void FUN_0088a760(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  
  FUN_00864bc0(*(undefined4 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2c));
  bVar3 = FUN_00864c60();
  if (bVar3 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        uVar4 = FUN_00864c70(uVar7);
        iVar5 = FUN_00864c80(uVar7);
        if (*(ushort *)(param_1 + 0x2e) < uVar4) {
          return;
        }
        if (iVar5 != 0) break;
LAB_0088a7f4:
        uVar7 = uVar7 + 1;
        if (bVar3 <= uVar7) {
          return;
        }
      }
      uVar2 = *(uint *)(param_1 + 0x50);
      if (uVar2 == 0) {
LAB_0088a7e4:
        *(int *)(param_1 + (ulong)uVar2 * 4 + 0x54) = iVar5;
        *(uint *)(param_1 + 0x50) = uVar2 + 1;
        goto LAB_0088a7f4;
      }
      uVar6 = 0;
      do {
        if (*(int *)(param_1 + uVar6 * 4 + 0x54) == iVar5) goto LAB_0088a7f4;
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while (uVar1 < uVar2);
      if (uVar2 < 4) goto LAB_0088a7e4;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = iVar5;
      uVar7 = uVar7 + 1;
    } while (uVar7 < bVar3);
  }
  return;
}


