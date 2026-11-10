/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2610; name: FUN_009a2610
 */


void FUN_009a2610(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *local_80 [4];
  uint local_54;
  
  *param_2 = 0;
  uVar9 = *param_3;
  uVar5 = FUN_008e0a00(uVar9);
  iVar1 = *(int *)(param_3 + 1);
  if (iVar1 - 0x206U < 3) {
    uVar2 = *(undefined1 *)((long)param_3 + 0xc);
    uVar7 = FUN_008e2df0(uVar9,10);
    if (((uVar7 & 1) == 0) && (uVar7 = FUN_008e56f0(uVar9), (uVar7 & 1) == 0)) {
      local_54 = 0;
      FUN_009a2780(param_1,local_80,&local_54,uVar5,iVar1,uVar2);
      uVar6 = local_54;
      uVar7 = (ulong)local_54;
      if (local_54 != 0) {
        uVar8 = FUN_00942420(param_1);
        bVar3 = FUN_00945f50(uVar8,local_80[0]);
        if (uVar6 != 1) {
          lVar12 = uVar7 - 1;
          puVar10 = local_80[0];
          puVar11 = local_80[0];
          do {
            puVar11 = puVar11 + 0xc;
            uVar8 = FUN_00942420(param_1);
            bVar4 = FUN_00945f50(uVar8,puVar11);
            local_80[0] = puVar11;
            if (bVar3 <= bVar4) {
              local_80[0] = puVar10;
              bVar4 = bVar3;
            }
            lVar12 = lVar12 + -1;
            puVar10 = local_80[0];
            bVar3 = bVar4;
          } while (lVar12 != 0);
        }
        uVar8 = *local_80[0];
        uVar6 = FUN_008e0a00(uVar8);
        FUN_008e3830(uVar9,10);
        FUN_008e56b0(uVar8,uVar5,iVar1);
        uVar9 = FUN_00942420(param_1);
        FUN_00946690(uVar9,uVar6,0);
        uVar9 = FUN_009423b0(param_1);
        FUN_009360e0(uVar9,0x612,uVar5 & 0xff,uVar6 & 0xff);
        *param_2 = 1;
      }
    }
  }
  return;
}


