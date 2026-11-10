/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c6dc0; name: FUN_014c6dc0
 */


undefined2 * FUN_014c6dc0(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  byte local_54 [4];
  
  uVar4 = FUN_0077db70(param_3);
  if (uVar4 != 0) {
    if (3 < uVar4) {
      puVar7 = (undefined2 *)FUN_0077db30(param_3);
      return puVar7;
    }
    uVar11 = uVar4 - 1;
    uVar2 = uVar11 * 2;
    uVar5 = FUN_0077dba0(param_3,0);
    uVar3 = FUN_014bed40(param_3);
    uVar6 = FUN_014c7200(param_1,uVar3,uVar5);
    if (uVar2 <= uVar6) {
      uVar6 = 0;
    }
    local_54[0] = 0;
    local_54[1] = 0;
    local_54[2] = 0;
    local_54[3] = 0;
    if (uVar11 == 0) {
      param_3 = (undefined2 *)FUN_0077db30(param_3);
    }
    else {
      uVar10 = 0;
      iVar8 = 1;
      do {
        uVar5 = FUN_0077dba0(param_3,iVar8);
        local_54[uVar10 & 0xffffffff] = (byte)uVar5;
        iVar9 = (int)uVar10;
        uVar10 = uVar10 + 2;
        iVar8 = iVar8 + 1;
        local_54[iVar9 + 1] = (byte)((ushort)uVar5 >> 8);
      } while ((ulong)uVar11 * 2 != uVar10);
      param_3 = (undefined2 *)FUN_0077db30(param_3);
      if (uVar11 != 0) {
        uVar10 = 0;
        do {
          while (uVar10 != uVar6) {
            param_3 = param_3 + local_54[uVar10];
            uVar10 = uVar10 + 1;
            if (uVar2 <= uVar10) {
              return param_3;
            }
          }
          bVar1 = local_54[uVar6];
          if (bVar1 != 0) {
            uVar11 = 0;
            puVar7 = param_3;
            do {
              param_3 = puVar7 + 1;
              FUN_0077d5c0(param_2,*puVar7);
              uVar11 = uVar11 + 1;
              puVar7 = param_3;
            } while (uVar11 < bVar1);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar2);
      }
    }
  }
  return param_3;
}


