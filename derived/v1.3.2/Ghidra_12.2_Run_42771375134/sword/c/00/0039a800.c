/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a800; name: FUN_0039a800
 */


uint FUN_0039a800(long param_1,long param_2,long param_3,uint param_4,undefined8 *param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long lStack_48;
  uint local_34;
  
  *(undefined1 *)(param_1 + 0x90) = 1;
  local_50 = param_2 + 0x30;
  lStack_48 = param_3 + *(long *)(PTR_DAT_02711038 + (ulong)*(ushort *)(param_3 + 8) * 8);
  if (param_5 == (undefined8 *)0x0) {
    uVar5 = (ulong)(param_4 & 1);
    (**(code **)(PTR_PTR_027126e0 + uVar5 * 8))(&local_68);
  }
  else {
    fVar7 = (float)*param_5;
    fVar9 = (float)*(undefined8 *)((long)param_5 + 0xc);
    fVar8 = (float)((ulong)*param_5 >> 0x20);
    fVar10 = (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20);
    fVar11 = (float)*(undefined8 *)((long)param_5 + 0x14);
    uVar5 = (ulong)(param_4 & 1);
    fVar12 = (fVar9 - fVar7) * 0.005;
    fVar13 = (fVar10 - fVar8) * 0.005;
    fVar14 = (fVar11 - (float)param_5[1]) * 0.005;
    local_68 = CONCAT44(fVar8 - fVar13,fVar7 - fVar12);
    local_60 = CONCAT44(fVar9 + fVar12,(float)param_5[1] - fVar14);
    uStack_58 = CONCAT44(fVar11 + fVar14,fVar10 + fVar13);
  }
  puVar6 = (undefined8 *)(param_1 + uVar5 * 0x30);
  (*(code *)**(undefined8 **)*puVar6)
            ((undefined8 *)*puVar6,&local_34,&local_68,&local_50,1,param_6 & 1);
  uVar1 = local_34;
  *(int *)((long)puVar6 + 0x2c) = *(int *)((long)puVar6 + 0x2c) + 1;
  if ((uint)(*(int *)(puVar6 + 2) * 0x20) <= local_34) {
    uVar2 = *(int *)(puVar6 + 2) * 0x40;
    if (uVar2 < 0x401) {
      uVar2 = 0x400;
    }
    FUN_00190b50(puVar6 + 1,uVar2);
  }
  lVar3 = puVar6[1];
  lVar4 = (ulong)(uVar1 >> 5) * 4;
  *(uint *)(lVar3 + lVar4) = *(uint *)(lVar3 + lVar4) & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
  return param_4 & 1 | local_34 << 1;
}


