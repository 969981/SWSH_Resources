/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905830; name: FUN_00905830
 */


void FUN_00905830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint local_60 [4];
  
  uVar7 = FUN_008e2150(param_2);
  uVar3 = FUN_008e0a00(param_2);
  uVar4 = FUN_008e0a00(param_3);
  if ((uVar7 & 0xff) != 0) {
    uVar11 = 0;
    do {
      uVar5 = FUN_008e2240(param_2,uVar11 & 0xffffffff);
      uVar6 = FUN_008d60d0(*(undefined8 *)(param_1 + 0x1d0),uVar3,uVar4,uVar5,1,0);
      local_60[uVar11] = uVar6 & 0xffff;
      uVar11 = uVar11 + 1;
    } while ((uVar7 & 0xff) != uVar11);
    uVar6 = (uint)uVar7 & 0xff;
    if (1 < uVar6) {
      uVar2 = ~(uint)uVar7 & 1;
      if (uVar6 == 2) {
        iVar9 = 0;
        lVar10 = 1;
      }
      else {
        lVar1 = 0;
        iVar8 = 0;
        do {
          lVar10 = lVar1;
          uVar6 = local_60[lVar10 + 1];
          if ((local_60[0] & 0xff) < uVar6) {
            iVar8 = (int)lVar10 + 1;
          }
          else {
            uVar6 = local_60[0];
          }
          lVar1 = lVar10 + 2;
          iVar9 = (int)lVar1;
          local_60[0] = local_60[lVar10 + 2];
          if (local_60[lVar10 + 2] <= (uVar6 & 0xff)) {
            iVar9 = iVar8;
            local_60[0] = uVar6;
          }
          iVar8 = iVar9;
        } while (((uVar7 & 0xff) - 1) - (ulong)uVar2 != lVar1);
        lVar10 = lVar10 + 3;
      }
      if (uVar2 != 0) {
        iVar8 = (int)lVar10;
        if (local_60[lVar10] <= (local_60[0] & 0xff)) {
          iVar8 = iVar9;
        }
        iVar9 = iVar8;
      }
      goto LAB_00905960;
    }
  }
  iVar9 = 0;
LAB_00905960:
  FUN_008e2240(param_2,iVar9);
  return;
}


