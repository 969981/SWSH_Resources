/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009677b0; name: FUN_009677b0
 */


void FUN_009677b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 local_e8 [5];
  undefined2 local_c0 [6];
  undefined4 local_b4 [5];
  uint local_a0 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined4 local_6c;
  uint uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_48 [4];
  
  pbVar6 = (byte *)*param_3;
  uVar4 = (ulong)*pbVar6;
  bVar5 = pbVar6[1];
  if ((uint)bVar5 + (uint)*pbVar6 != 0) {
    uVar9 = 0;
    pbVar10 = pbVar6 + 0xd;
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      if ((*pbVar10 >> 3 & 1) != 0) {
        uVar2 = FUN_009424e0(param_1,pbVar10[-7]);
        local_e8[uVar7] = uVar2;
        local_c0[uVar7] = *(undefined2 *)(pbVar10 + -9);
        uVar8 = (ulong)((int)uVar7 + 1);
        local_b4[uVar7] = *(undefined4 *)(pbVar10 + -5);
        local_a0[uVar7] = *pbVar10 & 1;
        uVar4 = (ulong)*pbVar6;
        bVar5 = pbVar6[1];
      }
      uVar9 = uVar9 + 1;
      pbVar10 = pbVar10 + 0xc;
      uVar7 = uVar8;
    } while (uVar9 < uVar4 + bVar5);
    if ((uVar8 & 0xff) != 0) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 & 0xff;
        uVar2 = local_e8[uVar4];
        uVar9 = FUN_008e55a0(uVar2);
        if ((uVar9 & 1) != 0) {
          local_70 = local_c0[uVar4];
          local_80 = param_3[3];
          uStack_78 = uVar2;
          local_60 = param_3[1];
          uStack_58 = param_3[2];
          local_6c = local_b4[uVar4];
          uStack_68 = local_a0[uVar4];
          FUN_00942450(param_1);
          uVar3 = FUN_00925a00();
          FUN_009679c0(uVar3,local_48,&local_80);
          FUN_0093b130(param_3[4],uVar2,local_48[0],1);
        }
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar1;
      } while ((uVar1 & 0xff) < ((uint)uVar8 & 0xff));
    }
  }
  return;
}


