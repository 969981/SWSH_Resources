/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0157e9d0; name: FUN_0157e9d0
 */


undefined8 FUN_0157e9d0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_c0 [44];
  float local_94;
  uint local_90;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong local_68;
  float local_58;
  float local_54;
  ulong local_50;
  undefined4 local_48;
  float local_44;
  
  puVar1 = PTR_DAT_027194e8;
  if (*(long *)PTR_DAT_027194e8 != 0) {
    FUN_00dfd500();
    lVar2 = *(long *)puVar1;
    if (lVar2 != 0) {
      dVar5 = *(double *)(param_2 + 0x10);
      dVar9 = *(double *)(param_2 + 0x18);
      lVar4 = *(long *)(param_2 + 8);
      dVar6 = *(double *)(param_2 + 0x20);
      dVar10 = *(double *)(param_2 + 0x28);
      dVar7 = *(double *)(param_2 + 0x30);
      dVar11 = *(double *)(param_2 + 0x38);
      dVar8 = *(double *)(param_2 + 0x48);
      dVar12 = *(double *)(param_2 + 0x50);
      uVar3 = *(undefined8 *)(param_2 + 0x40);
      FUN_00dfb4a0(local_c0,lVar2);
      local_80 = CONCAT44((float)dVar9,(float)dVar5);
      local_70 = CONCAT44((float)dVar7,(float)dVar10);
      local_44 = 0.0;
      if (0 < lVar4) {
        local_44 = 1.0 / (float)lVar4;
      }
      local_48 = (undefined4)uVar3;
      local_50 = (ulong)local_90;
      if (0.0 < (float)dVar8) {
        local_94 = ((float)dVar8 * DAT_01d4bb38) / DAT_01d4c284;
      }
      _local_58 = CONCAT44(local_94,((float)dVar12 * DAT_01d4bb38) / DAT_01d4c284);
      uStack_78 = (ulong)(uint)(float)dVar6;
      local_68 = (ulong)(uint)(float)dVar11;
      FUN_00dfdde0(lVar2,&local_80);
    }
  }
  return 0;
}


