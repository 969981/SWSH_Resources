/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088a830; name: FUN_0088a830
 */


void FUN_0088a830(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_00864bc0(*(undefined4 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x2c));
  bVar4 = FUN_00864c60();
  if (bVar4 == 0) {
    return;
  }
  uVar8 = 0;
LAB_0088a86c:
  do {
    iVar5 = FUN_00864c80(uVar8);
    uVar9 = 0;
    bVar2 = 0;
    do {
      iVar6 = FUN_0087b880(*param_2,uVar9);
      uVar9 = uVar9 + 1;
      bVar2 = bVar2 | iVar6 == iVar5;
      if (3 < uVar9) break;
    } while (iVar6 != iVar5);
    uVar9 = 0;
    bVar3 = 0;
    do {
      iVar6 = FUN_0087b880(param_2[1],uVar9);
      uVar9 = uVar9 + 1;
      bVar3 = bVar3 | iVar6 == iVar5;
      if (3 < uVar9) break;
    } while (iVar6 != iVar5);
    if ((iVar5 != 0) && ((bool)(bVar2 & bVar3))) {
      uVar9 = *(uint *)(param_1 + 0x50);
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          if (*(int *)(param_1 + uVar7 * 4 + 0x54) == iVar5) goto LAB_0088a92c;
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
        } while (uVar1 < uVar9);
        if (3 < uVar9) {
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
          *(int *)(param_1 + 0x60) = iVar5;
          uVar8 = uVar8 + 1;
          if (uVar8 == bVar4) {
            return;
          }
          goto LAB_0088a86c;
        }
      }
      *(int *)(param_1 + (ulong)uVar9 * 4 + 0x54) = iVar5;
      *(uint *)(param_1 + 0x50) = uVar9 + 1;
    }
LAB_0088a92c:
    uVar8 = uVar8 + 1;
    if (uVar8 == bVar4) {
      return;
    }
  } while( true );
}


