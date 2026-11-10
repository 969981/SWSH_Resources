/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00467040; name: FUN_00467040
 */


int FUN_00467040(long *param_1,int *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar11 = (ushort *)*param_1 + 1;
  uVar6 = *(ushort *)*param_1;
  *param_1 = (long)puVar11;
  uVar12 = (uint)uVar6;
  if (uVar12 != 0) {
    uVar13 = 0;
    while( true ) {
      uVar2 = *(undefined4 *)puVar11;
      *param_1 = (long)(puVar11 + 2);
      uVar6 = puVar11[2];
      *param_1 = (long)puVar11 + 5;
      uVar4 = *(undefined1 *)((long)puVar11 + 5);
      *param_1 = (long)(puVar11 + 3);
      bVar5 = (byte)puVar11[3];
      *param_1 = (long)puVar11 + 7;
      uVar1 = bVar5 & 0x7f;
      pbVar8 = (byte *)((long)puVar11 + 7);
      while ((char)bVar5 < '\0') {
        bVar5 = *pbVar8;
        uVar1 = bVar5 & 0x7f | uVar1 << 7;
        *param_1 = (long)(pbVar8 + 1);
        pbVar8 = pbVar8 + 1;
      }
      uVar3 = *(undefined4 *)pbVar8;
      *param_1 = (long)(pbVar8 + 4);
      bVar5 = pbVar8[4];
      *param_1 = (long)(pbVar8 + 5);
      uVar7 = *(ushort *)(pbVar8 + 5);
      *param_1 = (long)(pbVar8 + 7);
      *(ulong *)(param_3 + 0x28) = *(ulong *)(param_3 + 0x28) | 1L << ((ulong)uVar1 & 0x3f);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0xff;
      local_70 = 0xff;
      local_68 = 0;
      iVar9 = FUN_0049b200(*(undefined8 *)PTR_DAT_02712b50,param_3,uVar2,(char)uVar6,uVar4,
                           (ulong)uVar1,uVar3,bVar5,pbVar8 + 7,uVar7,&local_90,4,1);
      if (iVar9 != 1) {
        return iVar9;
      }
      lVar10 = (ulong)uVar7 * 0xc;
      *param_1 = *param_1 + lVar10;
      uVar13 = uVar13 + 1;
      *param_2 = *param_2 - (int)lVar10;
      if (uVar12 <= uVar13) break;
      puVar11 = (ushort *)*param_1;
    }
  }
  return 1;
}


