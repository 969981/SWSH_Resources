/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1c110; name: FUN_00a1c110
 */


void FUN_00a1c110(long param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  undefined2 local_58;
  undefined1 local_56;
  uint local_54;
  
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_1 + 0x1b8);
    bVar9 = *(byte *)(lVar10 + 0x58) & 0xfe;
  }
  else {
    bVar9 = param_2[0x28];
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    bVar1 = param_2[0x29];
    local_78 = (undefined *)(CONCAT44(local_78._4_4_,(uint)bVar9) ^ 1);
    FUN_00ffd510((float)(int)local_78,uVar11,param_1 + 0x1d0);
    uVar6 = FUN_008e1600(lVar10);
    if ((uVar6 & 1) == 0) {
      uVar3 = FUN_00a0a570(lVar10);
      uVar6 = FUN_00a0a5f0();
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)(param_1 + 0x1c0);
        bVar8 = *(byte *)(lVar7 + 0x58) & 0xfe;
      }
      else {
        FUN_00ffd510((float)uVar3,uVar11,param_1 + 0x1d8);
        lVar7 = *(long *)(param_1 + 0x1c0);
        bVar8 = *(byte *)(lVar7 + 0x58) | 1;
      }
      *(byte *)(lVar7 + 0x58) = bVar8;
    }
    *(undefined2 *)(param_1 + 0x1c8) = 0x1f00;
    uVar2 = FUN_008e0a00(lVar10);
    *(undefined1 *)(param_1 + 0x1c9) = uVar2;
    *(undefined1 *)(param_1 + 0x1c8) = *param_2;
    uVar6 = FUN_008e1600(lVar10);
    if ((uVar6 & 1) == 0) {
      local_56 = 0;
      local_78 = PTR_DAT_02718ea0 + 0x10;
      local_58 = (ushort)(byte)param_2[0x2b] << 8;
      if (param_2[0x2a] != '\0') {
        local_58 = CONCAT11(param_2[0x2b],bVar9);
      }
      local_54 = bVar1 ^ 1;
      lStack_70 = lVar10;
      local_68 = lVar10;
      lStack_60 = lVar10;
      FUN_00a127a0(*(undefined8 *)(param_1 + 0x170),&local_78);
    }
    uVar4 = FUN_008e12a0(lVar10,0xd);
    uVar5 = FUN_008e12a0(lVar10,0xf);
    (**(code **)(**(long **)(param_1 + 400) + 0x30))
              (*(long **)(param_1 + 400),*(undefined8 *)(param_2 + 0x18),
               *(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x1b0),uVar4,uVar5,0x1e);
    lVar10 = *(long *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1b0) = uVar4;
    bVar9 = *(byte *)(lVar10 + 0x58) | 1;
  }
  *(byte *)(lVar10 + 0x58) = bVar9;
  return;
}


