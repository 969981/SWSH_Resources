/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041aa10; name: FUN_0041aa10
 */


void FUN_0041aa10(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 local_68;
  uint local_64;
  
  if ((*(long *)(param_1 + 0x80) != 0) && (*(char *)(param_1 + 0x94) != '\0')) {
    local_64 = FUN_004193b0(*(undefined8 *)(param_1 + 0x10));
    lVar10 = *(long *)(param_2 + 0x10);
    lVar11 = *(long *)(lVar10 + 0x100);
    bVar1 = *(byte *)(lVar11 + 0x20) & 0x1f;
    if (bVar1 != 8) {
      if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
        FUN_0041b370(param_1 + 0x60);
        FUN_0041a5f0(param_1);
        return;
      }
      auVar3 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)*(int *)(lVar11 + 0x28))) *
               SEXT816(0x20c49ba5e353f7cf);
      iVar2 = *(int *)(lVar11 + 0x3c);
      uVar4 = local_64 - iVar2;
      iVar5 = *(int *)(lVar11 + 0x30) - ((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f));
      uVar6 = local_64 - iVar5;
      if ((int)local_64 <= (int)uVar6) {
        local_64 = uVar6;
      }
      if ((int)local_64 <= (int)uVar4) {
        local_64 = uVar4;
      }
      local_64 = local_64 & ((int)local_64 >> 0x1f ^ 0xffffffffU);
      local_68 = *(undefined4 *)(lVar11 + 0x24);
      iVar8 = FUN_0040e550(*(undefined8 *)(param_1 + 0x78),local_64,bVar1,&local_68,0,&local_64);
      if (iVar8 == 1) {
        do {
          uVar7 = local_64;
          iVar8 = FUN_0040eaa0(*(undefined8 *)(param_1 + 0x78));
          iVar8 = FUN_00414ea0(lVar10,iVar8 + uVar7);
          uVar6 = iVar8 + uVar4;
          if ((int)uVar6 <= (int)uVar7) {
            iVar9 = FUN_0040ead0(*(undefined8 *)(param_1 + 0x78));
            if ((int)uVar7 < iVar9) {
              iVar5 = uVar7 + iVar5;
              iVar2 = uVar7 + iVar2;
              iVar8 = iVar2 - iVar8;
              FUN_0041ac20(param_1,param_2,iVar5,iVar8);
              FUN_0041ad60(param_1,param_2,iVar5,(int *)(lVar11 + 0x28));
              FUN_0041af00(param_1,param_2,iVar8,iVar2,lVar11 + 0x34);
              FUN_0041a890(param_1,uVar7,lVar10);
              return;
            }
            return;
          }
          local_68 = *(undefined4 *)(lVar11 + 0x24);
          local_64 = uVar6;
          iVar8 = FUN_0040e550(*(undefined8 *)(param_1 + 0x78),uVar6,*(byte *)(lVar11 + 0x20) & 0x1f
                               ,&local_68,0,&local_64);
        } while (iVar8 == 1);
      }
    }
  }
  return;
}


