/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039c0e0; name: FUN_0039c0e0
 */


undefined8
FUN_0039c0e0(undefined8 param_1,long param_2,long param_3,long *param_4,undefined8 param_5,
            undefined8 *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar12;
  undefined8 uVar11;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 auStack_864 [4];
  long local_860 [256];
  
  lVar8 = param_4[2];
  uVar9 = 1;
  local_860[0] = lVar8;
  do {
    uVar9 = uVar9 - 1;
    puVar6 = (undefined8 *)local_860[uVar9];
    uVar11 = *(undefined8 *)((long)puVar6 + 0xc);
    fVar10 = (float)*puVar6;
    fVar12 = (float)((ulong)*puVar6 >> 0x20);
    fVar13 = (float)((ulong)uVar11 >> 0x20);
    iVar2 = FUN_0039e960(CONCAT44((fVar12 + fVar13) * 0.5,(fVar10 + (float)uVar11) * 0.5),
                         CONCAT44((fVar13 - fVar12) * 0.5,((float)uVar11 - fVar10) * 0.5),uVar11,
                         0x3f0000003f000000,0,param_5);
    while (iVar2 != 0) {
      uVar4 = *(uint *)(puVar6 + 3);
      if ((uVar4 & 1) != 0) {
        uVar1 = uVar4 >> 1 & 0xf;
        puVar7 = (uint *)(*param_4 + (ulong)(uVar4 >> 5) * 4);
        if (uVar1 == 1) {
          uVar5 = (**(code **)*param_6)(param_6,auStack_864,param_2 + (ulong)*puVar7 * 0x10);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
        }
        else if (uVar1 != 0) {
          iVar2 = -uVar1;
          do {
            uVar4 = *puVar7;
            puVar6 = (undefined8 *)(param_3 + (ulong)uVar4 * 0x18);
            uVar11 = *puVar6;
            uVar14 = *(undefined8 *)((long)puVar6 + 0xc);
            fVar10 = (float)uVar11;
            fVar13 = (float)uVar14;
            fVar12 = (float)((ulong)uVar11 >> 0x20);
            fVar15 = (float)((ulong)uVar14 >> 0x20);
            iVar3 = FUN_0039e960(CONCAT44((fVar12 + fVar15) * 0.5,(fVar10 + fVar13) * 0.5),
                                 CONCAT44((fVar15 - fVar12) * 0.5,(fVar13 - fVar10) * 0.5),0,param_5
                                );
            if (iVar3 != 0) {
              uVar4 = (**(code **)*param_6)(param_6,auStack_864,param_2 + (ulong)uVar4 * 0x10);
              if (((~uVar4 & 1) != 6) && ((~uVar4 & 1) != 0)) {
                return 0;
              }
            }
            iVar2 = iVar2 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar2 != 0);
        }
        break;
      }
      puVar6 = (undefined8 *)(lVar8 + (ulong)(uVar4 >> 1) * 0x1c);
      local_860[uVar9] = (long)puVar6 + 0x1c;
      uVar11 = *(undefined8 *)((long)puVar6 + 0xc);
      fVar10 = (float)*puVar6;
      fVar12 = (float)((ulong)*puVar6 >> 0x20);
      fVar13 = (float)((ulong)uVar11 >> 0x20);
      uVar9 = uVar9 + 1;
      iVar2 = FUN_0039e960(CONCAT44((fVar12 + fVar13) * 0.5,(fVar10 + (float)uVar11) * 0.5),
                           CONCAT44((fVar13 - fVar12) * 0.5,((float)uVar11 - fVar10) * 0.5),uVar11,
                           0x3f0000003f000000,0,param_5);
    }
    if (uVar9 == 0) {
      return 1;
    }
  } while( true );
}


